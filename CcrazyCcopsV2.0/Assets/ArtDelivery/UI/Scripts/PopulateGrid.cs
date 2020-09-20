using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PopulateGrid : MonoBehaviour
{
    public GameObject prefab; // This is our prefab object that will be exposed in the inspector
    public int numberToCreate; // # of objects to create exposed in the inspector

    void Start()
    {
        Populate();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void Populate()
    {
        GameObject newObj; // Create GameObject instance

        for (int i = 0; i < numberToCreate; i++)
        {
            newObj = (GameObject)Instantiate(prefab, transform); //Create new instances of our prefab until we've created as many as we specify
        }
    }
}
