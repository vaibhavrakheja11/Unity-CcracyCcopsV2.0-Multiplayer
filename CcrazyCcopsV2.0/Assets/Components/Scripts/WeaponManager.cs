using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Realtime;
using Photon.Pun;

public class WeaponManager : MonoBehaviourPunCallbacks
{
    // Start is called before the first frame update

    public GameObject[] Weapons;

    public int healthPickupAmount = 45;

    public int[] WepAmmo;
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnTriggerExit(Collider other)
    {
        Debug.Log(other.gameObject.tag);
        if(other.gameObject.CompareTag("Health"))
        {
            gameObject.GetComponentInParent<PhotonView>().RPC("IncreaseHealth", RpcTarget.AllBuffered, healthPickupAmount);
        }
        else{
            ActivateWeapon(other.gameObject.tag);
        }
        
    }


    public void ActivateWeapon(string weaponName)
    {
       
        foreach(GameObject weapon in Weapons)
        {
            //weapon.SetActive(weapon.name.Equals(weaponName));
            if(weapon.name.Equals(weaponName))
            {
                weapon.SetActive(true);
            }
        }
    }


    public GameObject[] GetWeaponList()
    {
        return Weapons;
    }
}
