using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Realtime;
using Photon.Pun;


public class EmoteManager : MonoBehaviourPunCallbacks
{
    [SerializeField]
    GameObject EmotesPanel;

    [SerializeField]
    List<GameObject> EmotesImages;

    [SerializeField]
    GameObject emotesTrigger;


    [SerializeField]
    Text Nickname;
    






    // Start is called before the first frame update
    void start()
    {
        
        
    }

    public void DisplayEmoji(string emoji)
    {
        switch(emoji)
        {
            //case 'Poop' :
            
        }
    }


    public void SwitchEmojiPanel()
    {
        EmotesPanel.gameObject.SetActive(!EmotesPanel.activeInHierarchy);
    }

    public void CheckEmojiSource(string emoji)
    {
       
            photonView.RPC("ShowEmojiImage", RpcTarget.AllBuffered, emoji);
            
    }

    [PunRPC]
    void ShowEmojiImage(string emoji)
    {
           
                GameObject emojiImage = EmotesImages.Find(obj=>obj.name==emoji);
                Nickname.text = PhotonNetwork.LocalPlayer.NickName;
                emojiImage.SetActive(true);
                EmotesPanel.SetActive(false);
                StartCoroutine(HideEmojiImage(emojiImage));
            
            
    }


    IEnumerator HideEmojiImage(GameObject EmojiImage)
    {
        yield return new WaitForSeconds(1f);
        Nickname.text = "";
        EmojiImage.SetActive(false);
        
        
    }
    
}

