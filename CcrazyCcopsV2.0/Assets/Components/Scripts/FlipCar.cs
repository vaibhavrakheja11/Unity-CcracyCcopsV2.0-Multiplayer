using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FlipCar : MonoBehaviour
{
    // Start is called before the first frame update
    Rigidbody rb;
    float lastTimeCheck;

    void Start()
    {
        
        rb= this.GetComponent<Rigidbody>();
         
    }

    // Update is called once per frame
    void Update()
    {
        if(transform.up.y > 0.5f || rb.velocity.magnitude >1 )
        {
            lastTimeCheck = Time.time;
        }

        if(Time.time>lastTimeCheck + 3)
        {
            RightCar();
        }
    }

    void RightCar()
    {
        this.transform.position += Vector3.up;
        this.transform.rotation = Quaternion.LookRotation(this.transform.forward);
    }
}
