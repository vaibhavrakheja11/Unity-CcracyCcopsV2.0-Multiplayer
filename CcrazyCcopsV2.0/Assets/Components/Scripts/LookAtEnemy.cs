using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Realtime;
using Photon.Pun;
 
public class LookAtEnemy : MonoBehaviourPunCallbacks
{
    public GameObject enemy;
    // This is what the player is looking at. In this example it is the dinosaur's head.

    public GameObject DefaultAim;
    public Transform[] EnemyArray;
    public GameObject[] EnemyArrayObj;

 
    public GameObject fovStartPoint;
    // We will use the forward direction of whatever GameObject you give it.
 
    public float lookSpeed = 200;
    // How fast the rotation happens.
 
    public float maxAngle = 45;
    // The maximum fov to trigger looking at the enemy.
 
    public float maxAngleReset = 90;
    // The maximum fov to trigger returning to the base state.
 
    public bool canLean = false;
    // This turns on looking up/down depending on the enemy's height.
 
    public bool leftArm = false;
    public bool rightArm = false;
 
    public static bool canShoot = false;
 
    private bool canShootLeft = false;
    private bool canShootRight = false;
 
 
    private Quaternion lookAt;
    private Quaternion targetRotation;

    public float MaxDist = 30f;

    void Start()
    {
        EnemyArrayObj = GameObject.FindGameObjectsWithTag("Enemy");
       for(int i=0; i<EnemyArrayObj.Length; i++)
       {
           //Debug.Log(EnemyArrayObj[i].name);
           EnemyArray[i] = EnemyArrayObj[i].transform;
       }

       Invoke("FindEnenmy", 10f);
    }
 
    void Update()
    {
       
        RotateGun();


        float dist = Vector3.Distance(GetClosestEnemy(EnemyArray).gameObject.transform.position, fovStartPoint.transform.position);
        if(dist < MaxDist)
        {
            enemy = GetClosestEnemy(EnemyArray).gameObject;
        }
        else
        {
            enemy = DefaultAim;
        }
        
    }

    

    public GameObject GetEnemyForMissile()
    {
        return enemy;
    }

    public void FindEnenmy()
    {
        if(GameObject.FindGameObjectsWithTag("Player")!=null)
        {
        EnemyArrayObj = GameObject.FindGameObjectsWithTag("Player");
       for(int i=0; i<EnemyArrayObj.Length; i++)
       {
            if(!EnemyArrayObj[i].GetComponent<PhotonView>().IsMine)
            {
           //Debug.Log(EnemyArrayObj[i].name);
           EnemyArray[i] = EnemyArrayObj[i].transform;
            }
       }
        }
        
    }


    void RotateGun()
    {
        if (enemy != null && EnemyInFieldOfView(fovStartPoint))
        {
            Vector3 direction = enemy.transform.position - transform.position;
 
            if (!canLean)
            {
                direction = new Vector3(direction.x, 0, direction.z);
            }
 
            // Rotate the current transform to look at the enemy
            targetRotation = Quaternion.LookRotation(direction);
            lookAt = Quaternion.RotateTowards(
            transform.rotation, targetRotation, Time.deltaTime * lookSpeed);
            transform.rotation = lookAt;
 
        }
        else if (enemy != null && EnemyInFieldOfViewNoResetPoint(fovStartPoint))
        {
            return;
        }
        else
        {
            
                // return to initial local angle
                Quaternion targetRotation = Quaternion.Euler(0, 0, 0);
                transform.localRotation = Quaternion.RotateTowards(
                transform.localRotation, targetRotation, Time.deltaTime * lookSpeed);
            
        }
    }
 
    bool EnemyInFieldOfView(GameObject looker)
    {
 
        Vector3 targetDir = enemy.transform.position - looker.transform.position;
        // gets the direction to the enemy.
 
        float angle = Vector3.Angle(targetDir, looker.transform.forward);
        // gets the angle based on the direction.
 
        if (angle < maxAngle)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
 
    bool EnemyInFieldOfViewNoResetPoint(GameObject looker)
    {
        Vector3 targetDir = enemy.transform.position - looker.transform.position;
        float angle = Vector3.Angle(targetDir, looker.transform.forward);
 
        if (angle < maxAngleReset)
        {
            return true;
        }
        else
        {
            return false;
        }
    }


    public Transform GetClosestEnemy(Transform[] enemies)
        {
            Transform tMin = null;
            float minDist = Mathf.Infinity;
            Vector3 currentPos = transform.position;
            foreach (Transform t in enemies)
            {
                float dist = Vector3.Distance(t.position, currentPos);
                if (dist < minDist)
                {
                    tMin = t;
                    minDist = dist;
                }
            }
            return tMin;
        }

}
