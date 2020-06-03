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

        Debug.Log(collision.name);

        if(collision.gameObject.CompareTag("Player") || collision.gameObject.CompareTag("PlayerBody"))
        {
            shotTo = collision.gameObject.GetComponentInParent<PhotonView>().Owner.NickName;
            
            collision.gameObject.GetComponentInParent<PhotonView>().RPC("DoDamage", RpcTarget.AllBuffered, bulletDamage, shotTo, shotBy,type);
                
            photonView.RPC("SetScore", RpcTarget.All, null);
                //Debug.Log("Dealth "+bulletDamage+" damage to "+ collision.gameObject.name); 
            
            Blast.Play();
            MineBody.SetActive(false);
            //Destroy(gameObject);
            StartCoroutine(DestroyBullet());
        }

        if(collision.gameObject.CompareTag("Shield"))
        {

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

    IEnumerator DestroyBullet(){
     //play your sound
     yield return new WaitForSeconds(2f); //waits 3 seconds
     Destroy(gameObject); //this will work after 3 seconds.
 }
    

}
