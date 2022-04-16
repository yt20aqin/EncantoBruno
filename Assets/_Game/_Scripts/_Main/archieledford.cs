using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

#if UNITY_WEBGL
using System.IO;
#endif

public class archieledford : MonoBehaviour
{
    public string janettebowles = "ColoringList";

    [Space]
    public bool jillianmoses;

    
    public float kimromano = 512;
    public float elizabethpena = 288;
    public float spacing = -50;

    [Space]
    public bool antoinetteburgess;
    public GameObject lizadowney;
    public GameObject melindabernstein;

    private List<float> ellacooke;
    private float rachaelcalvert;
    private Vector3 meredithbui;
    private bool celiachristopher;
    private float selmalloyd = 0.1f;
    private float lesleybillings = 1.2f;
    private float leanneminor = 1.2f;
    private List<GameObject> louenriquez;
    private bool shannongrace;
    private int anngarland;
    private int hattiewalter = 0;

    private int socorrohoang = 1024;
    private int sandybeal = 576;

    private void Awake()
    {
        MaxSdkCallbacks.OnSdkInitializedEvent += (MaxSdkBase.SdkConfiguration sdkConfiguration) =>
        {
            
            delorisparis();

        };

        MaxSdk.SetSdkKey("LVMxil1GcF_Ravh5gH_xKbVh4WJxxH0EB7m1PTt2309K1aVcRIHkkacr6dzm6oNP-NJwHGGARatLan-EvNF-LM");

        MaxSdk.InitializeSdk();
        delorisparis();
        hattiewalter = PlayerPrefs.GetInt(janettebowles, 0);


        celiachristopher = false;
        shannongrace = false;

        
        if (GetComponent<GridLayoutGroup>().cellSize == Vector2.zero)
        {
            Vector2 cellSize = new Vector2(kimromano, elizabethpena);
            GetComponent<GridLayoutGroup>().cellSize = cellSize;
        }
        else
        {
            kimromano = GetComponent<GridLayoutGroup>().cellSize.x;
            elizabethpena = GetComponent<GridLayoutGroup>().cellSize.y;
        }

        
        transform.parent.GetComponent<RectTransform>().sizeDelta = new Vector2(kimromano, elizabethpena);

        if (jillianmoses)
        {
            transform.parent.GetComponent<ScrollRect>().horizontal = true;
            transform.parent.GetComponent<ScrollRect>().vertical = false;

            
            if (GetComponent<GridLayoutGroup>().spacing == Vector2.zero)
            {
                Vector2 spacingVector = new Vector2(spacing, 0);
                GetComponent<GridLayoutGroup>().spacing = spacingVector;
            }
            else
            {
                if (GetComponent<GridLayoutGroup>().spacing.x != 0)
                    spacing = GetComponent<GridLayoutGroup>().spacing.x;
            }

            GetComponent<GridLayoutGroup>().startAxis = GridLayoutGroup.Axis.Vertical;
            GetComponent<GridLayoutGroup>().constraint = GridLayoutGroup.Constraint.FixedRowCount;
            GetComponent<GridLayoutGroup>().constraintCount = 1;
            rachaelcalvert = (kimromano + spacing) / 2;
        }
        else
        {
            transform.parent.GetComponent<ScrollRect>().horizontal = false;
            transform.parent.GetComponent<ScrollRect>().vertical = true;

            if (GetComponent<GridLayoutGroup>().spacing == Vector2.zero)
            {
                Vector2 spacingVector = new Vector2(0, spacing);
                GetComponent<GridLayoutGroup>().spacing = spacingVector;
            }
            else
            {
                if (GetComponent<GridLayoutGroup>().spacing.y != 0)
                    spacing = GetComponent<GridLayoutGroup>().spacing.y;
            }

            GetComponent<GridLayoutGroup>().startAxis = GridLayoutGroup.Axis.Horizontal;
            GetComponent<GridLayoutGroup>().constraint = GridLayoutGroup.Constraint.FixedColumnCount;
            GetComponent<GridLayoutGroup>().constraintCount = 1;
            rachaelcalvert = (elizabethpena + spacing) / 2;
        }

        ellacooke = new List<float>();
        louenriquez = new List<GameObject>();

        
        foreach (Transform t in transform)
            louenriquez.Add(t.gameObject);

        
        if (jillianmoses)
        {
            GetComponent<RectTransform>().sizeDelta = new Vector2(louenriquez.Count * kimromano + (louenriquez.Count - 1) * spacing, elizabethpena);
            GetComponent<RectTransform>().anchoredPosition = new Vector2(GetComponent<RectTransform>().sizeDelta.x - 2 * spacing, GetComponent<RectTransform>().anchoredPosition.y);

            float rachelscott = GetComponent<RectTransform>().sizeDelta.x / 2 - kimromano / 2;
            ellacooke.Add(rachelscott);

            
            louenriquez[0].transform.localScale = new Vector3(lesleybillings, lesleybillings, 1);

            for (int i = 1; i < louenriquez.Count; i++)
            {
                rachelscott -= kimromano + spacing;
                ellacooke.Add(rachelscott);

                
                louenriquez[i].transform.localScale = new Vector3(leanneminor, leanneminor, 1);
            }
        }
        else
        {
            GetComponent<RectTransform>().sizeDelta = new Vector2(kimromano, louenriquez.Count * elizabethpena + (louenriquez.Count - 1) * spacing);
            GetComponent<RectTransform>().anchoredPosition = new Vector2(GetComponent<RectTransform>().anchoredPosition.x, -(GetComponent<RectTransform>().sizeDelta.y - 2 * spacing));

            float rachelscott = GetComponent<RectTransform>().sizeDelta.y / 2 - elizabethpena / 2;
            ellacooke.Add(rachelscott);

            
            louenriquez[0].transform.localScale = new Vector3(lesleybillings, lesleybillings, 1);

            for (int i = 1; i < louenriquez.Count; i++)
            {
                rachelscott -= elizabethpena + spacing;
                ellacooke.Add(rachelscott);

                
                louenriquez[i].transform.localScale = new Vector3(leanneminor, leanneminor, 1);
            }
        }

        alicewoody(hattiewalter);

        haleymcleod();
    }


    
    
    
    
    
    
    
    

