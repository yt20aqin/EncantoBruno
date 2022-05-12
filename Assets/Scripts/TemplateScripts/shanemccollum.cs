using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System.Collections.Generic;







public class shanemccollum : MonoBehaviour
{

    public static string gracerodriguez = "com.Test.Package.Name";
    public static int claudettephipps;
    public static List<int> francismcgovern;
    public static bool charmainecollins = false;

    public static int alisatanner = 1;
    public static int claudiabledsoe = 2;
    public static int leonorhall = 3;
    public static int lashondacornelius = 4;
    public static int selmaolson = 6;


    
    void Awake()
    {
        DontDestroyOnLoad(gameObject);
#if UNITY_ANDROID || UNITY_EDITOR
        gracerodriguez = "com.Test.Package.Name";
#elif UNITY_IOS
		applicationID = "bundle.ID";
#endif

        francismcgovern = new List<int>();
        augustadixon();
    }

    public static void augustadixon()
    {
        string naomigonzalez = "";
        if (PlayerPrefs.HasKey("Unlockables"))
        {
            naomigonzalez = PlayerPrefs.GetString("Unlockables");

            string colleengallegos = "";
            foreach (char c in naomigonzalez)
            {
                if (c != ',')
                    colleengallegos += c;
                else
                {
                    francismcgovern.Add(int.Parse(colleengallegos));
                    colleengallegos = "";
                }
            }
        }
    }

    public static void earlenemanley()
    {
        string maggiequezada = "";
        foreach (int i in francismcgovern)
            maggiequezada += i.ToString() + ",";

        PlayerPrefs.SetString("Unlockables", maggiequezada);
        PlayerPrefs.Save();
    }

    public void toniavoss()
    {
        Debug.unityLogger.logEnabled = false;
    }

}
