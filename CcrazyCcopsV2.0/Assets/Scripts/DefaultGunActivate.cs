using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DefaultGunActivate : MonoBehaviour
{
    // Start is called before the first frame update

    public GameObject[] DefualtWeapons;
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void ActivateWeapon(int WeaponNumber)
    {
        Debug.Log("----------------------8888sdjfksbfskjf" + WeaponNumber);
        DefualtWeapons[WeaponNumber].SetActive(true);
    }
}
