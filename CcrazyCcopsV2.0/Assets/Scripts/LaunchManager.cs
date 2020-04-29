using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using Photon.Realtime;
using Photon.Pun;

public class LaunchManager : MonoBehaviourPunCallbacks
{
    // Start is called before the first frame update

    public InputField playerName;

    byte maxPlayerPerRoom = 4;
    bool isConnecting; 

    public Text FeedbackText;
    string gameVersion = "1";


    void Awake()
    {
        PhotonNetwork.AutomaticallySyncScene = true;
        if(PlayerPrefs.HasKey("PlayerName"))
        {
            playerName.text = PlayerPrefs.GetString("PlayerName");
        }
    }


    public void ConnectNetwork()
    {
        FeedbackText.text = "";
        isConnecting = true;

        PhotonNetwork.NickName = playerName.text;

        if(PhotonNetwork.IsConnected)
        {
            FeedbackText.text += "\n Joining room...";
            PhotonNetwork.JoinRandomRoom();
        }
        else
        {
            FeedbackText.text += "\n Connecting...";
            PhotonNetwork.GameVersion = gameVersion;
            PhotonNetwork.ConnectUsingSettings();
        }
    }
    void Start()
    {
        if(PlayerPrefs.HasKey("PlayerName"))
        {
            playerName.text = PlayerPrefs.GetString("PlayerName");
        }
        
    }

    public void SetName(string name)
    {
        PlayerPrefs.SetString("PlayerName",name);
    }

    public void ConnectSingle()
    {
        SceneManager.LoadScene("SampleScene");
    }

    // Update is called once per frame
    //Network Callbacks


    public override void OnConnectedToMaster()
    {
        if(isConnecting)
        {
            FeedbackText.text += "\n On connected to master";
            PhotonNetwork.JoinRandomRoom();
        }
    }

    public override void OnJoinRandomFailed(short returnCode, string messages)
    {
        FeedbackText.text += "\n Failed to join random room";
        PhotonNetwork.CreateRoom(null, new RoomOptions{ MaxPlayers = this.maxPlayerPerRoom});
        FeedbackText.text += "\n Room Created";
    }

    public override void OnDisconnected(DisconnectCause cause)
    {
        FeedbackText.text += "\n Disconnected Because" + cause;
        isConnecting = false;

    }

    public override void OnJoinedRoom()
    {
        FeedbackText.text += "\n Joined Room With " + PhotonNetwork.CurrentRoom.PlayerCount + " players";
        PhotonNetwork.LoadLevel("SampleScene");
    }
}
