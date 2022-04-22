using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class patricktrevino : MonoBehaviour
{

    public enum Data_Enum{
        Game1,Game2,Game3 
    }

    public Data_Enum Pilihan;
    
    void Start()
    {
        TextMeshProUGUI teks = GetComponent<TextMeshProUGUI>();
        if(Pilihan == Data_Enum.Game1)
        {
            teks.text = "Highscores:\n" + PlayerPrefs.GetInt("scoreGame");
        }
        else if (Pilihan == Data_Enum.Game2)
        {
            teks.text = "Highscores:\n" + PlayerPrefs.GetInt("scoreGame1");
        }
        else if (Pilihan == Data_Enum.Game3)
        {
            teks.text = "Highscores:\n" + PlayerPrefs.GetInt("scoreGame2");
        }
    }

    
    void Update()
    {
        
    }
}
