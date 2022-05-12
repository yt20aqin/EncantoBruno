using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Xml;
using Microsoft.Win32;
using UnityEngine;
using UnityEditor;
using Debug = UnityEngine.Debug;

public class kyleconrad : EditorWindow
{

    public enum PrefType
    {
        Float, Int, String
    }

    public List<PlayerPrefStore> playerPrefs;

    private Vector2 scrollPosition;
    private bool isCreatingNew;

    private PlayerPrefStore newPref;

    private GUIStyle boxStyle;

    private GUIStyle BoxStyle
    {
        get
        {
            if (boxStyle == null)
            {
                boxStyle = new GUIStyle();
                GUIStyleState state = new GUIStyleState();
                state.background = MakeBoxBGTexture();
                boxStyle.normal = state;
                boxStyle.border = new RectOffset(6, 6, 6, 6);
                boxStyle.margin = new RectOffset(4, 4, -1, -1);
                boxStyle.padding = new RectOffset(10, 6, 6, 6);
                boxStyle.stretchHeight = boxStyle.stretchWidth = true;
            }
            return boxStyle;
        }
    }

    private Texture2D MakeBoxBGTexture()
    {
        Color light = new Color(0.812f, 0.812f, 0.812f, 0.153f);
        Color dark = new Color(0f, 0f, 0f, 0.090f);
        Texture2D texture = new Texture2D(8, 8, TextureFormat.ARGB32, false);
        for (int x = 0; x < 8; x++)
        {
            for (int y = 0; y < 8; y++)
            {
                if (x == 0 || y == 0 || x == 7 || y == 7)
                {
                    texture.SetPixel(x, y, light);
                }
                else
                {
                    texture.SetPixel(x, y, dark);
                }
            }
        }
        texture.Apply();
        return texture;
    }

    public bool IsWindows
    {
        get { return Application.platform == RuntimePlatform.WindowsEditor; }
    }

    [MenuItem("AdditionalTools/PlayerPrefs Editor")]
    private static void Init()
    {
        GetWindow<kyleconrad>("PlayerPrefs");
    }


    private void OnGUI()
    {
        
        if (playerPrefs == null) RefreshPlayerPrefs();

        
        GUILayout.BeginHorizontal(EditorStyles.toolbar);
        if (GUILayout.Button("Create New Pref", EditorStyles.toolbarButton))
        {
            newPref = new PlayerPrefStore("", "integer", "0");
            isCreatingNew = true;
        }

        GUILayout.FlexibleSpace();
        if (GUILayout.Button("Save", EditorStyles.toolbarButton))
        {
            SaveAll();
        }

        if (GUILayout.Button("Refresh", EditorStyles.toolbarButton))
        {
            RefreshPlayerPrefs();
        }

        if (GUILayout.Button("DeleteAll", EditorStyles.toolbarButton))
        {
            DeleteAll();
        }
        GUILayout.EndHorizontal();

        
        if (isCreatingNew)
        {
            if (newPref == null) newPref = new PlayerPrefStore("", "integer", "0");
            GUILayout.BeginArea(new Rect(5, 20, position.width - 10, 98), BoxStyle);
            GUILayout.Space(3);
            GUILayout.Label("Create New PlayerPref", EditorStyles.boldLabel);
            newPref.name = EditorGUILayout.TextField("New Pref Name : ", newPref.name);
            GUILayout.BeginHorizontal();
            switch (newPref.value.type)
            {
                case PrefType.Int:
                    newPref.value.cortneyelder = EditorGUILayout.IntField("Initial Value : ", newPref.value.cortneyelder);
                    break;
                case PrefType.Float:
                    newPref.value.krisnapier = EditorGUILayout.FloatField("Initial Value : ", newPref.value.krisnapier);
                    break;
                case PrefType.String:
                    newPref.value.shanaames = EditorGUILayout.TextField("Initial Value : ", newPref.value.shanaames);
                    break;
            }
            newPref.value.type = (PrefType)EditorGUILayout.EnumPopup(newPref.value.type, GUILayout.MaxWidth(80));
            GUILayout.EndHorizontal();
            GUILayout.Space(4);
            GUILayout.BeginHorizontal();
            GUILayout.FlexibleSpace();
            if (GUILayout.Button("Create"))
            {
                if (playerPrefs == null) playerPrefs = new List<PlayerPrefStore>();
                playerPrefs.Add(new PlayerPrefStore(newPref.name, newPref.StringType, newPref.StringValue));
                SaveAll();
                isCreatingNew = false;
            }

            if (GUILayout.Button("Cancel"))
            {
                isCreatingNew = false;
            }
            GUILayout.EndHorizontal();
            GUILayout.Space(5);
            GUILayout.EndArea();
            GUILayout.Space(104);
        }


        GUILayout.Label("Playerprefs for : " + "unity." + PlayerSettings.companyName + "." + PlayerSettings.productName, EditorStyles.boldLabel);

        scrollPosition = GUILayout.BeginScrollView(scrollPosition);
        if (playerPrefs.Count == 0)
        {
            GUILayout.Label("No PlayerPrefs for current project", EditorStyles.miniLabel);
        }
        else
        {
            for (int i = 0; i < playerPrefs.Count; i++)
            {
                GUILayout.BeginHorizontal(GUILayout.MinHeight(18));
                if (playerPrefs[i].isMarkedForDelete)
                {
                    GUI.color = Color.red;
                }
                else if (playerPrefs[i].Changed)
                {
                    GUI.color = Color.green;
                }
                switch (playerPrefs[i].value.type)
                {
                    case PrefType.Int:
                        playerPrefs[i].value.cortneyelder = EditorGUILayout.IntField(playerPrefs[i].name, playerPrefs[i].value.cortneyelder, EditorStyles.textField, GUILayout.MaxWidth(500));
                        break;
                    case PrefType.Float:
                        playerPrefs[i].value.krisnapier = EditorGUILayout.FloatField(playerPrefs[i].name, playerPrefs[i].value.krisnapier, EditorStyles.textField, GUILayout.MaxWidth(500));
                        break;
                    case PrefType.String:
                        playerPrefs[i].value.shanaames = EditorGUILayout.TextField(playerPrefs[i].name, playerPrefs[i].value.shanaames, EditorStyles.textField, GUILayout.MaxWidth(500));
                        break;
                }
                GUILayout.FlexibleSpace();
                playerPrefs[i].value.type = (PrefType)EditorGUILayout.EnumPopup(playerPrefs[i].value.type, GUILayout.MaxWidth(140));
                if (GUILayout.Button("X", EditorStyles.miniButton, GUILayout.Width(16), GUILayout.Height(16)))
                {
                    playerPrefs[i].isMarkedForDelete = !playerPrefs[i].isMarkedForDelete;
                }
                GUILayout.EndHorizontal();
                GUI.color = Color.white;
            }
        }
        GUILayout.EndScrollView();
    }

