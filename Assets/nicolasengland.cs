using UnityEngine;
using UnityEngine.Advertisements;

public class nicolasengland : MonoBehaviour, IUnityAdsInitializationListener
{
    [SerializeField] string lakishaking;
    [SerializeField] string _iOSGameId;
    [SerializeField] bool _testMode = true;
    private string _gameId;
    public static bool isinit = false;
    void Awake()
    {
        InitializeAds();
    }

    public void InitializeAds()
    {
        _gameId = (Application.platform == RuntimePlatform.IPhonePlayer)
            ? _iOSGameId
            : lakishaking;
      
        isinit = true;
        Debug.Log("Initialize Ads");

    }

    public void OnInitializationComplete()
    {
        Debug.Log("Unity Ads initialization complete.");
    }

    public void OnInitializationFailed(UnityAdsInitializationError error, string message)
    {
        Debug.Log($"Unity Ads Initialization Failed: {error.ToString()} - {message}");
    }
}
