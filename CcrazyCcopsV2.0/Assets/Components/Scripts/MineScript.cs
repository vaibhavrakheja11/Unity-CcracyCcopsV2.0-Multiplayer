using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Realtime;
using Photon.Pun;

public class MineScript : MonoBehaviourPunCallbacks
{
    // Start is called before the first frame update
    


    float bulletDamage;

    private string shotBy;

    private string shotTo;

    private string type= "mine";

    public ParticleSystem Potty;

    
    void Start()
    {
       Potty.Stop();
        
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        
    }

    

    public void Initialize(float damage)
    {
        bulletDamage = damage;
    }

    private void OnTriggerEnter(Collider collision)
    {

        Debug.Log(collision.name);

        if(collision.gameObject.CompareTag("Player"))
        {
            shotTo = collision.gameObject.GetComponent<PhotonView>().Owner.NickName;
            //  if(!collision.gameObject.GetComponent<PhotonView>().IsMine)
            //  {
            //     if(shotBy!=shotTo)
            //     {
            //     collision.gameObject.GetComponent<PhotonView>().RPC("DoDamage", RpcTarget.AllBuffered, bulletDamage, shotTo, shotBy,type);
                
            //     photonView.RPC("SetScore", RpcTarget.All, null);
            //    }
            //  }
            collision.gameObject.GetComponent<PhotonView>().RPC("DoDamage", RpcTarget.AllBuffered, bulletDamage, shotTo, shotBy,type);
                
            photonView.RPC("SetScore", RpcTarget.All, null);
                //Debug.Log("Dealth "+bulletDamage+" damage to "+ collision.gameObject.name); 
            
            
            Destroy(gameObject);
        }

        if(collision.gameObject.CompareTag("Shield"))
        {
            // shotTo = collision.gameObject.GetComponent<PhotonView>().Owner.NickName;
            //  if(!collision.gameObject.GetComponent<PhotonView>().IsMine)
            //  {
            //     if(shotBy!=shotTo)
            //     {
                // TrailAudio.Stop();
                // Blast.Play();
                // AudioBoom.Play();
                // rocketBody.SetActive(false);
                // StartCoroutine(DestroyBullet());
                Destroy(gameObject);
                //}
                
                //Debug.Log("Dealth "+bulletDamage+" damage to "+ collision.gameObject.name); 
           // }
            
            
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

    

}
