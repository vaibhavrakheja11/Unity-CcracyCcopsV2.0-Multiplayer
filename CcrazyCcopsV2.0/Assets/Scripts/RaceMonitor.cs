using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cinemachine;
using Photon.Realtime;
using Photon.Pun;

public class RaceMonitor : MonoBehaviourPunCallbacks
{
    public GameObject[] coutdownItems;

    public static bool GameOn = false;

    public GameObject[] players;
    public Transform[] spawnPoints;

    public GameObject Camera;
    private CinemachineVirtualCamera vcam;

    public GameObject StartGame; 


    int playerCar;
    // Start is called before the first frame update
    void Start()
    {
        foreach(GameObject g in coutdownItems)
        {
            g.SetActive(false);
        }

        StartGame.SetActive(false);
        playerCar = PlayerPrefs.GetInt("PlayerCar");
        int RandomSpw = Random.Range(0, spawnPoints.Length);
        Vector3 StartPos = spawnPoints[RandomSpw].position;
        Quaternion StartRot = spawnPoints[RandomSpw].rotation;
        GameObject pcar = null;

        if(PhotonNetwork.IsConnected)
        {
            StartPos = spawnPoints[PhotonNetwork.CurrentRoom.PlayerCount-1].position;
            StartRot = spawnPoints[PhotonNetwork.CurrentRoom.PlayerCount-1].rotation;

            if(NetworkedPlayer.LocalPlayerInstance == null)
            {
                pcar = PhotonNetwork.Instantiate(players[playerCar].name, StartPos, StartRot, 0);
            }



            if(PhotonNetwork.IsMasterClient)
            {
                
                StartGame.SetActive(true);
            }
        }
        else{

            pcar = Instantiate(players[playerCar]);

            pcar.transform.position = StartPos;
            pcar.transform.rotation = StartRot;

            foreach(Transform t in spawnPoints)
                {
                GameObject player = Instantiate(players[Random.Range(0,players.Length)]);
                player.transform.position = t.position;
                player.transform.rotation = t.rotation;
                }

            StartMatch();
        }

        
        playerCar = PlayerPrefs.GetInt("PlayerCar");
        

         
        var vcam = Camera.GetComponentInChildren<CinemachineVirtualCamera>();
        vcam.LookAt = pcar.transform;
        vcam.Follow = pcar.transform;
        

    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void StartMatch()
    {
        StartCoroutine(playCountdown());
        StartGame.SetActive(false);
    }


    IEnumerator playCountdown()
    {
        yield return new WaitForSeconds(2);
        foreach(GameObject g in coutdownItems)
        {
            g.SetActive(true);
            yield return new WaitForSeconds(1);
            g.SetActive(false);
        }
        GameOn = true;
    }
}
