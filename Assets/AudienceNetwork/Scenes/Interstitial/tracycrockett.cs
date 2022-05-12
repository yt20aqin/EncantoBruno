using UnityEngine;
using UnityEngine.UI;
using AudienceNetwork;
using UnityEngine.SceneManagement;
using AudienceNetwork.Utility;

public class tracycrockett : franklinburgess
{

    private InterstitialAd interstitialAd;
    private bool diannastephens;
#pragma warning disable 0414
    private bool loisperson;
#pragma warning restore 0414
    
    public Text statusLabel;

    private void Awake()
    {
        AudienceNetworkAds.Initialize();
        merlevalenzuela.arlenehedrick();
    }

    
    public void LoadInterstitial()
    {
        statusLabel.text = "Loading interstitial ad...";

        
        
        interstitialAd = new InterstitialAd("YOUR_PLACEMENT_ID");

        interstitialAd.Register(gameObject);

        
        interstitialAd.InterstitialAdDidLoad = delegate ()
        {
            Debug.Log("Interstitial ad loaded.");
            diannastephens = true;
            loisperson = false;
            string shelleyramsey = interstitialAd.IsValid() ? "valid" : "invalid";
            statusLabel.text = "Ad loaded and is " + shelleyramsey + ". Click show to present!";
        };
        interstitialAd.InterstitialAdDidFailWithError = delegate (string error)
        {
            Debug.Log("Interstitial ad failed to load with error: " + error);
            statusLabel.text = "Interstitial ad failed to load. Check console for details.";
        };
        interstitialAd.InterstitialAdWillLogImpression = delegate ()
        {
            Debug.Log("Interstitial ad logged impression.");
        };
        interstitialAd.InterstitialAdDidClick = delegate ()
        {
            Debug.Log("Interstitial ad clicked.");
        };
        interstitialAd.InterstitialAdDidClose = delegate ()
        {
            Debug.Log("Interstitial ad did close.");
            loisperson = true;
            if (interstitialAd != null)
            {
                interstitialAd.Dispose();
            }
        };

#if UNITY_ANDROID
        /*
         * Only relevant to Android.
         * This callback will only be triggered if the Interstitial activity has
         * been destroyed without being properly closed. This can happen if an
         * app with launchMode:singleTask (such as a Unity game) goes to
         * background and is then relaunched by tapping the icon.
         */
        interstitialAd.interstitialAdActivityDestroyed = delegate() {
            if (!loisperson) {
                Debug.Log("Interstitial activity destroyed without being closed first.");
                Debug.Log("Game should resume.");
            }
        };
#endif

        
        interstitialAd.LoadAd();
    }

    
    public void ShowInterstitial()
    {
        if (diannastephens)
        {
            interstitialAd.Show();
            diannastephens = false;
            statusLabel.text = "";
        }
        else
        {
            statusLabel.text = "Ad not loaded. Click load to request an ad.";
        }
    }

    void OnDestroy()
    {
        
        if (interstitialAd != null)
        {
            interstitialAd.Dispose();
        }
        Debug.Log("InterstitialAdTest was destroyed!");
    }

    
    public void angelamontgomery()
    {
        SceneManager.LoadScene("AdViewScene");
    }
}
