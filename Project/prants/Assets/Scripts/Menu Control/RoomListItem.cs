using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class RoomListItem : MonoBehaviour
{
    [SerializeField] private TMP_Text _roomNameLabel;
    [SerializeField] private TMP_Text _playerAmountLabel;
    
    public void SetRoomName(string roomName)
    {
        _roomNameLabel.text = roomName;
    }

    public void SetPlayerAmount(int playerAmount)
    {
        _playerAmountLabel.text = playerAmount.ToString();
    }
}
