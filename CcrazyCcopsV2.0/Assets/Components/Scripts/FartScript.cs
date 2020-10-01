using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Realtime;
using Photon.Pun;

public class FartScript : MonoBehaviourPunCallbacks
{
    // Start is called before the first frame update
    


    float bulletDamage;

    private string shotBy;

    private string shotTo;

    private string type= "fart";

    public ParticleSystem Potty;

    public AudioSource Blast;

    public GameObject FartBody;

    [SerializeField]
    ParticleSystem FartParticle;

    bool damage = false;

    bool shieldHit = false;

    float destroyTime = 15f;

    
    void Start()
    {
       Potty.Stop();
       FartParticle.Play();
       StartCoroutine(DestroyBullet(destroyTime));
       StartCoroutine(OriginalDamage());
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        
    }

    public void SetDestroyTime(float time)
    {
        destroyTime = time;
    }

    

    public void Initialize(float damage)
    {
        bulletDamage = damage;
    }

    // private void OnTriggerEnter(Collider collision)
    // {

    //     Debug.Log(collision.name);
    //     if(collision.gameObject.CompareTag("Shield") && !shieldHit)
    //     {
    //             try{
    //                     if(collision.gameObject.GetComponentInParent<TakeDamage>().gameObject.GetComponent<PhotonView>().IsMine)
    //                     {
    //                         Debug.Log("SelfShield");
    //                     }
    //                     else
    //                     {
    //                         gameObject.GetComponent<CapsuleCollider>().enabled = false;
    //                         shieldHit = true;
    //                         DestroyFromShield();
    //                     }
    //                     }catch{
    //                         gameObject.GetComponent<CapsuleCollider>().enabled = false;
    //                         shieldHit = true;
    //                         DestroyFromShield();
    //                     }

        
    //     }
    // }

    public void DestroyFromShield()
    {
        //Debug.Log("FartScript: ShieldDestroy :: Photon View is mine is false");
        
        
        

    }

    private void OnTriggerStay(Collider collision)
    {
        Debug.Log(collision.name);

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
                            DestroyFromShield();
                        }
                        }catch{
                            gameObject.GetComponent<CapsuleCollider>().enabled = false;
                            shieldHit = true;
                            DestroyFromShield();
                        }

        
        }
        else if(collision.gameObject.CompareTag("Player") && damage && !shieldHit)
        {
           
            shotTo = collision.gameObject.GetComponent<PhotonView>().Owner.NickName;
           
                    collision.gameObject.GetComponent<PhotonView>().RPC("DoDamage", RpcTarget.AllBuffered, bulletDamage, shotTo, shotBy,type);
                        
                    photonView.RPC("SetScore", RpcTarget.All, null);
                    damage = false;

                        //Debug.Log("Dealth "+bulletDamage+" damage to "+ collision.gameObject.name); 
                    
                    if(!Blast.isPlaying)
                    {
                        Blast.Play();
                    }
                    
                    //FartBody.SetActive(false);
               // }
            //Destroy(gameObject);
            StartCoroutine(OriginalDamage());
       // }
        }

        
    }

    private void OnTriggerExit(Collider collision)
    {
        StartCoroutine(EnableHit());
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

    IEnumerator DestroyBullet(float time){
     //play your sound
     yield return new WaitForSeconds(time); //waits 3 seconds
     Destroy(gameObject); //this will work after 3 seconds.
 }

 IEnumerator OriginalDamage(){
     //play your sound
     yield return new WaitForSeconds(1f); //waits 1 seconds
     damage = true; //this will work after 3 seconds.
 }

 IEnumerator EnableHit(){
     //play your sound
     yield return new WaitForSeconds(1f); //waits 1 seconds
     shieldHit = false; //this will work after 3 seconds.
 }
    

}
