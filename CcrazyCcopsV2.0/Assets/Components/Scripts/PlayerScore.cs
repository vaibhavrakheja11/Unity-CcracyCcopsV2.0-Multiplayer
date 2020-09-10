using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerScore : MonoBehaviour
{
    private int Score = 0;

    private int Kill = 0;

    private int Shots = 0;

   
    

    public void SetScore(int points)
    {
        Score += points;
    }

    public int GetScore()
    {
        return Score;
    }

    public void SetKill()
    {
        Kill += 1;
        SetScore(50);
    }

    public int GetKill()
    {
        return Kill;
    }

    public void SetShot()
    {
        Shots += 1;
        SetScore(25);
    }

    public int GetShot()
    {
        return Shots;
    }
}
