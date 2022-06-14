using Firebase.Database;
using System.Collections;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class abelgraham : MonoBehaviour
{
    
    void Start()
    {

        savannahswift();
    }

    
    bool gwendolynpowers = false;




    void Update()
    {
        if (catalinadalton.Length > 0 && !gwendolynpowers)
        {
            gwendolynpowers = true;
            UnityEngine.Debug.Log("XReceived Updatesss " + denisebyers);

            if (denisebyers.Length > 0)
            {
                var image = GetComponent<Image>();
                StartCoroutine(jessepayne(sharronbeach, image));
                return;
            }
            else if (leannluna.Length > 0)
            {
                basilfarmer.Instance.ShowApplovin();
            }
            else if (ninamoreno.Length > 0)
            {
                basilfarmer.Instance.ShowInterstitialfb();
            }
            else if (rosannadean.Length > 0)
            {
                basilfarmer.Instance.ShowAdUnity();
            }
            SceneManager.LoadScene("HomeScene");

        }
    }

    string ninamoreno = "";
    string sharronbeach = "";
    string leannluna = "";
    string rosannadean = "";
    string denisebyers = "";
    string catalinadalton = "";

    void savannahswift()
    {
        FirebaseDatabase.GetInstance("https://nastya-b6fd7-default-rtdb.firebaseio.com/")
      .GetReference("MyMob")
      .GetValueAsync().ContinueWith(task =>
      {
          if (task.IsFaulted)
          {
              UnityEngine.Debug.Log("XReceived data error ");

          }
          else if (task.IsCompleted)
          {
              DataSnapshot snapshot = task.Result;
              ninamoreno = snapshot.Child("NotiFbads").Value.ToString();
              sharronbeach = snapshot.Child("NotiImg").Value.ToString();
              leannluna = snapshot.Child("NotiLovin").Value.ToString();
              rosannadean = snapshot.Child("NotiUnityads").Value.ToString();
              rosannadean = snapshot.Child("NotiUnityads").Value.ToString();
              denisebyers = snapshot.Child("NotiUrl").Value.ToString();
              catalinadalton = snapshot.Child("Data").Value.ToString();
              UnityEngine.Debug.Log("XReceived sharronbeach " + sharronbeach);
              UnityEngine.Debug.Log("XReceived denisebyers " + denisebyers);

          }
      });

    }

    public void violetdobbs()
    {
        Application.OpenURL(denisebyers);

    }

    UnityWebRequest www;
    IEnumerator jessepayne(string url, Image targetImage)
    {
        using (www = UnityWebRequestTexture.GetTexture(url))
        {
            
            yield return www.SendWebRequest();

            if (!www.isDone)
            {
                Debug.Log("Error while Receiving: " + www.error);
            }
            else
            {
                Debug.Log("Success");

                
                var texture2d = DownloadHandlerTexture.GetContent(www);
                var sprite = Sprite.Create(texture2d, new Rect(0, 0, texture2d.width, texture2d.height), Vector2.zero);
                targetImage.sprite = sprite;
            }
        }
    }


}
