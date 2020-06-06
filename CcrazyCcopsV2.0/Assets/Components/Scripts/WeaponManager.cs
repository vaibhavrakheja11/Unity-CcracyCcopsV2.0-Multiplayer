using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Realtime;
using Photon.Pun;

public class WeaponManager : MonoBehaviourPunCallbacks
{
    // Start is called before the first frame update

    public GameObject[] Weapons;

    public List<GameObject> WeaponsT;

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
            if(SelectOneFromTwo(other.gameObject.tag))
            {
                ActivateWeapon(other.gameObject.tag);
            }
            
        }
        
    }


    public void ActivateWeapon(string weaponName)
    {
       
        foreach(GameObject weapon in WeaponsT)
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


    bool SelectOneFromTwo(string weaponName)
    {
        GameObject weaponOne;
        switch(weaponName)
        {
            case "FartWeapon":
                    weaponOne = WeaponsT.Find(obj=>obj.name=="MineWeapon");
                    if(weaponOne.activeSelf)
                    {
                        return false;
                    }
                    else 
                    return true;
            case "MineWeapon":
                    weaponOne = WeaponsT.Find(obj=>obj.name=="FartWeapon");
                    if(weaponOne.activeSelf)
                    {
                        return false;
                    }
                    else 
                    return true;
            default :
            return true;

        }
        
        
    }


}
