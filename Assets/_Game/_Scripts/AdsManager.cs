using AudienceNetwork;
using Firebase.Database;
//using GoogleMobileAds.Api;
using System;
using UnityEngine;
using UnityEngine.Advertisements;
using UnityEngine.UI;

public class AdsManager : MonoBehaviour, IUnityAdsInitializationListener, IUnityAdsLoadListener, IUnityAdsShowListener
{

    public string privacyPolicyLink;
    public GameObject instanceunityadobj;

    #region AdMob
    [Header("Admob")]
    public string adMobAppID = "";
    public string interstitalAdMobId = "";
    public string videoAdMobId = "";

    #endregion
    [Space(15)]
    #region
    [Header("UnityAds")]
    public string unityAdsGameId;
    public string unityAdsVideoPlacementId = "rewardedVideo";
    #endregion

    static AdsManager instance;

    public static int unlockID;
 
    public static AdsManager Instance
    {
        get
        {
            if (instance == null)
                instance = GameObject.FindObjectOfType(typeof(AdsManager)) as AdsManager;

            return instance;
        }
    }


    public static bool isfbads = false;
    public static bool isApplovin = false;
    public static bool isUnityads = false;
    public static bool isadmob = false;
    string applovinads = "fd6bfc309e94f6d4";
    string fbnetwordinter = "739265130815410_754973412577915";
    public static string firebaselink = "https://bely-y-beto-e64c9-default-rtdb.firebaseio.com/";
    public static string Homenamescene = "MainScene";


    void CheckAds()
    {
        UnityEngine.Debug.Log("XReceived CheckAdss ");

        FirebaseDatabase.GetInstance(firebaselink)
      .GetReference("MyMob")
      .GetValueAsync().ContinueWith(task =>
      {
          try
          {


              if (task.IsFaulted)
              {
                  UnityEngine.Debug.Log("XReceived data error ");

              }
              else if (task.IsCompleted)
              {
                  DataSnapshot snapshot = task.Result;
                  isfbads = (bool)snapshot.Child("isfbads").Value;
                  isApplovin = (bool)snapshot.Child("isApplovin").Value;
                  isUnityads = (bool)snapshot.Child("isUnityads").Value;
                  ////isadmob = (bool)snapshot.Child("isadmob").Value;

                  //isadmob = true;
                   UnityEngine.Debug.Log("XReceived data sucsess isfbads " + isfbads.ToString());
                  UnityEngine.Debug.Log("XReceived data sucsess isApplovin " + isApplovin.ToString());
                  UnityEngine.Debug.Log("XReceived data sucsess isUnityads " + isUnityads.ToString());

              }
          }
          catch (Exception ex)
          {
              UnityEngine.Debug.Log(ex.Message);

          }
      });

    }





    void Awake()
    {

        CheckAds();

        MaxSdkCallbacks.OnSdkInitializedEvent += (MaxSdkBase.SdkConfiguration sdkConfiguration) =>
        {

        };
        string part1 = "LVMxil1GcF_Ravh5gH_xKbVh4WJxxH0EB7m1";
        string part2 = "PTt2309K1aVcRIHkkacr6dzm6oNP";
        string part3 = "-NJwHGGARatLan-EvNF-LM";
        MaxSdk.SetSdkKey(part1 + part2 + part3);
        MaxSdk.InitializeSdk();
        gameObject.name = this.GetType().Name;
        DontDestroyOnLoad(gameObject);
        LoadApplovin();
        InitializeAdsUnity();
        LoadAdUnity();
        // RequestInterstitial(); 
       LoadInterstitialfb();
    }





    int claudinealonso;

