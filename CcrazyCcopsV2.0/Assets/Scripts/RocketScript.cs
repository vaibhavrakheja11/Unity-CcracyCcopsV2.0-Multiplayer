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

    private string shotBy;

    private string shotTo;

    private string type= "rocket";

    public ParticleSystem Blast;

    
    void Start()
    {
       Blast.Stop();
        
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        rocketRigidbody.velocity = transform.forward * speed;
        var RocketTargetRotation = Quaternion.LookRotation(rocketTarget.position - transform.position);

        rocketRigidbody.MoveRotation(Quaternion.RotateTowards(transform.rotation, RocketTargetRotation, turn)); 
        SendAlert(rocketTarget.gameObject);
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
            shotTo = collision.gameObject.GetComponent<PhotonView>().Owner.NickName;
             if(!collision.gameObject.GetComponent<PhotonView>().IsMine)
             {
                if(shotBy!=shotTo)
                {
                collision.gameObject.GetComponent<PhotonView>().RPC("DoDamage", RpcTarget.AllBuffered, bulletDamage, shotTo, shotBy,type);
                
                photonView.RPC("SetScore", RpcTarget.All, null);
                }
                //Debug.Log("Dealth "+bulletDamage+" damage to "+ collision.gameObject.name); 
            }
            
            Destroy(gameObject);
        }

        
    }


    public void SetShotBy(string ShotBy)
    {
        shotBy = ShotBy;
    }

    public string GetShotBy()
    {
        return shotBy;
    }


    [PunRPC]
    private void SetScore()
    {
        Debug.Log(shotBy +" shot "+ shotTo);
    }

    public void SendAlert(GameObject alertPlayer)
    {
        try{
            TakeDamage td = alertPlayer.GetComponentInChildren<TakeDamage>();
            td.GetComponent<PhotonView>().RPC("IsTarget", RpcTarget.AllBuffered, true);
        }
        catch
        {

        }
        
    }

}
