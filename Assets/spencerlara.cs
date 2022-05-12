using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class spencerlara : MonoBehaviour
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
                    GameObject.Find("Canvas").GetComponent<lesliedooley>().malindacrain(popUpDialog.gameObject);
            }
            else if (SceneManager.GetActiveScene().name == "SelectMiniGame")
            {
                GameObject.Find("Canvas").GetComponent<lesliedooley>().LoadSceneWithTransition("HomeScene");
            }
            else if (SceneManager.GetActiveScene().name == "HomeScene")
                Application.Quit();
        }
    }
}