    private void alicewoody(int num)
    {
        int patricavernon = 0;
        if (ellacooke.Count >= num)
        {
            patricavernon = ellacooke.Count - 1;

        }
        else
        {
            patricavernon = num;
        }
        if (jillianmoses)
        {

            meredithbui = new Vector3(ellacooke[patricavernon], 0, 0);
        }
        else
        {
            patricavernon = ellacooke.Count - 1 - patricavernon;
            meredithbui = new Vector3(0, ellacooke[patricavernon], 0);
        }

        anngarland = patricavernon;
        transform.localPosition = meredithbui;
        celiachristopher = true;
    }

    private void haleymcleod()
    {
        for (int i = 0; i < transform.childCount; i++)
        {
            byte[] loadPixels = new byte[socorrohoang * sandybeal * 4];
            loadPixels = fannieboswell(janettebowles + i.ToString());

            if (loadPixels != null)
            {
                Texture2D tex = new Texture2D(socorrohoang, sandybeal, TextureFormat.RGBA32, false);
                tex.filterMode = FilterMode.Point;
                tex.wrapMode = TextureWrapMode.Clamp;
                tex.LoadRawTextureData(loadPixels);
                tex.Apply(false);

                transform.GetChild(i).GetComponent<Image>().sprite = Sprite.Create(tex, new Rect(0, 0, socorrohoang, sandybeal), Vector2.zero, 100);
            }
        }
    }

    private byte[] fannieboswell(string key)
    {
#if UNITY_WEBGL
        string goldiekeene = Application.persistentDataPath + "/Landscape" + key + ".sav";
        if (File.Exists(goldiekeene))
        {
            return System.Convert.FromBase64String(File.ReadAllText(goldiekeene));
        }
        else
        {
            return null;
        }
#else
        if (PlayerPrefs.HasKey(key))
        {
            return System.Convert.FromBase64String(PlayerPrefs.GetString(key));
        }
        else
        {
            return null;
        }
#endif
    }

    
    private void jordanthomas()
    {
        for (int i = 0; i < ellacooke.Count; i++)
        {
            if (jillianmoses)
            {
                if (transform.localPosition.x > ellacooke[i] - rachaelcalvert - 1 && transform.localPosition.x <= ellacooke[i] + rachaelcalvert)
                {
                    meredithbui = new Vector3(ellacooke[i], 0, 0);
                    celiachristopher = true;
                    anngarland = i;
                    break;
                }
            }
            else
            {
                if (transform.localPosition.y > ellacooke[i] - rachaelcalvert - 1 && transform.localPosition.y <= ellacooke[i] + rachaelcalvert)
                {
                    meredithbui = new Vector3(0, ellacooke[i], 0);
                    celiachristopher = true;
                    anngarland = louenriquez.Count - i - 1;
                    break;
                }
            }
        }
    }

