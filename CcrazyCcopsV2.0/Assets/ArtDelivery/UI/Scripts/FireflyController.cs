using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using UnityEngine;

namespace Essence
{
    public class FireflyController : MonoBehaviour
    {
        [SerializeField]
        float minVelocity = 1.00f;
        [SerializeField]
        float maxVelocity = 1.00f;
        [SerializeField]
        bool randomizeSpeedOnRotate = true;


        [SerializeField]
        float targetPositionRadius = 0.01f;

        [SerializeField]
        float degreesPerSecond = 180.00f;
        [SerializeField]
        float deltaPositionThreshold = 0.10f;

        [SerializeField]
        ParticleSystem trailParticle;
        [SerializeField]
        float trailLifetime = 1.00f;

        Vector3 origin;
        Vector3 targetPosition;

        float currentVelocity;

        float swarmRadius = 10.00f;

        private void Start()
        {
            ParticleSystem.MainModule mainModule = trailParticle.main;
            mainModule.startLifetime = trailLifetime;

        }


        private void Update()
        {
            Vector3 position = transform.position;
            Vector3 look = targetPosition - position;

            if (look.magnitude < targetPositionRadius)
            {
                ChangeTarget();
                look = targetPosition - position;
            }

            Quaternion targetRotation = Quaternion.LookRotation(Vector3.forward, look);
            float angle = degreesPerSecond * Time.deltaTime;
            Quaternion rotation = Quaternion.RotateTowards(transform.rotation, targetRotation, angle);
            transform.rotation = rotation;

            Vector3 forward = transform.up;

            position += forward * currentVelocity * Time.deltaTime;
            transform.position = position;
        }

        private void OnEnable()
        {
            Initialize(swarmRadius);
        }

        public void Initialize(float swarmRadius)
        {
            this.swarmRadius = swarmRadius;

            origin = transform.parent.position;
            targetPosition = transform.position;

            ChangeTarget();

            if (!randomizeSpeedOnRotate)
            {
                currentVelocity = UnityEngine.Random.Range(minVelocity, maxVelocity);
            }
}

        private void ChangeTarget()
        {
            origin = transform.parent.position;

            Vector3 randomPosition;
            Vector3 delta;

            Vector3 unit = UnityEngine.Random.insideUnitSphere;
            randomPosition = unit * swarmRadius + origin;
            randomPosition.z = origin.z;
            delta = targetPosition - randomPosition;

            while (delta.magnitude < swarmRadius * deltaPositionThreshold)
            {
                unit = UnityEngine.Random.insideUnitSphere;
                randomPosition = unit * swarmRadius + origin;
                randomPosition.z = origin.z;
                delta = targetPosition - randomPosition;
            }

            //Debug.Log(unit + ":" + swarmRadius + ":" + randomPosition + ":" + origin);
            targetPosition = randomPosition;

            if (randomizeSpeedOnRotate)
            {
                currentVelocity = UnityEngine.Random.Range(minVelocity, maxVelocity);
            }
        }


        public float SwarmRadius
        {
            get
            {
                return swarmRadius;
            }
            set
            {
                swarmRadius = value;
                ChangeTarget();
            }
        }

    }
}
