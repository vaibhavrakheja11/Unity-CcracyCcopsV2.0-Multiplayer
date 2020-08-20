using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
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
    public int AmmoRegain;

    private int Ammo;

    public GameObject GunPrefab;

    public DeathRacePlayer DeathRacePlayerProperties;

    public float fireRate = 0.5f;

    public float fireTimer = 0.0f;

    public float destroyTime = 4f;

    public LookAtEnemy enemyTarget;

    public float Damage = 20f;

    public GameObject parentPlayer;

    private float Fire;

    public string InputAxes;

    //public ButtonHandler button;
    public bool IsGuided = true;


    public ParticleSystem muzzleFlash; 

    [SerializeField]
    AudioSource FireSound = null;



    



 
   






    void Start()
    {
        enemyTarget = GetComponentInParent<LookAtEnemy>();
        Invoke("FindPlayer", .4f); 
        Ammo=AmmoRegain; 
    }

    void FindPlayer()
    {
        foreach(GameObject cur in GameObject.FindGameObjectsWithTag("Player")) {
            if(photonView.IsMine)
            {
                parentPlayer = cur;
            }
        }
    }

    // Update is called once per frame
    void Update()
    {
        if(fireTimer<fireRate)
        {
            fireTimer += Time.deltaTime;
        }
    
        // if(Ammo < 100)
        // AmmoText.text = Ammo.ToString();
        // else
        // AmmoText.text = "~";
    }

    void FixedUpdate()
    {
        
        Fire = CrossPlatformInputManager.GetAxis(InputAxes);
        
        if(Fire > .8f && Ammo>0)
        {
        CheckShoot();
        }

    }


    public void CheckShoot()
    {
        
        if(Ammo>0)
            {
            //Debug.Log("check for view");
            if(photonView.IsMine)
            {
            if(fireTimer > fireRate)
            {
            //photonView.RPC("ShootFunc", RpcTarget.All, null);
            ShootFunc();
            Ammo--;
            fireTimer = 0.0f;

            //Debug.Log(string.Format("Info: {0} {1} ", info.photonView.gameObject.name, info.timestamp));
            }
            }
        }
        if(Ammo==0)
        {
            photonView.RPC("DeactivateWeapon", RpcTarget.AllBuffered, null);
        }
    }

    void ShootFunc()
    {
        
        
        if(bullet.name.Equals("Bullet"))
        {

            GameObject bulletClone = PhotonNetwork.Instantiate(bullet.name, gunFunnel.transform.position, gunFunnel.transform.rotation) as GameObject;
            bulletClone.GetComponent<Rigidbody>().AddForce(transform.forward * bulletSpeed);
            bulletClone.GetComponent<BulletScript>().Initialize(Damage);
            bulletClone.GetComponent<BulletScript>().SetShotBy(PhotonNetwork.LocalPlayer.NickName);
            Destroy(bulletClone.gameObject,destroyTime);
            muzzleFlash.Play();
        }

        if(bullet.name.Equals("BGrenede"))
        {

           GameObject bulletClone = PhotonNetwork.Instantiate(bullet.name, gunFunnel.transform.position, gunFunnel.transform.rotation) as GameObject;
            bulletClone.GetComponent<Rigidbody>().AddForce(transform.forward * bulletSpeed);
            bulletClone.GetComponent<BouncingGrenedeScript>().Initialize(Damage);
            bulletClone.GetComponent<BouncingGrenedeScript>().SetShotBy(PhotonNetwork.LocalPlayer.NickName);
            if(FireSound != null)
            {
                FireSound.Play();
            }
            muzzleFlash.Play();
            Destroy(bulletClone.gameObject,destroyTime);
        }

        if(bullet.name.Equals("Rocket"))
        {
            
            GameObject bulletClone = PhotonNetwork.Instantiate(bullet.name, gunFunnel.transform.position, gunFunnel.transform.rotation) as GameObject;
            if(enemyTarget.GetEnemyForMissile().name!="DefaultAim" && IsGuided)
            bulletClone.GetComponent<RocketScript>().SetTarget(enemyTarget.GetEnemyForMissile());
            else 
            bulletClone.GetComponent<Rigidbody>().AddForce(transform.forward * bulletSpeed);
            bulletClone.GetComponent<RocketScript>().Initialize(Damage);
            bulletClone.GetComponent<RocketScript>().SetShotBy(PhotonNetwork.LocalPlayer.NickName);
            Destroy(bulletClone.gameObject,destroyTime);
            muzzleFlash.Play();
            
        }

        if(bullet.name.Equals("Mine"))
        {
            GameObject bulletClone = PhotonNetwork.Instantiate(bullet.name, gunFunnel.transform.position, gunFunnel.transform.rotation) as GameObject;
            bulletClone.GetComponent<Rigidbody>().AddForce(transform.forward * bulletSpeed);
            bulletClone.GetComponent<MineScript>().Initialize(Damage);    
            Destroy(bulletClone.gameObject,destroyTime);
        }

        if(bullet.name.Equals("FartBomb"))
        {
            GameObject bulletClone = PhotonNetwork.Instantiate(bullet.name, gunFunnel.transform.position, gunFunnel.transform.rotation) as GameObject;
            bulletClone.GetComponent<Rigidbody>().AddForce(transform.forward * bulletSpeed);
            bulletClone.GetComponent<FartScript>().Initialize(Damage); 
            bulletClone.GetComponent<FartScript>().SetDestroyTime(destroyTime);   
            Destroy(bulletClone.gameObject,destroyTime);
        }
 
        
    }

    public override void OnEnable()
    {
        Ammo = AmmoRegain;
    }

    [PunRPC]
    public void DeactivateWeapon()
    {
        GunPrefab.SetActive(false);
    }

    public int GetAmmo()
    {
        return Ammo;
    }

    
  
}