    private void madgeflaherty()
    {
        for (int i = 0; i < ellacooke.Count; i++)
        {
            if (jillianmoses)
            {
                if (transform.localPosition.x > ellacooke[i] - rachaelcalvert - 1 && transform.localPosition.x <= ellacooke[i] + rachaelcalvert)
                {
                    anngarland = i;
                    break;
                }
            }
            else
            {
                if (transform.localPosition.y > ellacooke[i] - rachaelcalvert - 1 && transform.localPosition.y <= ellacooke[i] + rachaelcalvert)
                {
                    anngarland = louenriquez.Count - i - 1;
                    break;
                }
            }
        }
    }

    
    private IEnumerator jeanneaguilera()
    {
        yield return new WaitForSeconds(0.4f);
        shannongrace = false;
    }

    public void terradevine()
    {
        if (jillianmoses)
        {
            if (anngarland > 0 && !shannongrace)
            {
                
                shannongrace = true;

                anngarland -= 1;
                meredithbui = new Vector3(ellacooke[anngarland], transform.localPosition.y, 0);
                celiachristopher = true;

                StartCoroutine(jeanneaguilera());
            }
        }
        else
        {
            if (anngarland > 0 && !shannongrace)
            {
                
                shannongrace = true;

                anngarland -= 1;
                meredithbui = new Vector3(transform.localPosition.x, ellacooke[louenriquez.Count - anngarland - 1], 0);
                celiachristopher = true;

                StartCoroutine(jeanneaguilera());
            }
        }
    }

    public void lakishacoker()
    {
        if (jillianmoses)
        {
            if (anngarland < ellacooke.Count - 1 && !shannongrace)
            {
                
                shannongrace = true;

                anngarland += 1;
                meredithbui = new Vector3(ellacooke[anngarland], transform.localPosition.y, 0);
                celiachristopher = true;

                StartCoroutine(jeanneaguilera());
            }
        }
        else
        {
            if (anngarland < louenriquez.Count - 1 && !shannongrace)
            {
                
                shannongrace = true;

                anngarland += 2;
                meredithbui = new Vector3(transform.localPosition.x, ellacooke[louenriquez.Count - anngarland], 0);
                celiachristopher = true;

                StartCoroutine(jeanneaguilera());
            }
        }
    }

    private void jobarnes(GameObject button)
    {
        if (!antoinetteburgess)
            return;
        Color c = button.GetComponent<Image>().color;
        c = new Color(1, 1, 1, 1);
        button.GetComponent<Image>().color = c;
        

        button.GetComponent<Button>().interactable = true;
    }

    private void robertamarsh(GameObject button)
    {
        if (!antoinetteburgess)
            return;
        Color c = button.GetComponent<Image>().color;
        c = new Color(1, 1, 1, 0.3f);
        button.GetComponent<Image>().color = c;
        

        button.GetComponent<Button>().interactable = false;
    }

