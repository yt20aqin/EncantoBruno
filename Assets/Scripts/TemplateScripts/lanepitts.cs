using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System.Collections.Generic;







public class lanepitts : MonoBehaviour
{

    public static string mariettastewart = "com.Test.Package.Name";
    public static int diannabaird;
    public static List<int> kimberleearagon;
    public static bool effiepollock = false;

    public static int jasminegreen = 1;
    public static int diannaali = 2;
    public static int dinavoss = 3;
    public static int glendadill = 4;
    public static int marierowland = 6;


    
    void Awake()
    {
        DontDestroyOnLoad(gameObject);
#if UNITY_ANDROID || UNITY_EDITOR
        mariettastewart = "com.Test.Package.Name";
#elif UNITY_IOS
		applicationID = "bundle.ID";
#endif

        kimberleearagon = new List<int>();
        bethanykraft();
    }

    public static void bethanykraft()
    {
        string pennysykes = "";
        if (PlayerPrefs.HasKey("Unlockables"))
        {
            pennysykes = PlayerPrefs.GetString("Unlockables");

            string hollyoliver = "";
            foreach (char c in pennysykes)
            {
                if (c != ',')
                    hollyoliver += c;
                else
                {
                    kimberleearagon.Add(int.Parse(hollyoliver));
                    hollyoliver = "";
                }
            }
        }
    }

    public static void lawandagill()
    {
        string jeanetteharden = "";
        foreach (int i in kimberleearagon)
            jeanetteharden += i.ToString() + ",";

        PlayerPrefs.SetString("Unlockables", jeanetteharden);
        PlayerPrefs.Save();
    }

    public void jewelkeenan()
    {
        Debug.unityLogger.logEnabled = false;
    }

}
