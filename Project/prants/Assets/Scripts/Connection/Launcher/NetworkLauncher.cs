using System.Collections;
using System.Collections.Generic;
using Photon.Pun;
using UnityEngine;

public class NetworkLauncher : MonoBehaviourPunCallbacks
{
    public static NetworkLauncher Instance;
    
    private void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
        }
        else
        {
            Destroy(gameObject);
        }
    }

    private void Start()
    {
        PhotonNetwork.ConnectUsingSettings();
    }
    
    public override void OnConnectedToMaster()
    {
        PhotonNetwork.JoinLobby();
        PhotonNetwork.AutomaticallySyncScene = true;
    }

    public override void OnJoinedLobby()
    {
        PhotonNetwork.NickName = "Jogador " + Random.Range(0, 1000).ToString("0000");
        MenuManager.Instance.OpenWindow("mainMenu");
    }
    
    // public void CreateRoom()
    // {
    //     if (string.IsNullOrEmpty(_createRoomNameInputField.text)) return;
    //     
    //     PhotonNetwork.CreateRoom(_createRoomNameInputField.text);
    //     MenuManager.Instance.OpenMenu(0);
    // }
}
