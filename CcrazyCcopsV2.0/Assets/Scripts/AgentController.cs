using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AgentController : MonoBehaviour
{
    // Start is called before the first frame update

    public Circuit circuit;
    Drive ds;
    public float steeringSenstivity = 0.01f;
    Vector3 target;
    int currentWP =0;
    public float brake = 0f;

    public float accel =1f;
    void Start()
    {
        ds = this.GetComponent<Drive>();
        target = circuit.waypoints[currentWP].transform.position;
    }

    // Update is called once per frame
    void Update()
    {
        Vector3 localTarget = ds.rb.gameObject.transform.InverseTransformPoint(target);
        float distanceToTarget = Vector3.Distance(target, ds.rb.gameObject.transform.position);
        float targetAngle = Mathf.Atan2(localTarget.x, localTarget.z) * Mathf.Rad2Deg;

        float steer = Mathf.Clamp(targetAngle*steeringSenstivity, -1,1)* Mathf.Sign(ds.currentSpeed);
        
        
       
        
        ds.Go(accel,steer, brake);

        if(distanceToTarget>2) //Threshold .. make it large if car circles
        {
            currentWP++;
            if(currentWP >= circuit.waypoints.Length)
            {
                currentWP =0;

            }
            target = circuit.waypoints[currentWP].transform.position;
            ds.CheckForSkid();
            ds.CalculateEngineSound();
        }
    }
}
