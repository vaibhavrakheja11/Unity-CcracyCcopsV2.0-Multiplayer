using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SelectWeapon : MonoBehaviour
{
    // Start is called before the first frame update
    public GameObject[] DefaultWeapons;
    int currentWep = 0;


    void Start()
    {
        
        this.transform.LookAt(DefaultWeapons[currentWep].transform.position);
        

    }

    // Update is called once per frame
    void Update()
    {
        if(Input.GetKeyDown(KeyCode.LeftArrow))
        {
            PlusWep();
           
        }
        if(Input.GetKeyDown(KeyCode.RightArrow))
        {
            SubWep();
        }

        Quaternion lookDIr = Quaternion.LookRotation(DefaultWeapons[currentWep].transform.position - this.transform.position);
        this.transform.rotation = Quaternion.Slerp(transform.rotation, lookDIr, Time.deltaTime);
    }

    public void PlusWep()
    {
         currentWep++;
         Debug.Log("SelectWeapon.cs :: Plus weapon"+ currentWep);
            if(currentWep > DefaultWeapons.Length -1)
                currentWep = 0;

                PlayerPrefs.SetInt("PlayerWep",currentWep);

        // Quaternion lookDIr = Quaternion.LookRotation(cars[currentCar].transform.position - this.transform.position);
        // this.transform.rotation = Quaternion.Slerp(transform.rotation, lookDIr, Time.deltaTime);
    }

    public void SubWep()
    {
         currentWep--;
          Debug.Log("SelectWeapon.cs :: Sub weapon"+ currentWep);
            if(currentWep < 0)
                currentWep = DefaultWeapons.Length -1;
                PlayerPrefs.SetInt("PlayerWep",currentWep);

        // Quaternion lookDIr = Quaternion.LookRotation(cars[currentCar].transform.position - this.transform.position);
        // this.transform.rotation = Quaternion.Slerp(transform.rotation, lookDIr, Time.deltaTime);
    }
}
