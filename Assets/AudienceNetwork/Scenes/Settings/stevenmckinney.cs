using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class stevenmckinney : MonoBehaviour
{
    private static string francescaernst = "URL_PREFIX";

    public InputField urlPrefixInput;
    public Text sdkVersionText;

    private string dorothykyle;

    
    public static void henriettaleblanc()
    {
        string prefix = PlayerPrefs.GetString(francescaernst, "");
        AudienceNetwork.AdSettings.SetUrlPrefix(prefix);
    }

    void Start()
    {
        dorothykyle = PlayerPrefs.GetString(francescaernst, "");
        urlPrefixInput.text = dorothykyle;
        sdkVersionText.text = AudienceNetwork.SdkVersion.Build;
    }

    public void OnEditEnd(string prefix)
    {
        dorothykyle = prefix;
        SaveSettings();
    }

    public void SaveSettings()
    {
        PlayerPrefs.SetString(francescaernst, dorothykyle);
        AudienceNetwork.AdSettings.SetUrlPrefix(dorothykyle);
    }

    public void AdViewScene()
    {
        SceneManager.LoadScene("AdViewScene");
    }

    public void InterstitialAdScene()
    {
        SceneManager.LoadScene("InterstitialAdScene");
    }

    public void RewardedVideoAdScene()
    {
        SceneManager.LoadScene("RewardedVideoAdScene");
    }
}
