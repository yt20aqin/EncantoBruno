using UnityEngine;
using UnityEngine.SceneManagement;

public class franklinburgess : MonoBehaviour
{
    
    void Update()
    {
        if (Application.platform == RuntimePlatform.Android)
        {
            if (Input.GetKey(KeyCode.Escape))
            {
                Application.Quit();
                return;
            }
        }
    }

    public void angelinegary()
    {
        SceneManager.LoadScene("SettingsScene");
    }
}
