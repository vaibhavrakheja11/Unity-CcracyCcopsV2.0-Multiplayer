using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Realtime;
using Photon.Pun;

public class NetworkedPlayer : MonoBehaviourPunCallbacks
{
    public static GameObject LocalPlayerInstance;
    //public GameObject playerNamePrefab;
    public Rigidbody rigidbody;
    public Renderer jeepMesh;

    public void Awake()
    {
        if(photonView.IsMine)
        {
            Debug.Log("Photon view.ismine is true");
            LocalPlayerInstance = gameObject;
        }
        else    
        {
            Debug.Log("Another player just connected");
        }
    }
    

}
