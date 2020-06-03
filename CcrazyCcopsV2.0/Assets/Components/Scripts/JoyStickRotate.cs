using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityStandardAssets.CrossPlatformInput;
using Photon.Realtime;
using Photon.Pun;

public class JoyStickRotate : MonoBehaviourPunCallbacks
{
    // Start is called before the first frame update

    public Transform Gun;
    

    public float Senstivity = 2f;

    private float LookSpeed = 50f;
    

    

    private Shoot shoot;
    void Start()
    {   
        shoot = GetComponentInChildren<Shoot>();
        
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        if(photonView.IsMine)
        {

            
        float h = CrossPlatformInputManager.GetAxis("Horizontal1");
        float v = CrossPlatformInputManager.GetAxis("Vertical1");
        

        float rotAmountX = h * Senstivity;
        float rotAmountY = v * Senstivity/2;

        Vector3 rotGun = Gun.transform.rotation.eulerAngles;
        //Debug.Log("Crosss of y-------->"+Gun.transform.rotation.x);
        // if(Gun.transform.rotation.x < 10f && Gun.transform.rotation.x > -10f)
        // {
        //     rotGun.x -= rotAmountY;
        // }
        
        rotGun.z  = 0;
        rotGun.y += rotAmountX;
        

        Gun.rotation = Quaternion.Euler(rotGun);

        if(v > 0.7)
        {
            shoot.CheckShoot();
        }
        //Debug.Log("h: "+ h + "v: "+ v);
        if(h == 0 || v ==0)
        {
            Quaternion targetRotation = Quaternion.Euler(0, 0, 0);
            Gun.transform.localRotation = Quaternion.RotateTowards(
            Gun.transform.localRotation, targetRotation, Time.deltaTime * LookSpeed);
            
        }

        }


        
         
        
    }
}
