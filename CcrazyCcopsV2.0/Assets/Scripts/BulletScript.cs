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
                    col.gameObject.GetComponent<PhotonView>().RPC("DoDamage", RpcTarget.AllBuffered, bulletDamage, shotTo, shotBy);
                    photonView.RPC("SetScore", RpcTarget.All, null);
                }
                
            }
            
        }
        photonView.RPC("SetScore", RpcTarget.All, null);
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
