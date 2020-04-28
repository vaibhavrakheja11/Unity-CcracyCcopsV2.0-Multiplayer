using System;
using UnityEngine;
using System.Collections;
using UnityStandardAssets.CrossPlatformInput;


namespace UnityStandardAssets.Vehicles.Car
{
    [RequireComponent(typeof (CarController))]
    public class CarUserControl : MonoBehaviour
    {
        private CarController m_Car; // the car controller we want to use

        public bool isReady;

        public GameObject particleGameObjectL;
        public GameObject particleGameObjectR;

        private void Awake()
        {
            // get the car controller
            m_Car = GetComponent<CarController>();
            isReady = true;
        }

        public void Update()
        {
            if(isReady)
            {
                particleGameObjectL.GetComponent<ParticleSystem>().Stop();
                particleGameObjectR.GetComponent<ParticleSystem>().Stop();
            }
            if(Input.GetKeyDown(KeyCode.LeftShift) && isReady){
                 Nitrous();
            }
        }


        private void FixedUpdate()
        {
            // pass the input to the car!
            float h = CrossPlatformInputManager.GetAxis("Horizontal");
            float v = CrossPlatformInputManager.GetAxis("Vertical");
            float handbrake = CrossPlatformInputManager.GetAxis("Jump");
            
            

#if !MOBILE_INPUT
            
            m_Car.Move(h, v, v, handbrake);
#else
            m_Car.Move(h, v, v, handbrake);
#endif
        }


        public void Nitrous() {
            //audio.PlayOneShot(activateSound, 1);
            isReady = false;
            this.gameObject.GetComponent<Rigidbody>().AddForce(transform.forward * 800, ForceMode.Acceleration);
            particleGameObjectL.GetComponent<ParticleSystem>().Play();
            particleGameObjectR.GetComponent<ParticleSystem>().Play();
            StartCoroutine(Boost());
     
        }

        IEnumerator Boost()
            {
                yield return new WaitForSeconds(2.0f);
                isReady = true;
        }

    }
}
