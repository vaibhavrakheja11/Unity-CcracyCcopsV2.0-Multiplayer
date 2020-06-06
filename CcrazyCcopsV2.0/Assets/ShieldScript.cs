using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Realtime;
using Photon.Pun;

public class ShieldScript : MonoBehaviourPunCallbacks
{
    public float ShieldDuration = 25f;

    [SerializeField]
    string Nickname = "Scene";
    
    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(DestroyShield());
        
        try
        {
            Nickname = this.gameObject.GetComponentInParent<TakeDamage>().GetNickName();
        }
        catch{

        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public string GetNickName()
    {
        return Nickname;
    }


    IEnumerator DestroyShield(){
     
     
     yield return new WaitForSeconds(ShieldDuration); //waits 25 seconds
     this.gameObject.SetActive(false); //this will work after 25 seconds.
 }
}
