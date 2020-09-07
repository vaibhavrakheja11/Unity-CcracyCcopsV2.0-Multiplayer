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

    public GameObject rocketBody;
    
    public AudioSource AudioBoom;

    public AudioSource TrailAudio;

    bool shieldHit = false;


     
    

   
    

    
    void Start()
    {
       Blast.Stop();
        
    }

    // Update is called once per frame
    void LateUpdate()
    {
        if(rocketTarget.name!="RocketDefaultAim")
        {
            rocketRigidbody.velocity = transform.forward * speed;
            var RocketTargetRotation = Quaternion.LookRotation(rocketTarget.position - transform.position);

            rocketRigidbody.MoveRotation(Quaternion.RotateTowards(transform.rotation, RocketTargetRotation, turn)); 
            
            try{SendAlert(rocketTarget.gameObject);}
            catch{}
        }
        
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
        

        
        if(collision.gameObject.CompareTag("Player") && !shieldHit)
        {
                TrailAudio.Stop();
                shotTo = collision.gameObject.GetComponent<PhotonView>().Owner.NickName;
                if(!collision.gameObject.GetComponent<PhotonView>().IsMine)
                {
                    rocketBody.SetActive(false);
                    if(shotBy!=shotTo)
                    {
                    AudioBoom.Play();
                    collision.gameObject.GetComponent<PhotonView>().RPC("DoDamage", RpcTarget.AllBuffered, bulletDamage, shotTo, shotBy,type);
                    
                    photonView.RPC("SetScore", RpcTarget.All, null);
                }
                StartCoroutine(DestroyBullet());
                //Debug.Log("Dealth "+bulletDamage+" damage to "+ collision.gameObject.name); 
            }
            
            
        }

        if(collision.gameObject.CompareTag("Shield"))
        {
                try{
                        if(collision.gameObject.GetComponentInParent<TakeDamage>().gameObject.GetComponent<PhotonView>().IsMine)
                        {
                            Debug.Log("SelfShield");
                        }
                        else
                        {
                            gameObject.GetComponent<CapsuleCollider>().enabled = false;
                            shieldHit = true;
                            ShieldDestroy();
                        }
                        }catch{
                            gameObject.GetComponent<CapsuleCollider>().enabled = false;
                            shieldHit = true;
                            ShieldDestroy();
                        }
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
        Debug.Log("RocketScript: CompareTagShield :: Photon View is mine is false");
        TrailAudio.Stop();
        Blast.Play();
        AudioBoom.Play();
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

    public void SendAlert(GameObject alertPlayer)
    {
        try{
            TakeDamage td = alertPlayer.GetComponentInChildren<TakeDamage>();
            td.gameObject.GetComponent<PhotonView>().RPC("IsTarget", RpcTarget.AllBuffered, true);
        }
        catch
        {

        }
        
    }

    IEnumerator DestroyBullet(){
     //play your sound
     yield return new WaitForSeconds(.2f); //waits 3 seconds
     Destroy(gameObject); //this will work after 3 seconds.
 }



}
