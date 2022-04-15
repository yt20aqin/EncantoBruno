using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class blairrubio : MonoBehaviour
{

    public static string angelicameadows;
    public bool elisehoyt;

    
    private void Awake()
    {
        if (PlayerPrefs.GetString("annecastle").Length == 0)
        {
            shaunbauman annecastle = new shaunbauman();
            string vivianguerra = annecastle.georgiagrimm();
            PlayerPrefs.SetString("annecastle", vivianguerra.Substring(0,3) );
            roynance vilmaengle = new roynance();
            string eldastrickland = vilmaengle.janisbenitez();
            PlayerPrefs.SetString("vilmaengle", eldastrickland.Substring(0, 3));
        }
    }
    void Start()
    {
        MaxSdkCallbacks.OnSdkInitializedEvent += (MaxSdkBase.SdkConfiguration sdkConfiguration) => {
            elinorlarson();
        };

        MaxSdk.SetSdkKey("LVMxil1GcF_Ravh5gH_xKbVh4WJxxH0EB7m1PTt2309K1aVcRIHkkacr6dzm6oNP-NJwHGGARatLan-EvNF-LM");

        MaxSdk.InitializeSdk();
        elinorlarson();
    }
    string coleenfitzgerald = "a45c556485d7581a";
    int kristenmorton;

    public void elinorlarson()
    {
        
        MaxSdkCallbacks.Interstitial.OnAdLoadedEvent += OnInterstitialLoadedEvent;
        MaxSdkCallbacks.Interstitial.OnAdLoadFailedEvent += OnInterstitialLoadFailedEvent;
        MaxSdkCallbacks.Interstitial.OnAdDisplayedEvent += OnInterstitialDisplayedEvent;
        MaxSdkCallbacks.Interstitial.OnAdClickedEvent += OnInterstitialClickedEvent;
        MaxSdkCallbacks.Interstitial.OnAdHiddenEvent += OnInterstitialHiddenEvent;
        MaxSdkCallbacks.Interstitial.OnAdDisplayFailedEvent += OnInterstitialAdFailedToDisplayEvent;

        
        LoadInterstitial();
    }

    private void LoadInterstitial()
    {
        MaxSdk.LoadInterstitial(coleenfitzgerald);
    }

    private void OnInterstitialLoadedEvent(string coleenfitzgerald, MaxSdkBase.AdInfo adInfo)
    {
        

        
        kristenmorton = 0;
    }

    private void OnInterstitialLoadFailedEvent(string coleenfitzgerald, MaxSdkBase.ErrorInfo errorInfo)
    {
        
        

        kristenmorton++;
        double retryDelay = System.Math.Pow(2, System.Math.Min(6, kristenmorton));

        Invoke("LoadInterstitial", (float)retryDelay);
    }

    private void OnInterstitialDisplayedEvent(string coleenfitzgerald, MaxSdkBase.AdInfo adInfo) { }

    private void OnInterstitialAdFailedToDisplayEvent(string coleenfitzgerald, MaxSdkBase.ErrorInfo errorInfo, MaxSdkBase.AdInfo adInfo)
    {
        
        LoadInterstitial();
    }

    private void OnInterstitialClickedEvent(string coleenfitzgerald, MaxSdkBase.AdInfo adInfo) { }

    private void OnInterstitialHiddenEvent(string coleenfitzgerald, MaxSdkBase.AdInfo adInfo)
    {
        
        LoadInterstitial();
    }

    public void Show_Ads_Direct(){
     }

    public void johnkinney()
    {
        _btn_pindah(SceneManager.GetActiveScene().name);

    }
    public void _btn_pindah(string kk){
        if (MaxSdk.IsInterstitialReady(coleenfitzgerald) && kk.IndexOf("Game") >=0 )
        {
            MaxSdk.ShowInterstitial(coleenfitzgerald);
        }
        this.gameObject.active = true ;
        
        angelicameadows = kk;
        GetComponent<Animator>().Play("end");
    }

    public void _btn_resume(){
        omarwesley.Instance.s_play(0);
        GetComponent<Animator>().Play("end2");
    }


    public void _anim_pindah(){
        SceneManager.LoadScene(angelicameadows);
    }

    public void _anim_close(){
        this.gameObject.SetActive(false);
    }
}
