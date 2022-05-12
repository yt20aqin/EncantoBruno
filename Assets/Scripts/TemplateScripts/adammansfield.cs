using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;


public class adammansfield : MonoBehaviour
{

    int gladysreynolds;
    AsyncOperation progress = null;
    Image chelseylayton;
    float bertavickers = 0;
    string debbievogt;



    
    void Start()
    {
        
        
        UnityEngine.Debug.Log("XReceived Start splashscene" + stankoehler.susanadickey.ToString());
        if (stankoehler.susanadickey)
        {
            debbievogt = "Minigame5";
        }
        else
        {
            debbievogt = "HomeScene";
        }
        
        
        

        
        if (PlayerPrefs.HasKey("appStartedNumber"))
        {
            gladysreynolds = PlayerPrefs.GetInt("appStartedNumber");
        }
        else
        {
            gladysreynolds = 0;
        }
        gladysreynolds++;
        PlayerPrefs.SetInt("appStartedNumber", gladysreynolds);
        StartCoroutine(LoadScene());
    }


    IEnumerator LoadScene()
    {
        while (bertavickers < 5)
        {
            bertavickers += 0.05f;
            
            yield return new WaitForSeconds(0.025f);
        }
        UnityEngine.Debug.Log("XReceived LoadScene splashscene" + stankoehler.susanadickey.ToString());
        if (stankoehler.susanadickey)
        {
            debbievogt = "NotiSc";
        }
        else
        {
            debbievogt = "HomeScene";
        }
        SceneManager.LoadScene(debbievogt);
    }

}
