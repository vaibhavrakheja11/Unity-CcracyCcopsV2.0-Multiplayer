using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Realtime;
using Photon.Pun;

public class BouncingGrenedeScript : MonoBehaviourPunCallbacks
{
    // Start is called before the first frame update
    


    float bulletDamage;

    private string shotBy;

    private string shotTo;

    private string type= "grenede";

    public ParticleSystem GrenedeParticle;

    public AudioSource Blast;

    public GameObject MineBody;

    bool shieldHit = false;

    
    void Start()
    {
       GrenedeParticle.Stop();
        
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

        if(collision.gameObject.CompareTag("Player") || collision.gameObject.CompareTag("PlayerBody"))
        {
            Blast.Play();
            shotTo = collision.gameObject.GetComponentInParent<PhotonView>().Owner.NickName;
            collision.gameObject.GetComponentInParent<PhotonView>().RPC("DoDamage", RpcTarget.AllBuffered, bulletDamage, shotTo, shotBy,type);
            photonView.RPC("SetScore", RpcTarget.All, null);
            MineBody.SetActive(false);
            Destroy(gameObject); 
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

    public void ShieldDestroy()
    {
       // Debug.Log("BulletScript: CompareTagShield :: Photon View is mine is false");
        
        //Blast.Play();
        Blast.Play();
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
     yield return new WaitForSeconds(2f); //waits 3 seconds
     Destroy(gameObject); //this will work after 3 seconds.
 }
    

}
