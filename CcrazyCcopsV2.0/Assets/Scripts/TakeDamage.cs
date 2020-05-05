using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Realtime;
using Photon.Pun;

public class TakeDamage : MonoBehaviour
{
    public float startHealth = 100;

    private float health;

    public Image healthBar;
    // Start is called before the first frame update
    void Start()
    { 
        health = startHealth;
        healthBar.fillAmount = health/ startHealth;
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    [PunRPC]
    public void DoDamage(float _damage)
    {
        health -= _damage;
        Debug.Log("PlayerHealth : "+ health);

        healthBar.fillAmount = health/startHealth;

        if(health <= 0f)
        {
            Die();
        }
    }

    public void Die()
    {
        Debug.Log("Player Died");
    }
}
