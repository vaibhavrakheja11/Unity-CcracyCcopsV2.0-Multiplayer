using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    // Start is called before the first frame update

    Drive driveScript;
    void Start()
    {
        driveScript = this.GetComponent<Drive>();
    }

    // Update is called once per frame
    void Update()
    {
        float a = Input.GetAxis("Vertical");
        float s = Input.GetAxis("Horizontal");
        float b = Input.GetAxis("Jump");

        driveScript.Go(a, s, b);

        driveScript.CheckForSkid();
        driveScript.CalculateEngineSound();
        
    }
}
