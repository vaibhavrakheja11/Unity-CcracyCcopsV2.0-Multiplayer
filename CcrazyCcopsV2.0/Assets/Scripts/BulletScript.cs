 using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Realtime;
using Photon.Pun;

public class BulletScript : MonoBehaviour
{
    // Start is called before the first frame update

    float bulletDamage;
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
            if(!col.gameObject.GetComponent<PhotonView>().IsMine)
            {
                col.gameObject.GetComponent<PhotonView>().RPC("DoDamage", RpcTarget.AllBuffered, bulletDamage);
            }
            
        }
    }
}
