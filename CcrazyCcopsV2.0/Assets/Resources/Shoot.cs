using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityStandardAssets.CrossPlatformInput;
using Photon.Realtime;
using Photon.Pun;

public class Shoot : MonoBehaviourPunCallbacks
{
    // Start is called before the first frame update

    public float bulletSpeed = 1000f;

    public GameObject gunFunnel;
    //public GameObject bullet;
    public GameObject bullet;
    public int Ammo = 100000;

    public GameObject GunPrefab;

    public DeathRacePlayer DeathRacePlayerProperties;

    public float fireRate = 0.5f;

    public float fireTimer = 0.0f;

    public float destroyTime = 4f;

    public LookAtEnemy enemyTarget;

    public float Damage = 20f;

    void Start()
    {
        enemyTarget = GetComponentInParent<LookAtEnemy>();
        
    }

    // Update is called once per frame
    void Update()
    {
        if(fireTimer<fireRate)
        {
            fireTimer += Time.deltaTime;
        }
    }

    void FixedUpdate()
    {
        float Fire = CrossPlatformInputManager.GetAxis("Fire1");

        if(Fire > 0.004f && Ammo>0)
        {
            
            Debug.Log("check for view");
            if(photonView.IsMine)
            {
            if(fireTimer > fireRate)
            {
            ShootFunc();
            Ammo--;
            fireTimer = 0.0f;
            }
            }
        }
        if(Ammo==0)
        {
            photonView.RPC("DeactivateWeapon", RpcTarget.All, null);
        }

    }

    void ShootFunc()
    {
        // Rigidbody BulletClone = Instantiate(bullet, gunFunnel.transform.position, this.transform.rotation);
        // //Rigidbody BulletClone = PhotonNetwork.Instantiate(bullet.GameObject.name, gunFunnel.transform.position, this.transform.rotation);
        // BulletClone.velocity = transform.TransformDirection(new Vector3(0,0, bulletSpeed));
    
        //GameObject bulletClone = Instantiate(bullet, gunFunnel.transform.position, gunFunnel.transform.rotation) as GameObject;
        GameObject bulletClone = PhotonNetwork.Instantiate(bullet.name, gunFunnel.transform.position, gunFunnel.transform.rotation) as GameObject;
        
        if(bullet.name.Equals("Bullet"))
        {
            bulletClone.GetComponent<Rigidbody>().AddForce(transform.forward * bulletSpeed);
            bulletClone.GetComponent<BulletScript>().Initialize(Damage);
        }

        if(bullet.name.Equals("Rocket"))
        {
            //Debug.Log("-------------------> RocketShot");
            //bulletClone.GetComponent<Rigidbody>().AddForce(transform.forward * bulletSpeed);
            bulletClone.GetComponent<RocketScript>().SetTarget(enemyTarget.GetEnemyForMissile());
            bulletClone.GetComponent<RocketScript>().Initialize(Damage);
        }
        
        Destroy(bulletClone.gameObject,destroyTime);
    }

    public override void OnEnable()
    {
        Ammo = 100;
    }

    [PunRPC]
    public void DeactivateWeapon()
    {
        GunPrefab.SetActive(false);
    }
}
