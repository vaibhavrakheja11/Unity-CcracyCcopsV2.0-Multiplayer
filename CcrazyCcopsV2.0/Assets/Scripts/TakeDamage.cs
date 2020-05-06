using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Realtime;
using Photon.Pun;

public class TakeDamage : MonoBehaviourPunCallbacks
{
    public float startHealth = 100;

    private float health;

    private ScoreSheet scoreSheet;

    public Image healthBar;
    // Start is called before the first frame update
    void Start()
    { 
        health = startHealth;
        healthBar.fillAmount = health/ startHealth;
        GameObject scoreManager = GameObject.FindGameObjectWithTag("ScoreManager");
        scoreSheet = scoreManager.GetComponent<ScoreSheet>();
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    [PunRPC]
    public void DoDamage(float _damage, string shotTo, string shotBy)
    {
        health -= _damage;
        //Debug.Log("PlayerHealth : "+ health);

        healthBar.fillAmount = health/startHealth;
        scoreSheet.ShotScore(shotBy,shotTo);
        if(health <= 0f)
        {
            Die(shotBy, shotTo);
        }
    }

    public void Die(string shotBy,string shotTo)
    {
       
        Debug.Log(shotTo+"just got fucked by "+ shotBy);
        scoreSheet.ShotKill(shotBy,shotTo);
        
    }
}
