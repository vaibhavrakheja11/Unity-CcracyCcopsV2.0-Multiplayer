using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Realtime;
using Photon.Pun;

public class PlayerListEntryInitializer : MonoBehaviour
{
    // Start is called before the first frame update

    public Text playerNameText;

    public Button PlayerReadyButton;

    public Image PlayerReadyImage;

    private bool isPlayerReady = false;
    
    public void Initialize(int playerID, string playerName)
    {
        playerNameText.text = playerName;

        if(PhotonNetwork.LocalPlayer.ActorNumber != playerID)
        {
            PlayerReadyButton.gameObject.SetActive(false);
        }
        else
        {
            //I am local Player
            ExitGames.Client.Photon.Hashtable initialProps = new ExitGames.Client.Photon.Hashtable(){{MultiplayerRacingGame.PLAYER_READY, isPlayerReady}};
            PhotonNetwork.LocalPlayer.SetCustomProperties(initialProps);

            PlayerReadyButton.onClick.AddListener(()=>
            {
                isPlayerReady = !isPlayerReady;
                SetPlayerReady(isPlayerReady);
                ExitGames.Client.Photon.Hashtable newProps = new ExitGames.Client.Photon.Hashtable(){{MultiplayerRacingGame.PLAYER_READY, isPlayerReady}};
                PhotonNetwork.LocalPlayer.SetCustomProperties(newProps);


            });
        }
        

        
    }
    public void SetPlayerReady(bool playerReady)
        {
            PlayerReadyImage.enabled = playerReady;

    if(playerReady == true)
    {
        PlayerReadyButton.GetComponentInChildren<Text>().text = "Ready!";
    }
    else
    {
         PlayerReadyButton.GetComponentInChildren<Text>().text = "Ready?";
    }

        }

    
}
