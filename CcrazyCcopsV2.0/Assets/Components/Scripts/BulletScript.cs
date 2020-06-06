using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Realtime;
using Photon.Pun;

public class BulletScript : MonoBehaviourPunCallbacks
{
    // Start is called before the first frame update

    float bulletDamage;

    private string shotBy;

    private string shotTo;
    private string type= "bullet";

    public AudioSource hitAudio;

    public GameObject BulletBody;

    bool shieldHit = false;
    void Start()
    {
       
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void Initialize(float damage)
    {
        bulletDamage = damage;
    }


    private void OnTriggerEnter(Collider col)
    {
        
        if(col.gameObject.CompareTag("Player") && !shieldHit)
        {
           
            shotTo = col.gameObject.GetComponent<PhotonView>().Owner.NickName;
            if(!col.gameObject.GetComponent<PhotonView>().IsMine)
            {
                if(shotBy!=shotTo)
                {
                    col.gameObject.GetComponent<PhotonView>().RPC("DoDamage", RpcTarget.AllBuffered, bulletDamage, shotTo, shotBy,type);
                    photonView.RPC("SetScore", RpcTarget.All, null);
                    gameObject.GetComponentInChildren<GameObject>().SetActive(false);
                    hitAudio.Play();
                    //Destroy(gameObject);
                    StartCoroutine(DestroyBullet());
                }
                
            }
            
        }

        if(col.gameObject.CompareTag("Shield"))
        {
                try{
                        if(col.gameObject.GetComponentInParent<TakeDamage>().gameObject.GetComponent<PhotonView>().IsMine)
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
        hitAudio.Play();
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
     yield return new WaitForSeconds(.7f); //waits 3 seconds
     Destroy(gameObject);
    }
}