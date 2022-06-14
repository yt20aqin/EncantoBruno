using UnityEngine;
using UnityEngine.SceneManagement;

public class kentferris : MonoBehaviour
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

    public void laceyyee()
    {
        SceneManager.LoadScene("SettingsScene");
    }
}
