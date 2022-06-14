using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class donniemeade : MonoBehaviour
{

    void Awake()
    {
        DontDestroyOnLoad(this.gameObject);
    }



    
    void Update()
    {
        if (Input.GetKeyDown("escape"))
        {
            if (SceneManager.GetActiveScene().name.Contains("Minigame"))
            {
                Transform popUpDialog = GameObject.Find("Canvas").transform.Find("PopUps/PopUpDialog");
                if (popUpDialog != null)
                    GameObject.Find("Canvas").GetComponent<dariustovar>().camillewalton(popUpDialog.gameObject);
            }
            else if (SceneManager.GetActiveScene().name == "SelectMiniGame")
            {
                GameObject.Find("Canvas").GetComponent<dariustovar>().LoadSceneWithTransition("HomeScene");
            }
            else if (SceneManager.GetActiveScene().name == "HomeScene")
                Application.Quit();
        }
    }
}
