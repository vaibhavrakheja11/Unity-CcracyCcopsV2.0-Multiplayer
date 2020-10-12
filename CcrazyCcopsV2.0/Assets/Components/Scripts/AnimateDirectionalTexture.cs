using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnimateDirectionalTexture : MonoBehaviour
{

    public float SpeedX = 1f;
    public float SpeedY = 0;
    private float CurrX;
    private float CurrY;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        CurrX = Time.deltaTime * SpeedX;
        CurrY = Time.deltaTime * SpeedY;
        GetComponent<Renderer>().material.mainTextureOffset = new Vector2(CurrX,CurrY);
    }
}