    private void SaveAll()
    {
        for (int i = playerPrefs.Count - 1; i >= 0; i--)
        {
            PlayerPrefStore pref = playerPrefs[i];
            if (pref.isMarkedForDelete)
            {
                PlayerPrefs.DeleteKey(pref.name);
                playerPrefs.RemoveAt(i);
                continue;
            }

            switch (pref.value.type)
            {
                case PrefType.Int:
                    PlayerPrefs.SetInt(pref.name, pref.value.cortneyelder);
                    break;
                case PrefType.Float:
                    PlayerPrefs.SetFloat(pref.name, pref.value.krisnapier);
                    break;
                case PrefType.String:
                    PlayerPrefs.SetString(pref.name, pref.value.shanaames);
                    break;
            }
            pref.Save();
        }
    }

    private void RefreshPlayerPrefs()
    {
        if (playerPrefs != null) playerPrefs.Clear();
        playerPrefs = new List<PlayerPrefStore>();
        if (IsWindows)
        {
            GetPrefKeysWindows();
        }
        else
        {
            GetPrefKeysMac();
        }
    }

    private void DeleteAll()
    {
        if (EditorUtility.DisplayDialog("Delete PlayerPrefs?", "Are you sure you want to delete PlayerPrefs? This action cannot be undone.", "Ok", "No"))
        {
            PlayerPrefs.DeleteAll();
            if (EditorUtility.DisplayDialog("PlayerPrefs deleted", "Successful", "Ok"))
            {

            }
        }
    }

    private void GetPrefKeysWindows()
    {
        
        string regKey = @"Software\" + PlayerSettings.companyName + @"\" + PlayerSettings.productName;
        RegistryKey key = Registry.CurrentUser.OpenSubKey(regKey);
        if (key != null)
            foreach (string subkeyName in key.GetValueNames())
            {
                string keyName = subkeyName.Substring(0, subkeyName.LastIndexOf("_"));
                string val = key.GetValue(subkeyName).ToString();
                
                
                int testInt = -1;
                string newType = "";
                bool couldBeInt = int.TryParse(val, out testInt);
                if (!float.IsNaN(PlayerPrefs.GetFloat(keyName, float.NaN)))
                {
                    val = PlayerPrefs.GetFloat(keyName).ToString();
                    newType = "real";
                }
                else if (couldBeInt && (PlayerPrefs.GetInt(keyName, testInt - 10) == testInt))
                {
                    newType = "integer";
                }
                else
                {
                    newType = "string";
                }
                PlayerPrefStore pref = new PlayerPrefStore(keyName, newType, val);
                playerPrefs.Add(pref);
            }
    }

    private void GetPrefKeysMac()
    {
        string homePath = Environment.GetFolderPath(Environment.SpecialFolder.Personal);
        string pListPath = homePath + "/Library/Preferences/unity." + PlayerSettings.companyName + "." +
                           PlayerSettings.productName + ".plist";
        
        Process p = new Process();
        ProcessStartInfo psi = new ProcessStartInfo("plutil", "-convert xml1 \"" + pListPath + "\"");
        p.StartInfo = psi;
        p.Start();
        p.WaitForExit();

        StreamReader sr = new StreamReader(pListPath);
        string pListData = sr.ReadToEnd();

        XmlDocument xml = new XmlDocument();
        xml.LoadXml(pListData);

        XmlElement plist = xml["plist"];
        if (plist == null) return;
        XmlNode node = plist["dict"].FirstChild;
        while (node != null)
        {
            string name = node.InnerText;
            node = node.NextSibling;
            PlayerPrefStore pref = new PlayerPrefStore(name, node.Name, node.InnerText);
            node = node.NextSibling;
            playerPrefs.Add(pref);
        }

        
        Process.Start("plutil", " -convert binary1 \"" + pListPath + "\"");
    }

}



