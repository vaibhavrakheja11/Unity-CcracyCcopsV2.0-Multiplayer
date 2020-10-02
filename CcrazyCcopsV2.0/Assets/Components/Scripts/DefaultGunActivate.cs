using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Realtime;
using Photon.Pun;

public class DefaultGunActivate : MonoBehaviourPunCallbacks
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

    [PunRPC]
    public void ActivateWeapon(int WeaponNumber)
    {
        
        DefualtWeapons[WeaponNumber].SetActive(true);
    }
}
