using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Cinemachine;
using Photon.Realtime;
using Photon.Pun;

public class TakeDamage : MonoBehaviourPunCallbacks
{
    public float startHealth = 100;

    private float health;

    private ScoreSheet scoreSheet;

    public ParticleSystem[] particles; 
    public ParticleSystem[] HealthParticles; 

    private bool respawn = true;

    private RaceMonitor raceMonitor;

    private GameObject Camera;

    private CinemachineVirtualCamera vcam;
    private CinemachineBasicMultiChannelPerlin vcamNoise;

    public float ShakeDuration = 0.3f;
    public float ShakeAmplitutde = 2.0f;
    public float ShakeFrequency = 2.0f;

    private float ShakeElapsedTime =0f;

    



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

        raceMonitor = GameObject.FindObjectOfType<RaceMonitor>();
        Camera = raceMonitor.GetCamera();
        vcam = Camera.GetComponentInChildren<CinemachineVirtualCamera>();

        if(vcam != null)
        {
            vcamNoise = Camera.GetComponentInChildren<Cinemachine.CinemachineBasicMultiChannelPerlin>();
        }
        
        
        
    }

    // Update is called once per frame
    void Update()
    {
        CheckHealth(health);
        
        
    }

    void FixedUpdate()
    {
        CheckCamShake();
    }



    [PunRPC]
    public void DoDamage(float _damage, string shotTo, string shotBy, string type)
    {
        
        ShakeElapsedTime =  ShakeDuration;
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
            StartCoroutine(StopPlayingParticle(2));
        }else if(type == "mine")
        {
            PlayParticle(3);
            StartCoroutine(StopPlayingParticle(3));
        }
        else if(type == "grenede")
        {
            PlayParticle(2);
            StartCoroutine(StopPlayingParticle(2));
        }
        else if(type == "fart")
        {
            PlayParticle(4);
            StartCoroutine(StopPlayingParticle(4));
        }
    }


    private void CheckHealth(float health)
    {

        if(health>100)
        {
            health = 100;
        }


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

        if(respawn)
        {
            IncreaseHealth(100);
        }
        
        
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
        StartCoroutine(StopPlayingParticle(5));
    }

    [PunRPC]
    public void IncreaseHealth(int amount)
    {
        
        health += amount;
        //Debug.Log("PlayerHealth : "+ health);
        if(health>100)
        {
            health = 100;
        }

        healthBar.fillAmount = health/startHealth;
    }

    public void CheckCamShake()
    {
        if(ShakeElapsedTime > 0)
        {
            vcamNoise.m_AmplitudeGain = ShakeAmplitutde;
            vcamNoise.m_FrequencyGain = ShakeFrequency;
            ShakeElapsedTime -= Time.deltaTime;
        }
        else
        {
             vcamNoise.m_AmplitudeGain = 0f;
             vcamNoise.m_FrequencyGain = 0f;
        }
    }

    
        
   

    IEnumerator StopPlayingParticle(int parNumber)
        {
            yield return new WaitForSeconds(4);
           particles[parNumber].Stop();
        }  

    
}
