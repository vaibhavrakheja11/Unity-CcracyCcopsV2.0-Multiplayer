using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WeaponManager : MonoBehaviour
{
    // Start is called before the first frame update

    public GameObject[] Weapons;
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
        ActivateWeapon(other.gameObject.tag);
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
}
