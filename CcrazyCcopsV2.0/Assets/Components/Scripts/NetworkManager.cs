using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Realtime;
using Photon.Pun;

public class NetworkManager : MonoBehaviourPunCallbacks
{
    // Start is called before the first frame update

    public GameObject LoginUIPanel;

    public InputField PlayerNameInput;

    public GameObject ConnectingInfoUIPanel;

    public GameObject CreatingRoomInfoPanel;

    public GameObject GameOptionsUIPanel;

    public GameObject CreateRoomUIPanel;

    public GameObject InsideRoomUIPanel;

    public GameObject JoinRandomRoomUIPanel;

    public InputField RoomManeInput;

    public string GameMode;

    public Text RoomInfoText;

    public GameObject PlayerListPrefab;
    public GameObject PlayerListContent;

    private Dictionary<int, GameObject> playerListGameObjects;

    public GameObject StartGameButton;

    public Text GameModeText;

    public Image PannelBackground;

    public Sprite racingBackground;

    public Sprite deathRaceBackground;

    public GameObject CarSelect;

    public GameObject WeaponSelect;

    public GameObject[] selectLeftRight;
    





    void Start()
    {
        ActivatePanel(LoginUIPanel.name);
        PhotonNetwork.AutomaticallySyncScene = true;
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void onLoginButtonClicked()
    {
        string playerName = PlayerNameInput.text;

        if(!string.IsNullOrEmpty(playerName))
        {
            ActivatePanel(ConnectingInfoUIPanel.name);
            if(!PhotonNetwork.IsConnected)
            {
                PhotonNetwork.LocalPlayer.NickName = playerName;
                PhotonNetwork.ConnectUsingSettings();
            }
        }
        else
        {
            Debug.Log("PlayerName is invalid");
        }
    }

    #region Public Methods
    public void ActivatePanel(string PanelName)
    {
        LoginUIPanel.SetActive(LoginUIPanel.name.Equals(PanelName));
        ConnectingInfoUIPanel.SetActive(ConnectingInfoUIPanel.name.Equals(PanelName));
        JoinRandomRoomUIPanel.SetActive(JoinRandomRoomUIPanel.name.Equals(PanelName));
        InsideRoomUIPanel.SetActive(InsideRoomUIPanel.name.Equals(PanelName));
        CreateRoomUIPanel.SetActive(CreateRoomUIPanel.name.Equals(PanelName));
        CreatingRoomInfoPanel.SetActive(CreatingRoomInfoPanel.name.Equals(PanelName));
        GameOptionsUIPanel.SetActive(GameOptionsUIPanel.name.Equals(PanelName));
    }

    #endregion

    public override void OnConnected()
    {
        Debug.Log("We Connected to Internet");
    }

    public override void OnConnectedToMaster()
    {
        ActivatePanel(GameOptionsUIPanel.name);
        Debug.Log(PhotonNetwork.LocalPlayer.NickName+" is connected to Master");
    }

    public void OnCancelButtonClicked()
    {
        ActivatePanel(GameOptionsUIPanel.name);
    }

    public override void OnCreatedRoom()
    {
        Debug.Log(PhotonNetwork.CurrentRoom.Name + " is created");

    }

    public override void OnJoinRandomFailed(short returnCode, string message)
    {
        Debug.Log(message);
        // if no room, please create one;
        if(GameMode!=null)
        {
            string roomName = RoomManeInput.text;

        if(string.IsNullOrEmpty(roomName))
        {
            roomName = "Room"+ Random.Range(1000,100000);
        }

        RoomOptions roomOptions = new RoomOptions();
        roomOptions.MaxPlayers = 4;

        string[] roomPropertyInLobby = {"gm"}; //gm stands for game mode

        ExitGames.Client.Photon.Hashtable CustomRoomProperties = new ExitGames.Client.Photon.Hashtable() {{"gm", GameMode} };


        roomOptions.CustomRoomPropertiesForLobby = roomPropertyInLobby;
        roomOptions.CustomRoomProperties = CustomRoomProperties;



        PhotonNetwork.CreateRoom(roomName, roomOptions);

        }
    }

    public override void OnJoinedRoom()
    {
        ActivatePanel(InsideRoomUIPanel.name); 

        Debug.Log(PhotonNetwork.LocalPlayer.NickName + " joined in "+ PhotonNetwork.CurrentRoom.Name + " with player count of "+ PhotonNetwork.CurrentRoom.PlayerCount); 
        
        if(PhotonNetwork.CurrentRoom.CustomProperties.ContainsKey("gm"))
        {
            // object gameModeName;
            // if(PhotonNetwork.CurrentRoom.CustomProperties.TryGetValue("gm" , out gameModeName))
            // {
            //     Debug.Log(gameModeName.ToString());
            // }

            RoomInfoText.text = "Room Name: "+ PhotonNetwork.CurrentRoom.Name + " " +  " Players/MaxPlayers: "+ PhotonNetwork.CurrentRoom.PlayerCount + " / "+ PhotonNetwork.CurrentRoom.MaxPlayers;

            if(PhotonNetwork.CurrentRoom.CustomProperties.ContainsValue("rc"))
            {
                //Racing Mode
                GameModeText.text = "Death Race";
                PannelBackground.sprite = racingBackground;
            }
            else if(PhotonNetwork.CurrentRoom.CustomProperties.ContainsValue("dr"))
            {
                //DeathRace GameMode;
                GameModeText.text = "Demolition";
                PannelBackground.sprite = deathRaceBackground;
            }
            if(playerListGameObjects ==null)
            {
                playerListGameObjects = new Dictionary<int, GameObject>();
            }

            

            foreach(Player player in PhotonNetwork.PlayerList)
            {
                GameObject pLayerListGameObject = Instantiate(PlayerListPrefab);
                pLayerListGameObject.transform.SetParent(PlayerListContent.transform);
                pLayerListGameObject.transform.localScale = Vector3.one;
                pLayerListGameObject.GetComponent<PlayerListEntryInitializer>().Initialize(player.ActorNumber, player.NickName);

                object isPlayerReady;

                if(player.CustomProperties.TryGetValue(MultiplayerRacingGame.PLAYER_READY, out isPlayerReady))
                {
                    pLayerListGameObject.GetComponent<PlayerListEntryInitializer>().SetPlayerReady((bool)isPlayerReady);
                }

                playerListGameObjects.Add(player.ActorNumber, pLayerListGameObject);
            }

        }
        StartGameButton.SetActive(false);
    }

    public override void OnPlayerEnteredRoom(Player newPlayer)
    {
                RoomInfoText.text = "Room Name: "+ PhotonNetwork.CurrentRoom.Name + " " +  " Players/MaxPlayers: "+ PhotonNetwork.CurrentRoom.PlayerCount + " / "+ PhotonNetwork.CurrentRoom.MaxPlayers;


                GameObject pLayerListGameObject = Instantiate(PlayerListPrefab);
                pLayerListGameObject.transform.SetParent(PlayerListContent.transform);
                pLayerListGameObject.transform.localScale = Vector3.one;
                pLayerListGameObject.GetComponent<PlayerListEntryInitializer>().Initialize(newPlayer.ActorNumber, newPlayer.NickName);

                playerListGameObjects.Add(newPlayer.ActorNumber, pLayerListGameObject);

                StartGameButton.SetActive(CheckPlayerReady());
    }
    public override void OnMasterClientSwitched(Player newMasterClient)
    {
        if(PhotonNetwork.LocalPlayer.ActorNumber == newMasterClient.ActorNumber)
        {
            StartGameButton.SetActive(CheckPlayerReady());
        }
    }

    public override void OnPlayerPropertiesUpdate(Player targetPlayer, ExitGames.Client.Photon.Hashtable changedProps)
    {
        GameObject playerListGameObject;
        if(playerListGameObjects.TryGetValue(targetPlayer.ActorNumber, out playerListGameObject))
        {
            object isPLayerReady;
            if(changedProps.TryGetValue(MultiplayerRacingGame.PLAYER_READY, out isPLayerReady))
            {
                playerListGameObject.GetComponent<PlayerListEntryInitializer>().SetPlayerReady((bool)isPLayerReady);
            }
        }
        StartGameButton.SetActive(CheckPlayerReady());
    }

    public override void OnPlayerLeftRoom(Player otherPlayer)
    {
        RoomInfoText.text = "Room Name: "+ PhotonNetwork.CurrentRoom.Name + " " +  " Players/MaxPlayers: "+ PhotonNetwork.CurrentRoom.PlayerCount + " / "+ PhotonNetwork.CurrentRoom.MaxPlayers;

        Destroy(playerListGameObjects[otherPlayer.ActorNumber].gameObject);
        playerListGameObjects.Remove(otherPlayer.ActorNumber);
        StartGameButton.SetActive(CheckPlayerReady());

    }

    public override void OnLeftRoom()
    {
        ActivatePanel(GameOptionsUIPanel.name);
        foreach(GameObject playerListGameObject in playerListGameObjects.Values)
        {
            Destroy(playerListGameObject);
        }
        playerListGameObjects.Clear();
        playerListGameObjects = null; 
        
    }



    public void OnCreateRoomButtonClicked()
    {

        ActivatePanel(CreatingRoomInfoPanel.name);
        if(GameMode!=null)
        {
            string roomName = RoomManeInput.text;

        if(string.IsNullOrEmpty(roomName))
        {
            roomName = "Room"+ Random.Range(1000,100000);
        }

        RoomOptions roomOptions = new RoomOptions();
        roomOptions.MaxPlayers = 4;

        string[] roomPropertyInLobby = {"gm"}; //gm stands for game mode

        ExitGames.Client.Photon.Hashtable CustomRoomProperties = new ExitGames.Client.Photon.Hashtable() {{"gm", GameMode } };


        roomOptions.CustomRoomPropertiesForLobby = roomPropertyInLobby;
        roomOptions.CustomRoomProperties = CustomRoomProperties;



        PhotonNetwork.CreateRoom(roomName, roomOptions);

        }
        
    }

    public void SetGameMode(string _gameMode)
    {
        GameMode = _gameMode;
    }


    public void OnJoinedRandomRoomButtonClicked(string _gameMode)
    {
        GameMode = _gameMode;
        ExitGames.Client.Photon.Hashtable expectedCustomRoomProperties = new ExitGames.Client.Photon.Hashtable() {{"gm", _gameMode}};
        PhotonNetwork.JoinRandomRoom(expectedCustomRoomProperties,0);
    }

    public void OnBackButtonClicked()
    {
        ActivatePanel(GameOptionsUIPanel.name);
    }

    public void OnLeaveGameButtonClicked()
    {
        PhotonNetwork.LeaveRoom();
    }

    public void OnStartGameButtonClicked()
    {
        PhotonNetwork.CurrentRoom.IsOpen = false;
        PhotonNetwork.CurrentRoom.IsVisible = false;
        if(PhotonNetwork.CurrentRoom.CustomProperties.ContainsKey("gm"))
        {
            if(PhotonNetwork.CurrentRoom.CustomProperties.ContainsValue("rc"))
            {
                //racingBackground Game Mode
                PhotonNetwork.LoadLevel("RaceScene-1");
            }
            else if(PhotonNetwork.CurrentRoom.CustomProperties.ContainsValue("dr"))
            {
                //DeathRace Game Mode
                 PhotonNetwork.LoadLevel("SampleScene");
            }
        }
    }




    private bool CheckPlayerReady()
    {
        if(!PhotonNetwork.IsMasterClient)
        {
            return false;
        }
        foreach(Player player in PhotonNetwork.PlayerList)
        {
            object isPlayerReady;
            if(player.CustomProperties.TryGetValue(MultiplayerRacingGame.PLAYER_READY, out isPlayerReady))
            {
                if(!(bool)isPlayerReady)
                {
                    return false;
                }
            }
            else
            {
                return false;
            }  
        }
        return true;
    }


    public void OnCarSelectClicked()
    {
        WeaponSelect.SetActive(false);
        CarSelect.SetActive(true);
        selectLeftRight[2].SetActive(false);
        selectLeftRight[3].SetActive(false);
        selectLeftRight[0].SetActive(true);
        selectLeftRight[1].SetActive(true);
    }

    public void OnWeaponSelectClicked()
    {
        WeaponSelect.SetActive(true);
        CarSelect.SetActive(false);
        selectLeftRight[0].SetActive(false);
        selectLeftRight[1].SetActive(false);
        selectLeftRight[2].SetActive(true);
        selectLeftRight[3].SetActive(true);
    }



}
