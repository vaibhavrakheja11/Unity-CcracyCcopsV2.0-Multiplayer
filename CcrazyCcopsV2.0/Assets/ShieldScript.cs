using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShieldScript : MonoBehaviour
{
    public float ShieldDuration = 25f;
    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(DestroyShield());
    }

    // Update is called once per frame
    void Update()
    {
        
    }


    IEnumerator DestroyShield(){
     
     
     yield return new WaitForSeconds(ShieldDuration); //waits 25 seconds
     this.gameObject.SetActive(false); //this will work after 25 seconds.
 }
}
