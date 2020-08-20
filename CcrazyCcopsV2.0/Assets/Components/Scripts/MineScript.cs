﻿using System.Collections;
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

    public AudioSource Blast;

    public GameObject MineBody;

    bool shieldHit = false;

    [SerializeField]
    ParticleSystem diffuseblast;

    

    
    void Start()
    {
       Potty.Stop();
       diffuseblast.Stop();
        
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

        

        // if(collision.gameObject.CompareTag("Shield"))
        // {
        //         try{
        //                 if(collision.gameObject.GetComponentInParent<TakeDamage>().gameObject.GetComponent<PhotonView>().IsMine)
        //                 {
        //                     Debug.Log("SelfShield");
        //                 }
        //                 else
        //                 {
        //                     gameObject.GetComponent<CapsuleCollider>().enabled = false;
        //                     shieldHit = true;
        //                     ShieldDestroy();
        //                 }
        //                 }catch{
        //                     gameObject.GetComponent<CapsuleCollider>().enabled = false;
        //                     shieldHit = true;
        //                     ShieldDestroy();
        //                 }
        // }
        // else
         if(collision.gameObject.CompareTag("Player") && !shieldHit)
        {
                    shotTo = collision.gameObject.GetComponent<PhotonView>().Owner.NickName;
                    
                    collision.gameObject.GetComponent<PhotonView>().RPC("DoDamage", RpcTarget.AllBuffered, bulletDamage, shotTo, shotBy,type);
                        
                    photonView.RPC("SetScore", RpcTarget.All, null);
                        //Debug.Log("Dealth "+bulletDamage+" damage to "+ collision.gameObject.name); 
                    
                    Blast.Play();
                    MineBody.SetActive(false);
                    //Destroy(gameObject);
                    StartCoroutine(DestroyBullet());
        }

        
    }

    private void OnTriggerStay(Collider collision)
    {
        if(collision.gameObject.CompareTag("Shield"))
        {
                try{
                        if(collision.gameObject.GetComponentInParent<TakeDamage>().gameObject.GetComponent<PhotonView>().IsMine)
                        {
                            Debug.Log("SelfShield");
                            shieldHit = true;
                        }
                        else
                        {
                            gameObject.GetComponent<CapsuleCollider>().enabled = false;
                            shieldHit = true;
                            ShieldDestroy();
                        }
                        }catch{
                            //gameObject.GetComponent<CapsuleCollider>().enabled = false;
                            shieldHit = true;
                            ShieldDestroy();
                        }
        }
    }

    private void OnTriggerExit(Collider collision)
    {
        shieldHit = false;
    }


    public void ShieldDestroy()
    {
        diffuseblast.Play();
        StartCoroutine(DestroyBullet());

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

    IEnumerator DestroyBullet(){
     //play your sound
     yield return new WaitForSeconds(1f);
     diffuseblast.Stop(); //waits 3 seconds
     Destroy(gameObject); //this will work after 3 seconds.
 }
    

}
