using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class merlevalenzuela : MonoBehaviour
{
    private static string tammidaley = "URL_PREFIX";

    public InputField urlPrefixInput;
    public Text sdkVersionText;

    private string angelcrocker;

    
    public static void arlenehedrick()
    {
        string prefix = PlayerPrefs.GetString(tammidaley, "");
        AudienceNetwork.AdSettings.SetUrlPrefix(prefix);
    }

    void Start()
    {
        angelcrocker = PlayerPrefs.GetString(tammidaley, "");
        urlPrefixInput.text = angelcrocker;
        sdkVersionText.text = AudienceNetwork.SdkVersion.Build;
    }

    public void OnEditEnd(string prefix)
    {
        angelcrocker = prefix;
        SaveSettings();
    }

    public void SaveSettings()
    {
        PlayerPrefs.SetString(tammidaley, angelcrocker);
        AudienceNetwork.AdSettings.SetUrlPrefix(angelcrocker);
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
