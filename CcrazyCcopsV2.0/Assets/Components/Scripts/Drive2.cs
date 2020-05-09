using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Drive2 : MonoBehaviour
{
    public WheelCollider[] WC;
    public float torque = 200;
    public GameObject[] Wheel;

    public float MaxStreeAngle = 30;

    public float MaxBrakeTorque = 500;

    public AudioSource skidSound;
    public AudioSource highAccel;


    public ParticleSystem smoke;
    ParticleSystem[] skidSmoke = new ParticleSystem[4];

    public Rigidbody rb;
    public float GearLength= 3;
    public float CurrentSpeed {get { return rb.velocity.magnitude * GearLength;}}
    public float lowPitch = 1f;
    public float highPitch = 6f;
    public int NumGears = 5;
    float rpm;
    int currentGear =1;
    float currentGearPerc;

    public float maxSpeed =200f;

    public Transform SkidTrailPrefab;
    Transform[] skidTrails = new Transform[4];



    public void StartSkidTrail(int i)
    {
         if(skidTrails[i] == null)
         skidTrails[i] = Instantiate(SkidTrailPrefab);


        skidTrails[i].parent = WC[i].transform;
        skidTrails[i].localRotation = Quaternion.Euler(90,0,0);
        skidTrails[i].localPosition = -Vector3.up * WC[i].radius;
         

    }

    public void EndSkidTrail(int i)
    {
        if(skidTrails[i] == null) return;
        Transform holder = skidTrails[i];
        skidTrails[i] = null;
        holder.parent = null;
        holder.rotation = Quaternion.Euler(90,0,0); 
        Destroy(holder.gameObject, 30);


    }
    // Start is called before the first frame update
    void Start()
    {
       for(int i =0 ;i<4 ; i++)
       {
           skidSmoke[i] = Instantiate(smoke);
           skidSmoke[i].Stop();
       }

    }


    void CalculateEngineSound()
    {
        float gearPercentage = (1/(float)NumGears);
        float targetGearFactor = Mathf.InverseLerp(gearPercentage*currentGear, gearPercentage *(currentGear +1), Mathf.Abs(CurrentSpeed/maxSpeed));
        currentGearPerc = Mathf.Lerp(currentGearPerc, targetGearFactor, Time.deltaTime * 5f);

        var gearNumFactor = currentGear/ (float)NumGears;
        rpm = Mathf.Lerp(gearNumFactor,1,currentGearPerc);

        float speedPercentage = Mathf.Abs(CurrentSpeed/maxSpeed);
        float upperGearMax = (1/(float)NumGears)*(currentGear+1);
        float downGearmax  = (1/(float)NumGears)*currentGear;

        if(currentGear >0 && speedPercentage < downGearmax)
        currentGear--;

         if(currentGear > upperGearMax && speedPercentage < (NumGears-1))
        currentGear++;
        
        float pitch = Mathf.Lerp(lowPitch, highPitch, rpm);
        highAccel.pitch = Mathf.Min(highPitch,pitch)* 0.25f;


    }

    // Update is called once per frame
    void Update()
    {
        float a = Input.GetAxis("Vertical");
        float s = Input.GetAxis("Horizontal");
        float b = Input.GetAxis("Jump");
        Go(a,s,b);
        CheckForSkid();
        CalculateEngineSound();
    }

    void Go(float accel , float steer, float brake)
    {
        accel = Mathf.Clamp(accel, -1, 1);
        steer = Mathf.Clamp(steer, -1, 1) * MaxStreeAngle;
        brake = Mathf.Clamp(brake, 0, 1) * MaxBrakeTorque;


        float thrustTorque = 0;
        if(CurrentSpeed < maxSpeed)
        {
            thrustTorque = accel * torque; 
        }

        for(int i =0; i< 4; i++)
        {

            WC[i].motorTorque = thrustTorque;

            if(i<2)
                WC[i].steerAngle = steer;
            else
                WC[i].brakeTorque = brake;

            Quaternion quat;
            Vector3 position;
            WC[i].GetWorldPose(out position , out quat);
            Wheel[i].transform.position = position;
            Wheel[i].transform.rotation = quat;
        }


        

    }


    void CheckForSkid()
    {
        int numSkidding =0;
        for(int i=0; i<4 ; i++)
        {
            WheelHit wheelHit;
            WC[i].GetGroundHit(out wheelHit);

            if(Mathf.Abs(wheelHit.forwardSlip) >= 0.4f || Mathf.Abs(wheelHit.sidewaysSlip) >= 0.4f)
            {
                numSkidding++;
                if(!skidSound.isPlaying)
                {
                    skidSound.Play();               
                }
                //StartSkidTrail(i);
                skidSmoke[i].transform.position = WC[i].transform.position - WC[i].transform.up * WC[i].radius;
                skidSmoke[i].Emit(1);
            }
            else{
               // EndSkidTrail(i);
            }
        }

        if(numSkidding == 0 && skidSound.isPlaying)
        {
            skidSound.Stop();
        }
    }
}
