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

    public ParticleSystem[] particles; 
    public ParticleSystem[] HealthParticles; 



    public Image healthBar;
    // Start is called before the first frame update
    void Start()
    { 
        health = startHealth;
        healthBar.fillAmount = health/ startHealth;
        GameObject scoreManager = GameObject.FindGameObjectWithTag("ScoreManager");
        scoreSheet = scoreManager.GetComponent<ScoreSheet>();

        StopParticle(particles);
        StopParticle(HealthParticles);
        
        
        
    }

    // Update is called once per frame
    void Update()
    {
        CheckHealth(health);
    }
    [PunRPC]
    public void DoDamage(float _damage, string shotTo, string shotBy, string type)
    {
        health -= _damage;
        //Debug.Log("PlayerHealth : "+ health);

        healthBar.fillAmount = health/startHealth;
        scoreSheet.ShotScore(shotBy,shotTo);
        if(health <= 0f)
        {
            Die(shotBy, shotTo);
        }

        if(type == "rocket")
        {
            PlayParticle(2);
        }

        

    }


    private void CheckHealth(float health)
    {
        if (health<20){
            HealthParticles[0].Stop();
            HealthParticles[1].Stop();
            HealthParticles[2].Play();
           
        }else if(20<=health && health<40){
            HealthParticles[0].Stop();
            HealthParticles[2].Stop();
            HealthParticles[1].Play();
            
        }else if(40<=health && health<60){
            HealthParticles[2].Stop();
            HealthParticles[1].Stop();
            HealthParticles[1].Play();
            
        }else{
            HealthParticles[0].Stop();
            HealthParticles[1].Stop();
            HealthParticles[2].Stop();
            
        }

    }

    public void Die(string shotBy,string shotTo)
    {
        PlayParticle(0);
        Debug.Log(shotTo+"just got fucked by "+ shotBy);
        scoreSheet.ShotKill(shotBy,shotTo);
        
        
    }

    public void PlayParticle(int number)
    {
        particles[number].Play();
    }

    public void PlayTextParticles(ParticleSystem[] textParticle)
    {
        foreach(ParticleSystem par in textParticle)
        {
            par.Play();
        }
    }

    public void StopParticle(ParticleSystem[] ParticleObject)
    {
        foreach(ParticleSystem par in ParticleObject)
        {
            par.Stop();
        }
    }

    [PunRPC]
    public void IsTarget(bool isTaregt)
    {
        PlayParticle(1);
    }

    
}