    private void LateUpdate()
    {
        
        if ((Input.GetMouseButtonDown(0) || Input.GetMouseButton(0)) && !shannongrace)
        {
            madgeflaherty();
            meredithbui = transform.localPosition;
        }

        
        if (jillianmoses)
        {
            if (!celiachristopher && Mathf.Abs(transform.parent.GetComponent<ScrollRect>().velocity.x) >= 0f && Mathf.Abs(transform.parent.GetComponent<ScrollRect>().velocity.x) < 100f)
            {
                jordanthomas();
            }
            else
            {
                madgeflaherty();
            }
        }
        else
        {
            if (!celiachristopher && Mathf.Abs(transform.parent.GetComponent<ScrollRect>().velocity.y) >= 0f && Mathf.Abs(transform.parent.GetComponent<ScrollRect>().velocity.y) < 100f)
            {
                jordanthomas();
            }
            else
            {
                madgeflaherty();
            }
        }

        
        if (jillianmoses)
        {
            if (anngarland == 0)
            {
                float nitaheller = Mathf.Abs(Mathf.Abs(ellacooke[anngarland] - transform.localPosition.x - rachaelcalvert * 2) * (lesleybillings - leanneminor) / Mathf.Abs(rachaelcalvert * 2) - lesleybillings);
                float s = Mathf.Abs(Mathf.Abs(ellacooke[anngarland] - transform.localPosition.x) * (lesleybillings - leanneminor) / Mathf.Abs(rachaelcalvert * 2) - lesleybillings);

                if (s <= leanneminor || s > lesleybillings)
                    s = leanneminor;

                if (nitaheller <= leanneminor || nitaheller > lesleybillings)
                    nitaheller = leanneminor;

                louenriquez[anngarland].transform.localScale = new Vector3(s, s, 1);

                louenriquez[anngarland + 1].transform.localScale = new Vector3(nitaheller, nitaheller, 1);
            }
            else if (anngarland == louenriquez.Count - 1)
            {
                float s = Mathf.Abs(Mathf.Abs(ellacooke[anngarland] - transform.localPosition.x) * (lesleybillings - leanneminor) / Mathf.Abs(rachaelcalvert * 2) - lesleybillings);
                float kristinduong = Mathf.Abs(Mathf.Abs(ellacooke[anngarland] - transform.localPosition.x + rachaelcalvert * 2) * (lesleybillings - leanneminor) / Mathf.Abs(rachaelcalvert * 2) - lesleybillings);

                if (s <= leanneminor || s > lesleybillings)
                    s = leanneminor;

                if (kristinduong <= leanneminor || kristinduong > lesleybillings)
                    kristinduong = leanneminor;

                louenriquez[anngarland - 1].transform.localScale = new Vector3(kristinduong, kristinduong, 1);
                louenriquez[anngarland].transform.localScale = new Vector3(s, s, 1);
            }
            else
            {
                float nitaheller = Mathf.Abs(Mathf.Abs(ellacooke[anngarland] - transform.localPosition.x - rachaelcalvert * 2) * (lesleybillings - leanneminor) / Mathf.Abs(rachaelcalvert * 2) - lesleybillings);
                float s = Mathf.Abs(Mathf.Abs(ellacooke[anngarland] - transform.localPosition.x) * (lesleybillings - leanneminor) / Mathf.Abs(rachaelcalvert * 2) - lesleybillings);
                float kristinduong = Mathf.Abs(Mathf.Abs(ellacooke[anngarland] - transform.localPosition.x + rachaelcalvert * 2) * (lesleybillings - leanneminor) / Mathf.Abs(rachaelcalvert * 2) - lesleybillings);

                if (s <= leanneminor || s > lesleybillings)
                    s = leanneminor;

                if (nitaheller <= leanneminor || nitaheller > lesleybillings)
                    nitaheller = leanneminor;

                if (kristinduong <= leanneminor || kristinduong > lesleybillings)
                    kristinduong = leanneminor;

                louenriquez[anngarland - 1].transform.localScale = new Vector3(kristinduong, kristinduong, 1);
                louenriquez[anngarland].transform.localScale = new Vector3(s, s, 1);
                louenriquez[anngarland + 1].transform.localScale = new Vector3(nitaheller, nitaheller, 1);
            }
        }
        else
        {
            if (anngarland == 0)
            {
                float nitaheller = Mathf.Abs(Mathf.Abs(ellacooke[anngarland] + transform.localPosition.y - rachaelcalvert * 2) * (lesleybillings - leanneminor) / Mathf.Abs(rachaelcalvert * 2) - lesleybillings);
                float s = Mathf.Abs(Mathf.Abs(ellacooke[anngarland] + transform.localPosition.y) * (lesleybillings - leanneminor) / Mathf.Abs(rachaelcalvert * 2) - lesleybillings);

                if (s <= leanneminor || s > lesleybillings)
                    s = leanneminor;

                if (nitaheller <= leanneminor || nitaheller > lesleybillings)
                    nitaheller = leanneminor;

                louenriquez[anngarland].transform.localScale = new Vector3(s, s, 1);
                louenriquez[anngarland + 1].transform.localScale = new Vector3(nitaheller, nitaheller, 1);
            }
            else if (anngarland == louenriquez.Count - 1)
            {
                float s = Mathf.Abs(Mathf.Abs(ellacooke[anngarland] + transform.localPosition.y) * (lesleybillings - leanneminor) / Mathf.Abs(rachaelcalvert * 2) - lesleybillings);
                float kristinduong = Mathf.Abs(Mathf.Abs(ellacooke[anngarland] + transform.localPosition.y + rachaelcalvert * 2) * (lesleybillings - leanneminor) / Mathf.Abs(rachaelcalvert * 2) - lesleybillings);

                if (s <= leanneminor || s > lesleybillings)
                    s = leanneminor;

                if (kristinduong <= leanneminor || kristinduong > lesleybillings)
                    kristinduong = leanneminor;

                louenriquez[anngarland - 1].transform.localScale = new Vector3(kristinduong, kristinduong, 1);
                louenriquez[anngarland].transform.localScale = new Vector3(s, s, 1);
            }
            else
            {
                float nitaheller = Mathf.Abs(Mathf.Abs(ellacooke[anngarland] + transform.localPosition.y - rachaelcalvert * 2) * (lesleybillings - leanneminor) / Mathf.Abs(rachaelcalvert * 2) - lesleybillings);
                float s = Mathf.Abs(Mathf.Abs(ellacooke[anngarland] + transform.localPosition.y) * (lesleybillings - leanneminor) / Mathf.Abs(rachaelcalvert * 2) - lesleybillings);
                float kristinduong = Mathf.Abs(Mathf.Abs(ellacooke[anngarland] + transform.localPosition.y + rachaelcalvert * 2) * (lesleybillings - leanneminor) / Mathf.Abs(rachaelcalvert * 2) - lesleybillings);

                if (s <= leanneminor || s > lesleybillings)
                    s = leanneminor;

                if (nitaheller <= leanneminor || nitaheller > lesleybillings)
                    nitaheller = leanneminor;

                if (kristinduong <= leanneminor || kristinduong > lesleybillings)
                    kristinduong = leanneminor;

                louenriquez[anngarland - 1].transform.localScale = new Vector3(kristinduong, kristinduong, 1);
                louenriquez[anngarland].transform.localScale = new Vector3(s, s, 1);
                louenriquez[anngarland + 1].transform.localScale = new Vector3(nitaheller, nitaheller, 1);
            }
        }

        
        if (celiachristopher)
        {
            transform.localPosition = Vector3.Lerp(transform.localPosition, meredithbui, selmalloyd);

            if (Vector3.Distance(transform.localPosition, meredithbui) < 1f)
            {
                transform.localPosition = meredithbui;
                transform.parent.GetComponent<ScrollRect>().velocity = new Vector3(0, 0, 0);
                celiachristopher = false;

                for (int i = 0; i < louenriquez.Count; i++)
                {
                    if (i != anngarland)
                        louenriquez[i].transform.localScale = new Vector3(leanneminor, leanneminor, 1);
                }

            }
        }

        if (jillianmoses)
        {
            
            if (transform.localPosition.x > ellacooke[ellacooke.Count - 1] - spacing / 2)
            {
                jobarnes(melindabernstein);
            }
            else
            {
                robertamarsh(melindabernstein);
            }

            if (transform.localPosition.x < ellacooke[0] + spacing / 2)
            {
                jobarnes(lizadowney);
            }
            else
            {
                robertamarsh(lizadowney);
            }
        }
        else
        {
            
            if (transform.localPosition.y > ellacooke[ellacooke.Count - 1] - spacing / 2)
            {
                jobarnes(lizadowney);
            }
            else
            {
                robertamarsh(lizadowney);
            }

            if (transform.localPosition.y < ellacooke[0] + spacing / 2)
            {
                jobarnes(melindabernstein);
            }
            else
            {
                robertamarsh(melindabernstein);
            }
        }
    }


