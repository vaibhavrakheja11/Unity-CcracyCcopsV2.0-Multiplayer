using System;
using UnityEngine;
using UnityStandardAssets.CrossPlatformInput;

namespace UnityStandardAssets.Vehicles.Car
{
    [RequireComponent(typeof (CarController))]
    public class AgentAIController : MonoBehaviour
    {
        private CarController m_Car; // the car controller we want to use
        

        public Circuit circuit;

        CarController ds;

        Vector3 target;
        
        public float steeringSenstivity = 0.01f;

        int currentWP =0;
        public float brake = 0f;

        public float accel =1f;
        private void Awake()
        {
            // get the car controller
            m_Car = GetComponent<CarController>();
        }

        public void Start()
        {
            target = circuit.waypoints[currentWP].transform.position;
            ds = this.GetComponent<CarController>();
        }


        public void Update()
        {
        Vector3 localTarget = ds.rb.gameObject.transform.InverseTransformPoint(target);
        float distanceToTarget = Vector3.Distance(target, ds.rb.gameObject.transform.position);
        float targetAngle = Mathf.Atan2(localTarget.x, localTarget.z) * Mathf.Rad2Deg;

        float steer = Mathf.Clamp(targetAngle*steeringSenstivity, -1,1)* Mathf.Sign(ds.CurrentSpeed);

          ds.Move(steer, accel, 0, brake);
        if(distanceToTarget>2) //Threshold .. make it large if car circles
        {
            currentWP++;
            if(currentWP >= circuit.waypoints.Length)
            {
                currentWP =0;

            }
            target = circuit.waypoints[currentWP].transform.position;



        }

        }

//         private void FixedUpdate()
//         {
//             // pass the input to the car!
//             float h = CrossPlatformInputManager.GetAxis("Horizontal");
//             float v = CrossPlatformInputManager.GetAxis("Vertical");
// #if !MOBILE_INPUT
//             float handbrake = CrossPlatformInputManager.GetAxis("Jump");
//             m_Car.Move(h, v, v, handbrake);
// #else
//             m_Car.Move(h, v, v, 0f);
// #endif
//         }
    }
}
