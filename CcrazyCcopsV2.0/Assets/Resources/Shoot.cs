using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityStandardAssets.CrossPlatformInput;
using Photon.Realtime;
using Photon.Pun;

public class Shoot : MonoBehaviourPunCallbacks
{
    // Start is called before the first frame update

    public float bulletSpeed = 10000f;

    public GameObject gunFunnel;
    //public GameObject bullet;
    public GameObject bullet;
    public int Ammo = 100;

    void Start()
    {

        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void FixedUpdate()
    {
        float Fire = CrossPlatformInputManager.GetAxis("Fire1");

        if(Fire > 0.004f && Ammo>0)
        {
            Debug.Log("check for view");
            if(photonView.IsMine)
            {
            ShootFunc();
            Ammo--;
            }
        }

    }

    void ShootFunc()
    {
        // Rigidbody BulletClone = Instantiate(bullet, gunFunnel.transform.position, this.transform.rotation);
        // //Rigidbody BulletClone = PhotonNetwork.Instantiate(bullet.GameObject.name, gunFunnel.transform.position, this.transform.rotation);
        // BulletClone.velocity = transform.TransformDirection(new Vector3(0,0, bulletSpeed));
        


        GameObject bulletClone = PhotonNetwork.Instantiate(bullet.name, gunFunnel.transform.position, Quaternion.identity) as GameObject;
        bulletClone.GetComponent<Rigidbody>().AddForce(transform.forward * bulletSpeed);
        Destroy(bulletClone.gameObject,2);
    }
}