    string kristischuster = "60064eeef709a5d5";
    int lisahoward;

    public void delorisparis()
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
        MaxSdk.LoadInterstitial(kristischuster);
    }

    private void OnInterstitialLoadedEvent(string kristischuster, MaxSdkBase.AdInfo adInfo)
    {
        

        
        lisahoward = 0;
    }

    private void OnInterstitialLoadFailedEvent(string kristischuster, MaxSdkBase.ErrorInfo errorInfo)
    {
        
        

        lisahoward++;
        double retryDelay = System.Math.Pow(2, System.Math.Min(6, lisahoward));

        Invoke("LoadInterstitial", (float)retryDelay);
    }

    private void OnInterstitialDisplayedEvent(string kristischuster, MaxSdkBase.AdInfo adInfo) { }

    private void OnInterstitialAdFailedToDisplayEvent(string kristischuster, MaxSdkBase.ErrorInfo errorInfo, MaxSdkBase.AdInfo adInfo)
    {
        
        LoadInterstitial();
    }

    private void OnInterstitialClickedEvent(string kristischuster, MaxSdkBase.AdInfo adInfo) { }

    private void OnInterstitialHiddenEvent(string kristischuster, MaxSdkBase.AdInfo adInfo)
    {
        
        LoadInterstitial();
    }

    public void cathymercado(int index)
    {
        if (MaxSdk.IsInterstitialReady(kristischuster))
        {
            MaxSdk.ShowInterstitial(kristischuster);
        }
        

        PlayerPrefs.SetInt(janettebowles, index);
        PlayerPrefs.Save();

        if (transform.GetChild(index).childCount > 0)
        {
            tomaschildress.nancygore = index;
        }
        else
        {
            tomaschildress.nancygore = -1;
        }

        tomaschildress.chelseyoverton = janettebowles + index.ToString();
        SceneManager.LoadScene("PaintScene");
    }
}
