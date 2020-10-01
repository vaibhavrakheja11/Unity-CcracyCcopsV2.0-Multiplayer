using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityStandardAssets.Vehicles.Car;
using Photon.Pun;
using Photon.Realtime;
using ExitGames.Client.Photon;


public class LapController : MonoBehaviourPun
{
    private List<GameObject> LapTriggers = new List<GameObject>();

    public enum RaiseEventCodes
    {
        WhoFinishedEventCode = 0
    }

    private int finishOrder = 0;

    private int LapTriggerNumber = 0;

    GameObject LastCheckPoint;

    


    public void Start()
    {
        foreach( var lapTrigger in RaceMonitor.instance.LapTriggers)
        {
            LapTriggers.Add(lapTrigger);
        }
        gameObject.GetComponent<CarUserControl>().SetCarEnableBool(false);
        RaceMonitor.instance.BeginGame();

        LastCheckPoint = LapTriggers[0];
    }

    private void OnTriggerEnter(Collider other)
    {
       if(photonView.IsMine)
       {
           if(LapTriggers.Contains(other.gameObject))
            {
                int indexOfTrigger = LapTriggers.IndexOf(other.gameObject);
                LapTriggers[indexOfTrigger].SetActive(false);

                if(other.name == "FinishTrigger")
                {
                    GameFinished();
                }

                LastCheckPoint = other.gameObject;
            }
       } 
        
        
    }

    public GameObject GetLastRespawnTarget()
    {
        return LastCheckPoint;
    }

    void Update()
    {
        if(RaceMonitor.GameOn)
        {
            gameObject.GetComponent<CarUserControl>().SetCarEnableBool(true);
        }
    }


    private void GameFinished()
    {
       gameObject.GetComponent<CarUserControl>().enabled = false;

        finishOrder++;

        string nickname = photonView.Owner.NickName;

        int viewId = photonView.ViewID;
        //event data theat needs to be sent along the raise event
        object[] data = new object[] { nickname, finishOrder, viewId};

        RaiseEventOptions raiseEventOptions = new RaiseEventOptions {
            Receivers = ReceiverGroup.All,
            CachingOption = EventCaching.AddToRoomCache 
        };

        SendOptions sendOptions = new SendOptions {
            Reliability = false
        };
       PhotonNetwork.RaiseEvent((byte)RaiseEventCodes.WhoFinishedEventCode, data, raiseEventOptions, sendOptions);
    }


    private void OnEnable()
    {
        PhotonNetwork.NetworkingClient.EventReceived += OnEvent;
    }

    void OnEvent(EventData photonEvent)
    {
        if(photonEvent.Code == (byte)RaiseEventCodes.WhoFinishedEventCode)
        {
            object[] data = (object[])photonEvent.CustomData;

            string nickNameofFinishPlayer = (string)data[0];

            finishOrder = (int)data[1];

            int viewId = (int)data[2];
            Debug.Log("LapController: Nickname of finishedPLayer : " + nickNameofFinishPlayer + "  position: "+ finishOrder);

            GameObject orderUIGameObject =  RaceMonitor.instance.finishOrderText[finishOrder -1];
            GameObject orderImage = RaceMonitor.instance.orderImage;
            GameObject[] CountdownItems = RaceMonitor.instance.coutdownItems;
            GameObject backgroundPanel = RaceMonitor.instance.FinishPanel;
            
            

            if(photonView.IsMine)
            {
                orderUIGameObject.GetComponent<Text>().text = finishOrder + "      ............     " + nickNameofFinishPlayer  + " ....................  (You)";
                orderUIGameObject.GetComponent<Text>().color = Color.red;

                if(!backgroundPanel.activeSelf)
                {
                    backgroundPanel.SetActive(true);
                }
                orderUIGameObject.SetActive(true);
                
            }
            else
            {
                orderUIGameObject.GetComponent<Text>().text = finishOrder + "    ..............    " + nickNameofFinishPlayer ;
            }
            
        }


    }

    private void OnDisable()
    {
        PhotonNetwork.NetworkingClient.EventReceived -= OnEvent;
    }
}
