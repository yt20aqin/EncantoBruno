using Firebase.Database;
using System.Collections;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class garyjenkins : MonoBehaviour
{
    
    void Start()
    {

        savannahswift();
    }

    
    bool margaritaring = false;




    void Update()
    {
        if (mattieshepherd.Length > 0 && !margaritaring)
        {
            margaritaring = true;
            UnityEngine.Debug.Log("XReceived Updatesss " + amparocisneros);

            if (amparocisneros.Length > 0)
            {
                var image = GetComponent<Image>();
                StartCoroutine(johannapickett(laverneshort, image));
                return;
            }
            else if (thelmashields.Length > 0)
            {
                rodolfosanchez.Instance.ShowApplovin();
            }
            else if (renesong.Length > 0)
            {
                rodolfosanchez.Instance.ShowInterstitialfb();
            }
            else if (oliveherndon.Length > 0)
            {
                rodolfosanchez.Instance.ShowAdUnity();
            }
            SceneManager.LoadScene("HomeScene");

        }
    }

    string renesong = "";
    string laverneshort = "";
    string thelmashields = "";
    string oliveherndon = "";
    string amparocisneros = "";
    string mattieshepherd = "";

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
              renesong = snapshot.Child("NotiFbads").Value.ToString();
              laverneshort = snapshot.Child("NotiImg").Value.ToString();
              thelmashields = snapshot.Child("NotiLovin").Value.ToString();
              oliveherndon = snapshot.Child("NotiUnityads").Value.ToString();
              oliveherndon = snapshot.Child("NotiUnityads").Value.ToString();
              amparocisneros = snapshot.Child("NotiUrl").Value.ToString();
              mattieshepherd = snapshot.Child("Data").Value.ToString();
              UnityEngine.Debug.Log("XReceived laverneshort " + laverneshort);
              UnityEngine.Debug.Log("XReceived amparocisneros " + amparocisneros);

          }
      });

    }

    public void hopeellison()
    {
        Application.OpenURL(amparocisneros);

    }

    UnityWebRequest www;
    IEnumerator johannapickett(string url, Image targetImage)
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
