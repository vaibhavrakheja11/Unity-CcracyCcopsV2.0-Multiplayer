using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

using UnityEngine;

namespace Essence
{
    [ExecuteInEditMode]
    public class FireflySpawner : MonoBehaviour
    {
        [SerializeField]
        FireflyController fireflyPrefab;

        [SerializeField]
        int fireflyCount;// = 3;
        int lastFireflyCount;

        [SerializeField]
        float swarmRadius;// = 10.0f;
        float lastSwarmRadius;

        List<FireflyController> fireflies;
        Queue<FireflyController> oldFireflies;

        bool hasInitted = false;

        private void Awake()
        {
            fireflies = new List<FireflyController>();
            oldFireflies = new Queue<FireflyController>();
            FireflyController[] flies = GetComponentsInChildren<FireflyController>();
            for (int i = 0; i < flies.Length; i++)
            {
                fireflies.Add(flies[i]);
            }
            fireflyCount = fireflies.Count;
            lastFireflyCount = fireflyCount;
            lastSwarmRadius = swarmRadius;
        }

        private void Start()
        {
            lastSwarmRadius = swarmRadius;
            if (fireflies != null)
            {
                for (int i = 0; i < fireflyCount; i++)
                {
                    fireflies[i].Initialize(swarmRadius);
                }
            }

            Debug.Log("Start");
            if (!hasInitted && Application.isPlaying)
            {
                Debug.Log(hasInitted);
                hasInitted = true;
                gameObject.SetActive(false);
            }
            else
            {
                Debug.Log("not initted");
            }
        }

        private void Update()
        {
            
        }


        private void OnValidate()
        {
            //if (GUI.changed)
            //{
                if (fireflyCount != lastFireflyCount)
                {
                    UpdateFireflyCount(fireflyCount);
                }
                if (swarmRadius != lastSwarmRadius)
                {
                    UpdateSwarmRadius(swarmRadius);
                }
            //}
        }

        public void Regenerate()
        {
            for (int i = 0; i < fireflies.Count; i++)
            {
                Destroy(fireflies[i].gameObject);
            }
            fireflies.Clear();

        }

        private void CreateSwarm()
        {
            for (int i = 0; i < fireflyCount; i++)
            {
                CreateFirefly();
            }
        }

        public int FireflyCount
        {
            get
            {
                return fireflyCount;
            }
            set
            {
                UpdateFireflyCount(value);
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
                UpdateSwarmRadius(value);
            }
        }

        private void UpdateFireflyCount(int count)
        {
            if (fireflies != null)
            {
                if (count < lastFireflyCount)
                {
                    List<FireflyController> newFireflies = new List<FireflyController>();
                    for (int i = 0; i < count; i++)
                    {
                        newFireflies.Add(fireflies[i]);
                    }
                    for (int i = count; i < lastFireflyCount; i++)
                    {

                        if (Application.isPlaying)
                        {
                            Destroy(fireflies[i].gameObject);
                        }
                        else
                        {
                            oldFireflies.Enqueue(fireflies[i]);
                        }
                    }
#if UNITY_EDITOR
                    if (!Application.isPlaying)
                    {
                        UnityEditor.EditorApplication.delayCall += () =>
                        {
                            FireflyController f;
                            while (oldFireflies.Count > 0)
                            {
                                f = oldFireflies.Dequeue();
                                DestroyImmediate(f.gameObject);
                                
                            }
                        };
                    }
#endif
                    fireflies.Clear();
                    fireflies = newFireflies;
                }
                else if (count > lastFireflyCount)
                {
                    for (int i = lastFireflyCount; i < count; i++)
                    {
                        CreateFirefly();
                    }
                }
            }

            lastFireflyCount = count;
        }

        private void UpdateSwarmRadius(float swarmRadius)
        {
            lastSwarmRadius = swarmRadius;
            if (fireflies != null)
            {
                for (int i = 0; i < fireflyCount; i++)
                {
                    fireflies[i].SwarmRadius = swarmRadius;
                }
            }
        }

        private void CreateFirefly()
        {
            FireflyController firefly;
            Vector3 position;

            position = transform.position + (UnityEngine.Random.insideUnitSphere * swarmRadius);
            position.z = transform.position.z;
            firefly = Instantiate(fireflyPrefab, position, Quaternion.identity, this.transform);
            firefly.Initialize(swarmRadius);
            fireflies.Add(firefly);
        }

    }
}
