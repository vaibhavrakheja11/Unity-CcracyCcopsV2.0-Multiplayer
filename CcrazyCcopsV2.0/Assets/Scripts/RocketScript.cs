using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Realtime;
using Photon.Pun;

public class RocketScript : MonoBehaviourPunCallbacks
{
    // Start is called before the first frame update
    public Transform rocketTarget;

    public Rigidbody rocketRigidbody;

    public float turn;
    public float speed;

    float bulletDamage;
    void Start()
    {
       
        
        
        
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        rocketRigidbody.velocity = transform.forward * speed;
        var RocketTargetRotation = Quaternion.LookRotation(rocketTarget.position - transform.position);

        rocketRigidbody.MoveRotation(Quaternion.RotateTowards(transform.rotation, RocketTargetRotation, turn)); 
    }

    public void SetTarget(GameObject target)
    {
        rocketTarget = target.transform;
    }

    public void Initialize(float damage)
    {
        bulletDamage = damage;
    }

    private void OnTriggerEnter(Collider collision)
    {
        

        
        if(collision.gameObject.CompareTag("Player"))
        {
           
             if(!collision.gameObject.GetComponent<PhotonView>().IsMine)
             {
                collision.gameObject.GetComponent<PhotonView>().RPC("DoDamage", RpcTarget.AllBuffered, bulletDamage);
                Debug.Log("Dealth "+bulletDamage+" damage to "+ collision.gameObject.name); 
            }
            
            Destroy(gameObject);
        }

        
    }

}
