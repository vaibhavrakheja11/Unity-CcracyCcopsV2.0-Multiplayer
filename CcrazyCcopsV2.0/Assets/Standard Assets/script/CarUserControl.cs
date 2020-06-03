using System;
using UnityEngine;
using System.Collections;
using UnityStandardAssets.CrossPlatformInput;
using Photon.Realtime;
using Photon.Pun;


namespace UnityStandardAssets.Vehicles.Car
{
    [RequireComponent(typeof (CarController))]
    public class CarUserControl : MonoBehaviourPunCallbacks
    {
        private CarController m_Car; // the car controller we want to use

        public bool isReady;

        public GameObject particleGameObjectL;
        public GameObject particleGameObjectR;

        public int BoostForce = 600;

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
            // if(Input.GetKeyDown(KeyCode.LeftShift) && isReady){
            //      Nitrous();
            // }
        }


        private void FixedUpdate()
        {
            // pass the input to the car!
            float h = CrossPlatformInputManager.GetAxis("Horizontal");
            float v = CrossPlatformInputManager.GetAxis("Vertical");
            float handbrake = CrossPlatformInputManager.GetAxis("Jump");
            float boost = CrossPlatformInputManager.GetAxis("Boost");

            
            if(boost > 0.001f)
            {
                if(photonView.IsMine)
                {
                    Nitrous();
                }
            }

            if((h > .5f || h < -.5f) && v > 0.01f)
            {
                v = .7f;
            }

            

#if !MOBILE_INPUT
             if(photonView.IsMine)
                {
            m_Car.Move(h, v, v, handbrake);
               }
#else
        if(photonView.IsMine)
                {
            m_Car.Move(h, v, v, handbrake);
             }
#endif
        }


        public void Nitrous() {
            //audio.PlayOneShot(activateSound, 1);
            if(isReady)
            {
            isReady = false;
            this.gameObject.GetComponent<Rigidbody>().AddForce(transform.forward * BoostForce, ForceMode.Acceleration);
            particleGameObjectL.GetComponent<ParticleSystem>().Play();
            particleGameObjectR.GetComponent<ParticleSystem>().Play();
            StartCoroutine(Boost());
            }
            
            
     
        }

        IEnumerator Boost()
            {
                yield return new WaitForSeconds(4.0f);
                isReady = true;
        }

    }
}
