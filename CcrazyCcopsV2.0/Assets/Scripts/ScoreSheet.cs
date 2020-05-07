using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Realtime;
using Photon.Pun;

public class ScoreSheet : MonoBehaviourPunCallbacks
{
    // Start is called before the first frame update
  
    public GameObject localPlayer;
    private PlayerScore ps;

    //ublic Text LocalPlayerScore;
    public Text ScoreText;
    public Text KillsText;
    public Text ShotsText;

    

    
    void Start()
    { 
        Invoke("GetPlayers", 2f);
    
         
    }

    // Update is called once per frame
    void Update()
    {
        if(localPlayer!=null)
        {
           ps = localPlayer.GetComponent<PlayerScore>();
           ScoreText.text = ps.GetScore().ToString();
           KillsText.text = ps.GetKill().ToString();
           ShotsText.text = ps.GetShot().ToString();
        }
           
        
        
    }

    public void GetPlayers()
    {
        foreach(GameObject cur in GameObject.FindGameObjectsWithTag("Player")) {
        Debug.Log("Sss-->"+ PhotonNetwork.LocalPlayer.NickName);
           if(cur.GetComponent<PhotonView>().Owner.NickName == PhotonNetwork.LocalPlayer.NickName)
           {
               Debug.Log("-3-3-3-3-3-3-3-3-3-3-3-3------>");
               localPlayer = cur;
           }
        }
    }

    public void ShotScore(string ShotBy, string ShotTo)
    {
       int i =0;
        foreach(GameObject cur in GameObject.FindGameObjectsWithTag("Player")) {
            if(cur.GetComponent<PhotonView>().Owner.NickName==ShotBy)
            {
                ps = cur.GetComponent<PlayerScore>();
                ps.SetShot();
            }
        }
    }

    public void ShotKill(string ShotBy, string ShotTo)
    {
       int i =0;
        foreach(GameObject cur in GameObject.FindGameObjectsWithTag("Player")) {
            if(cur.GetComponent<PhotonView>().Owner.NickName==ShotBy)
            {
                ps = cur.GetComponent<PlayerScore>();
                ps.SetKill();
            }
        
        }
    }



}
