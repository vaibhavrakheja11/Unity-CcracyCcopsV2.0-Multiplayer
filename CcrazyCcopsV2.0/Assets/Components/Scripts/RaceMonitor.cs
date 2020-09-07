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

    public GameObject waitingText;

    public GameObject[] DefaultWeapons;

    GameObject pcar = null;
    int playerCar;
    int playerWeapon;
    // Start is called before the first frame update
    void Start()
    {
        foreach(GameObject g in coutdownItems)
        {
            g.SetActive(false);
        }

        StartGame.SetActive(false);
        waitingText.SetActive(false);
        playerCar = PlayerPrefs.GetInt("PlayerCar");
        playerWeapon = PlayerPrefs.GetInt("PlayerWep");
        int RandomSpw = Random.Range(0, spawnPoints.Length);
        Vector3 StartPos = spawnPoints[RandomSpw].position;
        Quaternion StartRot = spawnPoints[RandomSpw].rotation;
        

        if(PhotonNetwork.IsConnected)
        {
            int sp = Random.Range(0, spawnPoints.Length);
            StartPos = spawnPoints[sp].position;
            StartRot = spawnPoints[sp].rotation;

            if(NetworkedPlayer.LocalPlayerInstance == null)
            {
                pcar = PhotonNetwork.Instantiate(players[playerCar].name, StartPos, StartRot, 0);
            }



            if(PhotonNetwork.IsMasterClient)
            {
                
                StartGame.SetActive(true);
            }
            else
            {
                    waitingText.SetActive(true);
            }
        }
        else{

            

            pcar = Instantiate(players[playerCar]);

            pcar.transform.position = StartPos;
            pcar.transform.rotation = StartRot;

            // foreach(Transform t in spawnPoints)
            //     {
            //     GameObject player = Instantiate(players[Random.Range(1,players.Length)]);
            //     player.transform.position = t.position;
            //     player.transform.rotation = t.rotation;
            //     }

            BeginGame();
        }
        DefaultGunActivate dgs = pcar.GetComponentInChildren<DefaultGunActivate>();
        dgs.GetComponent<PhotonView>().RPC("ActivateWeapon",RpcTarget.AllBuffered,playerWeapon);


        //Debug.Log(pcar.name);
        var vcam = Camera.GetComponentInChildren<CinemachineVirtualCamera>();
        // vcam.Follow = pcar.transform;
        //vcam.LookAt = pcar.GetComponentInChildren<DefaultGunBack>().GetGameObject().transform;
        vcam.Follow = pcar.GetComponentInChildren<DefaultGunBack>().GetGameObject().transform;
        vcam.LookAt = pcar.transform;

        pcar.gameObject.GetComponent<TakeDamage>().MyCamera = Camera;

        
        playerCar = PlayerPrefs.GetInt("PlayerCar");

    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void BeginGame()
    {
        if(PhotonNetwork.IsMasterClient)
        {
            photonView.RPC("StartMatch", RpcTarget.All, null);
        }
       
        
    }

    [PunRPC]
    public void StartMatch()
    {
        StartGame.SetActive(false);
        waitingText.SetActive(false);
        StartCoroutine(playCountdown());
        
    }

    public GameObject GetCamera()
    {
            return Camera;
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

    public void  RespawnTargetCar(GameObject car)
    {
        int RandomSpw = Random.Range(0, spawnPoints.Length);
        Vector3 StartPos = spawnPoints[RandomSpw].position;
        Quaternion StartRot = spawnPoints[RandomSpw].rotation;

        car.transform.position = StartPos;
        car.transform.rotation = StartRot;
    }

    public void ResetCar()
    {
        int RandomSpw = Random.Range(0, spawnPoints.Length);
        Vector3 StartPos = spawnPoints[RandomSpw].position;
        Quaternion StartRot = spawnPoints[RandomSpw].rotation;

        pcar.transform.position = StartPos;
        pcar.transform.rotation = StartRot;
    }
}   
