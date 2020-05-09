using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SelectCar : MonoBehaviour
{
    // Start is called before the first frame update
    public GameObject[] cars;
    int currentCar =0;


    void Start()
    {
        if(PlayerPrefs.HasKey("PlayerName"))
            currentCar= PlayerPrefs.GetInt("PlayerCar");
        this.transform.LookAt(cars[currentCar].transform.position);

    }

    // Update is called once per frame
    void Update()
    {
        if(Input.GetKeyDown(KeyCode.LeftArrow))
        {
            PlusCar();
           
        }
        if(Input.GetKeyDown(KeyCode.RightArrow))
        {
            SubCar();
        }

        Quaternion lookDIr = Quaternion.LookRotation(cars[currentCar].transform.position - this.transform.position);
        this.transform.rotation = Quaternion.Slerp(transform.rotation, lookDIr, Time.deltaTime);
    }

    public void PlusCar()
    {
         currentCar++;
            if(currentCar > cars.Length -1)
                currentCar = 0;

                PlayerPrefs.SetInt("PlayerCar",currentCar);

        // Quaternion lookDIr = Quaternion.LookRotation(cars[currentCar].transform.position - this.transform.position);
        // this.transform.rotation = Quaternion.Slerp(transform.rotation, lookDIr, Time.deltaTime);
    }

    public void SubCar()
    {
         currentCar--;
            if(currentCar < 0)
                currentCar = cars.Length -1;
                PlayerPrefs.SetInt("PlayerCar",currentCar);

        // Quaternion lookDIr = Quaternion.LookRotation(cars[currentCar].transform.position - this.transform.position);
        // this.transform.rotation = Quaternion.Slerp(transform.rotation, lookDIr, Time.deltaTime);
    }
}
