using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Realtime;
using Photon.Pun;

public class GravityScript : MonoBehaviourPunCallbacks
{
    // Start is called before the first frame update

    float bulletDamage;

    private string shotBy;

    private string shotTo;
    private string type= "GravityGun";

    public AudioSource hitAudio;

    public GameObject BulletBody;
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
        
        if(col.gameObject.CompareTag("Player"))
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
            // shotTo = collision.gameObject.GetComponent<PhotonView>().Owner.NickName;
            //  if(!collision.gameObject.GetComponent<PhotonView>().IsMine)
            //  {
            //     if(shotBy!=shotTo)
            //     {
                //TrailAudio.Stop();
                //Blast.Play();
                //AudioBoom.Play();
                hitAudio.Play();
               BulletBody.SetActive(false);
                
                //Destroy(gameObject);
                StartCoroutine(DestroyBullet());
                //}
                
                //Debug.Log("Dealth "+bulletDamage+" damage to "+ collision.gameObject.name); 
           // }
            
            
        }
        //photonView.RPC("SetScore", RpcTarget.All, null);
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