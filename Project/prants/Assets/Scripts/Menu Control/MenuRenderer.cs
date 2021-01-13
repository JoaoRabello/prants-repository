using System.Collections;
using System.Collections.Generic;
using Photon.Realtime;
using TMPro;
using UnityEngine;

public class MenuRenderer : MonoBehaviour
{
    public static MenuRenderer Instance;

    [SerializeField] private TMP_InputField _createRoomNameInputField;
    
    [SerializeField] private GameObject _playerListItemPrefab;
    [SerializeField] private Transform _playerListContainer;

    [SerializeField] private TMP_Text _roomNameLabel;
    [SerializeField] private GameObject _startGameButton;
    
    private List<PlayerListItem> _playerList = new List<PlayerListItem>();
    
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

    public string GetRoomNameFromInputField()
    {
        return _createRoomNameInputField.text;
    }
    
    public void SetRoomName()
    {
        _roomNameLabel.text = GetRoomNameFromInputField();
    }

    public void SetStartGameButton(bool value)
    {
        _startGameButton.SetActive(value);
    }
    
    public void UpdatePlayerList(Player[] players)
    {
        foreach (Transform transformToCheck in _playerListContainer)
        {
            Destroy(transformToCheck.gameObject);
        }
        
        foreach (var player in players)
        {
            var newPlayer = Instantiate(_playerListItemPrefab, _playerListContainer).GetComponent<PlayerListItem>();
            
            newPlayer.SetPlayerName(player.NickName);
            _playerList.Add(newPlayer);
        }
    }
}
