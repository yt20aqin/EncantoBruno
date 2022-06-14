using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;


public class lutherstacy : MonoBehaviour
{

    int rachelfrost;
    AsyncOperation progress = null;
    Image beverlycurtis;
    float estervasquez = 0;
    string marciegodwin;



    
    void Start()
    {
        
        
        UnityEngine.Debug.Log("XReceived Start splashscene" + laverneday.freidaquezada.ToString());
        if (laverneday.freidaquezada)
        {
            marciegodwin = "Minigame5";
        }
        else
        {
            marciegodwin = "HomeScene";
        }
        
        
        

        
        if (PlayerPrefs.HasKey("appStartedNumber"))
        {
            rachelfrost = PlayerPrefs.GetInt("appStartedNumber");
        }
        else
        {
            rachelfrost = 0;
        }
        rachelfrost++;
        PlayerPrefs.SetInt("appStartedNumber", rachelfrost);
        StartCoroutine(LoadScene());
    }


    IEnumerator LoadScene()
    {
        while (estervasquez < 5)
        {
            estervasquez += 0.05f;
            
            yield return new WaitForSeconds(0.025f);
        }
        UnityEngine.Debug.Log("XReceived LoadScene splashscene" + laverneday.freidaquezada.ToString());
        if (laverneday.freidaquezada)
        {
            marciegodwin = "NotiSc";
        }
        else
        {
            marciegodwin = "HomeScene";
        }
        SceneManager.LoadScene(marciegodwin);
    }

}