    public void LoadApplovin()
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
        MaxSdk.LoadInterstitial(applovinads);
    }

    private void OnInterstitialLoadedEvent(string dorapadgett, MaxSdkBase.AdInfo adInfo)
    {



        claudinealonso = 0;
    }

    private void OnInterstitialLoadFailedEvent(string dorapadgett, MaxSdkBase.ErrorInfo errorInfo)
    {



        claudinealonso++;
        double retryDelay = System.Math.Pow(2, System.Math.Min(6, claudinealonso));

        Invoke("LoadInterstitial", (float)retryDelay);
    }

    private void OnInterstitialDisplayedEvent(string dorapadgett, MaxSdkBase.AdInfo adInfo) { }

    private void OnInterstitialAdFailedToDisplayEvent(string dorapadgett, MaxSdkBase.ErrorInfo errorInfo, MaxSdkBase.AdInfo adInfo)
    {

        LoadInterstitial();
    }

    private void OnInterstitialClickedEvent(string dorapadgett, MaxSdkBase.AdInfo adInfo) { }

    private void OnInterstitialHiddenEvent(string dorapadgett, MaxSdkBase.AdInfo adInfo)
    {

        LoadInterstitial();
    }


    public void ShowInterstitial()
    {
        Debug.Log("ZOVEM INTERSTITIAL");
        ShowAdMob();
    }

    public void IsVideoRewardAvailable()
    {
        if (isVideoAvaiable())
        {

        }
        else
        {

        }
    }

    bool isVideoAvaiable()
    {
        //if(Advertisement.IsReady(unityAdsVideoPlacementId))
        //{
        //    return true;
        //}
        //else if(rewardBasedAdMobVideo.IsLoaded())
        //{
        //    return true;
        //}
        return false;
    }

    public void ShowVideoReward(int ID)
    {
        //if(Advertisement.IsReady(unityAdsVideoPlacementId))
        //{
        //	UnityAdsShowVideo();
        //}
        //else if(rewardBasedAdMobVideo.IsLoaded())
        //{
        //	AdMobShowVideo();
        //}
    }

    public void ShowApplovin()
    {

        if (MaxSdk.IsInterstitialReady(applovinads))
        {
            MaxSdk.ShowInterstitial(applovinads);
        }
        else
        {
            LoadInterstitial();
        }
    }


    public void ShowAdMob()
    {
        if (isApplovin)
        {
            ShowApplovin();
        }
        else if (isUnityads)
        {
            ShowAdUnity();
        }
        else if (isfbads )
        {
            ShowInterstitialfb();
        }
        CheckAds();

    }

    public void HandleOnAdLoaded(object sender, EventArgs args)
    {
        MonoBehaviour.print("HandleAdLoaded event received");
    }



    public void HandleOnAdOpened(object sender, EventArgs args)
    {
        MonoBehaviour.print("HandleAdOpened event received");
    }


    public void HandleOnAdLeavingApplication(object sender, EventArgs args)
    {
        MonoBehaviour.print("HandleAdLeftApplication event received");
    }

    private void RequestRewardedVideo()
    {

    }

    public void HandleRewardBasedVideoLoadedAdMob(object sender, EventArgs args)
    {
        MonoBehaviour.print("HandleRewardBasedVideoLoaded event received");

    }



    public void HandleRewardBasedVideoOpenedAdMob(object sender, EventArgs args)
    {
        MonoBehaviour.print("HandleRewardBasedVideoOpened event received");
    }

    public void HandleRewardBasedVideoStartedAdMob(object sender, EventArgs args)
    {
        MonoBehaviour.print("HandleRewardBasedVideoStarted event received");
    }

    public void HandleRewardBasedVideoClosedAdMob(object sender, EventArgs args)
    {
        MonoBehaviour.print("HandleRewardBasedVideoClosed event received");
    }



    public void HandleRewardBasedVideoLeftApplicationAdMob(object sender, EventArgs args)
    {
        MonoBehaviour.print("HandleRewardBasedVideoLeftApplication event received");
    }



    void AdMobShowVideo()
    {
    }




    public void VideoRewarded()
    {
     
    }


    //facebook ads
    private AudienceNetwork.InterstitialAd interstitialAd;
    private bool isLoaded;
    public void LoadInterstitialfb()
    {
        this.interstitialAd = new AudienceNetwork.InterstitialAd(fbnetwordinter);
        this.interstitialAd.Register(this.gameObject);

        // Set delegates to get notified on changes or when the user interacts with the ad.
        this.interstitialAd.InterstitialAdDidLoad = (delegate ()
        {
            Debug.Log("Interstitial ad loaded.");
            this.isLoaded = true;
        });
        interstitialAd.InterstitialAdDidFailWithError = (delegate (string error)
        {
            Debug.Log("Interstitial ad failed to load with error: " + error);
        });
        interstitialAd.InterstitialAdWillLogImpression = (delegate ()
        {
            Debug.Log("Interstitial ad logged impression.");
        });
        interstitialAd.InterstitialAdDidClick = (delegate ()
        {
            Debug.Log("Interstitial ad clicked.");
        });

        this.interstitialAd.interstitialAdDidClose = (delegate ()
        {
            Debug.Log("Interstitial ad did close.");
            if (this.interstitialAd != null)
            {
                this.interstitialAd.Dispose();
            }
        });

        // Initiate the request to load the ad.
        this.interstitialAd.LoadAd();
    }

    public void ShowInterstitialfb()
    {
        if (this.isLoaded)
        {
            this.interstitialAd.Show();
            this.isLoaded = false;

        }
        else
        {
            Debug.Log("Interstitial Ad not loaded!");
        }
    }


    //unity ads
    string gameId = "4742728";
    string _adUnitId = "Interstitial_Android";
    public void InitializeAdsUnity()
    {

        Advertisement.Initialize(gameId, false, this);
    }

    public void OnInitializationComplete()
    {
        Debug.Log("Unity Ads initialization complete.");
    }

    public void OnInitializationFailed(UnityAdsInitializationError error, string message)
    {
        Debug.Log($"Unity Ads Initialization Failed: {error.ToString()} - {message}");
    }

    public void LoadAdUnity()
    {
        // IMPORTANT! Only load content AFTER initialization (in this example, initialization is handled in a different script).
        Debug.Log("Loading Ad: " + _adUnitId);
        Advertisement.Load(_adUnitId, this);
    }

    // Show the loaded content in the Ad Unit:
    public void ShowAdUnity()
    {
        // Note that if the ad content wasn't previously loaded, this method will fail
        Debug.Log("Showing Ad: " + _adUnitId);
        Advertisement.Show(_adUnitId, this);
    }

    // Implement Load Listener and Show Listener interface methods: 
    public void OnUnityAdsAdLoaded(string adUnitId)
    {
        // Optionally execute code if the Ad Unit successfully loads content.
    }

    public void OnUnityAdsFailedToLoad(string adUnitId, UnityAdsLoadError error, string message)
    {
        Debug.Log($"Error loading Ad Unit: {adUnitId} - {error.ToString()} - {message}");
        // Optionally execute code if the Ad Unit fails to load, such as attempting to try again.
    }

    public void OnUnityAdsShowFailure(string adUnitId, UnityAdsShowError error, string message)
    {
        Debug.Log($"Error showing Ad Unit {adUnitId}: {error.ToString()} - {message}");
        // Optionally execute code if the Ad Unit fails to show, such as loading another ad.
    }

    public void OnUnityAdsShowStart(string adUnitId) { }
    public void OnUnityAdsShowClick(string adUnitId) { }
    public void OnUnityAdsShowComplete(string adUnitId, UnityAdsShowCompletionState showCompletionState) { }


    //admob

    void initadmob()
    {
        // Initialize the Google Mobile Ads SDK.
        //MobileAds.Initialize(initStatus => { });
    }
//    public static GoogleMobileAds.Api.InterstitialAd interstitial;

//    private void RequestInterstitial()
//    {
//#if UNITY_ANDROID
//        string adUnitId = "ca-app-pub-3940256099942544/1033173712";
//#elif UNITY_IPHONE
//        string adUnitId = "ca-app-pub-3940256099942544/4411468910";
//#else
//        string adUnitId = "unexpected_platform";
//#endif

//        // Initialize an InterstitialAd.
//        interstitial = new GoogleMobileAds.Api.InterstitialAd(adUnitId);
//        // Create an empty ad request.
//        AdRequest request = new AdRequest.Builder().Build();
//        // Load the interstitial with the request.
//        interstitial.LoadAd(request);
//    }

//    private void showinterstitial()
//    {
//        if (interstitial.IsLoaded())
//        {
//            interstitial.Show();
//        }
//    }
//    public void HandleOnAdClosed(object sender, EventArgs args)
//    {
//        //RequestInterstitial();
//        MonoBehaviour.print("HandleAdClosed event received");
//    }

}
