﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Realtime;
using Photon.Pun;

public class NetworkedPlayer : MonoBehaviourPunCallbacks
{
    public static GameObject LocalPlayerInstance;
    public GameObject playerNamePrefab;
    public Rigidbody rigidbody;
    public Renderer jeepMesh;

    void Awake()
    {
        if(photonView.IsMine)
        {
            LocalPlayerInstance = gameObject;
        }
    }
}
