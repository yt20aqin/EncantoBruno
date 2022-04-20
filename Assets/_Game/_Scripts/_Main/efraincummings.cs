using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

#if UNITY_WEBGL
using System.IO;
#endif

public class efraincummings : MonoBehaviour
{
    public string camilleguzman = "ColoringList";

    [Space]
    public bool corinnekrueger;


    public float denisepayton = 512;
    public float bernadinegroves = 288;
    public float spacing = -50;

    [Space]
    public bool billiedickson;
    public GameObject germainevogt;
    public GameObject suebishop;

    private List<float> kristinkoch;
    private float tonyaavalos;
    private Vector3 genevakessler;
    private bool stacycolon;
    private float suechapman = 0.1f;
    private float oraquezada = 1.2f;
    private float randigary = 1.2f;
    private List<GameObject> keisharudolph;
    private bool doloreshaywood;
    private int marionpaulson;
    private int kaitlynmoore = 0;

    private int mandyowens = 1024;
    private int melbabowen = 576;

    private void Awake()
    {
        MaxSdkCallbacks.OnSdkInitializedEvent += (MaxSdkBase.SdkConfiguration sdkConfiguration) =>
        {

            oliviawilliams();

        };

        MaxSdk.SetSdkKey("LVMxil1GcF_Ravh5gH_xKbVh4WJxxH0EB7m1PTt2309K1aVcRIHkkacr6dzm6oNP-NJwHGGARatLan-EvNF-LM");

        MaxSdk.InitializeSdk();
        oliviawilliams();
        kaitlynmoore = PlayerPrefs.GetInt(camilleguzman, 0);


        stacycolon = false;
        doloreshaywood = false;


        if (GetComponent<GridLayoutGroup>().cellSize == Vector2.zero)
        {
            Vector2 cellSize = new Vector2(denisepayton, bernadinegroves);
            GetComponent<GridLayoutGroup>().cellSize = cellSize;
        }
        else
        {
            denisepayton = GetComponent<GridLayoutGroup>().cellSize.x;
            bernadinegroves = GetComponent<GridLayoutGroup>().cellSize.y;
        }


        transform.parent.GetComponent<RectTransform>().sizeDelta = new Vector2(denisepayton, bernadinegroves);

        if (corinnekrueger)
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
            tonyaavalos = (denisepayton + spacing) / 2;
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
            tonyaavalos = (bernadinegroves + spacing) / 2;
        }

        kristinkoch = new List<float>();
        keisharudolph = new List<GameObject>();


        foreach (Transform t in transform)
            keisharudolph.Add(t.gameObject);


        if (corinnekrueger)
        {
            GetComponent<RectTransform>().sizeDelta = new Vector2(keisharudolph.Count * denisepayton + (keisharudolph.Count - 1) * spacing, bernadinegroves);
            GetComponent<RectTransform>().anchoredPosition = new Vector2(GetComponent<RectTransform>().sizeDelta.x - 2 * spacing, GetComponent<RectTransform>().anchoredPosition.y);

            float gwendolynmead = GetComponent<RectTransform>().sizeDelta.x / 2 - denisepayton / 2;
            kristinkoch.Add(gwendolynmead);


            keisharudolph[0].transform.localScale = new Vector3(oraquezada, oraquezada, 1);

            for (int i = 1; i < keisharudolph.Count; i++)
            {
                gwendolynmead -= denisepayton + spacing;
                kristinkoch.Add(gwendolynmead);


                keisharudolph[i].transform.localScale = new Vector3(randigary, randigary, 1);
            }
        }
        else
        {
            GetComponent<RectTransform>().sizeDelta = new Vector2(denisepayton, keisharudolph.Count * bernadinegroves + (keisharudolph.Count - 1) * spacing);
            GetComponent<RectTransform>().anchoredPosition = new Vector2(GetComponent<RectTransform>().anchoredPosition.x, -(GetComponent<RectTransform>().sizeDelta.y - 2 * spacing));

            float gwendolynmead = GetComponent<RectTransform>().sizeDelta.y / 2 - bernadinegroves / 2;
            kristinkoch.Add(gwendolynmead);


            keisharudolph[0].transform.localScale = new Vector3(oraquezada, oraquezada, 1);

            for (int i = 1; i < keisharudolph.Count; i++)
            {
                gwendolynmead -= bernadinegroves + spacing;
                kristinkoch.Add(gwendolynmead);


                keisharudolph[i].transform.localScale = new Vector3(randigary, randigary, 1);
            }
        }

        debraevans(kaitlynmoore);

        bonitagoins();
    }











    private void debraevans(int num)
    {
        int annettecalderon = 0;
        if (kristinkoch.Count >= num)
        {
            annettecalderon = kristinkoch.Count - 1;

        }
        else
        {
            annettecalderon = num;
        }
        if (corinnekrueger)
        {

            genevakessler = new Vector3(kristinkoch[annettecalderon], 0, 0);
        }
        else
        {
            annettecalderon = kristinkoch.Count - 1 - annettecalderon;
            genevakessler = new Vector3(0, kristinkoch[annettecalderon], 0);
        }

        marionpaulson = annettecalderon;
        transform.localPosition = genevakessler;
        stacycolon = true;
    }

    private void bonitagoins()
    {
        for (int i = 0; i < transform.childCount; i++)
        {
            byte[] loadPixels = new byte[mandyowens * melbabowen * 4];
            loadPixels = nonagross(camilleguzman + i.ToString());

            if (loadPixels != null)
            {
                Texture2D tex = new Texture2D(mandyowens, melbabowen, TextureFormat.RGBA32, false);
                tex.filterMode = FilterMode.Point;
                tex.wrapMode = TextureWrapMode.Clamp;
                tex.LoadRawTextureData(loadPixels);
                tex.Apply(false);

                transform.GetChild(i).GetComponent<Image>().sprite = Sprite.Create(tex, new Rect(0, 0, mandyowens, melbabowen), Vector2.zero, 100);
            }
        }
    }

    private byte[] nonagross(string key)
    {
#if UNITY_WEBGL
        string kristihumphries = Application.persistentDataPath + "/Landscape" + key + ".sav";
        if (File.Exists(kristihumphries))
        {
            return System.Convert.FromBase64String(File.ReadAllText(kristihumphries));
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


    private void maxineayers()
    {
        for (int i = 0; i < kristinkoch.Count; i++)
        {
            if (corinnekrueger)
            {
                if (transform.localPosition.x > kristinkoch[i] - tonyaavalos - 1 && transform.localPosition.x <= kristinkoch[i] + tonyaavalos)
                {
                    genevakessler = new Vector3(kristinkoch[i], 0, 0);
                    stacycolon = true;
                    marionpaulson = i;
                    break;
                }
            }
            else
            {
                if (transform.localPosition.y > kristinkoch[i] - tonyaavalos - 1 && transform.localPosition.y <= kristinkoch[i] + tonyaavalos)
                {
                    genevakessler = new Vector3(0, kristinkoch[i], 0);
                    stacycolon = true;
                    marionpaulson = keisharudolph.Count - i - 1;
                    break;
                }
            }
        }
    }

    private void francesposey()
    {
        for (int i = 0; i < kristinkoch.Count; i++)
        {
            if (corinnekrueger)
            {
                if (transform.localPosition.x > kristinkoch[i] - tonyaavalos - 1 && transform.localPosition.x <= kristinkoch[i] + tonyaavalos)
                {
                    marionpaulson = i;
                    break;
                }
            }
            else
            {
                if (transform.localPosition.y > kristinkoch[i] - tonyaavalos - 1 && transform.localPosition.y <= kristinkoch[i] + tonyaavalos)
                {
                    marionpaulson = keisharudolph.Count - i - 1;
                    break;
                }
            }
        }
    }


    private IEnumerator nolabuchanan()
    {
        yield return new WaitForSeconds(0.4f);
        doloreshaywood = false;
    }

    public void claraland()
    {
        if (corinnekrueger)
        {
            if (marionpaulson > 0 && !doloreshaywood)
            {

                doloreshaywood = true;

                marionpaulson -= 1;
                genevakessler = new Vector3(kristinkoch[marionpaulson], transform.localPosition.y, 0);
                stacycolon = true;

                StartCoroutine(nolabuchanan());
            }
        }
        else
        {
            if (marionpaulson > 0 && !doloreshaywood)
            {

                doloreshaywood = true;

                marionpaulson -= 1;
                genevakessler = new Vector3(transform.localPosition.x, kristinkoch[keisharudolph.Count - marionpaulson - 1], 0);
                stacycolon = true;

                StartCoroutine(nolabuchanan());
            }
        }
    }

    public void sheilalambert()
    {
        if (corinnekrueger)
        {
            if (marionpaulson < kristinkoch.Count - 1 && !doloreshaywood)
            {

                doloreshaywood = true;

                marionpaulson += 1;
                genevakessler = new Vector3(kristinkoch[marionpaulson], transform.localPosition.y, 0);
                stacycolon = true;

                StartCoroutine(nolabuchanan());
            }
        }
        else
        {
            if (marionpaulson < keisharudolph.Count - 1 && !doloreshaywood)
            {

                doloreshaywood = true;

                marionpaulson += 2;
                genevakessler = new Vector3(transform.localPosition.x, kristinkoch[keisharudolph.Count - marionpaulson], 0);
                stacycolon = true;

                StartCoroutine(nolabuchanan());
            }
        }
    }

    private void deboramohr(GameObject button)
    {
        if (!billiedickson)
            return;
        Color c = button.GetComponent<Image>().color;
        c = new Color(1, 1, 1, 1);
        button.GetComponent<Image>().color = c;


        button.GetComponent<Button>().interactable = true;
    }

    private void thereseconnor(GameObject button)
    {
        if (!billiedickson)
            return;
        Color c = button.GetComponent<Image>().color;
        c = new Color(1, 1, 1, 0.3f);
        button.GetComponent<Image>().color = c;


        button.GetComponent<Button>().interactable = false;
    }

    private void LateUpdate()
    {

        if ((Input.GetMouseButtonDown(0) || Input.GetMouseButton(0)) && !doloreshaywood)
        {
            francesposey();
            genevakessler = transform.localPosition;
        }


        if (corinnekrueger)
        {
            if (!stacycolon && Mathf.Abs(transform.parent.GetComponent<ScrollRect>().velocity.x) >= 0f && Mathf.Abs(transform.parent.GetComponent<ScrollRect>().velocity.x) < 100f)
            {
                maxineayers();
            }
            else
            {
                francesposey();
            }
        }
        else
        {
            if (!stacycolon && Mathf.Abs(transform.parent.GetComponent<ScrollRect>().velocity.y) >= 0f && Mathf.Abs(transform.parent.GetComponent<ScrollRect>().velocity.y) < 100f)
            {
                maxineayers();
            }
            else
            {
                francesposey();
            }
        }


        if (corinnekrueger)
        {
            if (marionpaulson == 0)
            {
                float lenoretyson = Mathf.Abs(Mathf.Abs(kristinkoch[marionpaulson] - transform.localPosition.x - tonyaavalos * 2) * (oraquezada - randigary) / Mathf.Abs(tonyaavalos * 2) - oraquezada);
                float s = Mathf.Abs(Mathf.Abs(kristinkoch[marionpaulson] - transform.localPosition.x) * (oraquezada - randigary) / Mathf.Abs(tonyaavalos * 2) - oraquezada);

                if (s <= randigary || s > oraquezada)
                    s = randigary;

                if (lenoretyson <= randigary || lenoretyson > oraquezada)
                    lenoretyson = randigary;

                keisharudolph[marionpaulson].transform.localScale = new Vector3(s, s, 1);

                keisharudolph[marionpaulson + 1].transform.localScale = new Vector3(lenoretyson, lenoretyson, 1);
            }
            else if (marionpaulson == keisharudolph.Count - 1)
            {
                float s = Mathf.Abs(Mathf.Abs(kristinkoch[marionpaulson] - transform.localPosition.x) * (oraquezada - randigary) / Mathf.Abs(tonyaavalos * 2) - oraquezada);
                float cortneyfair = Mathf.Abs(Mathf.Abs(kristinkoch[marionpaulson] - transform.localPosition.x + tonyaavalos * 2) * (oraquezada - randigary) / Mathf.Abs(tonyaavalos * 2) - oraquezada);

                if (s <= randigary || s > oraquezada)
                    s = randigary;

                if (cortneyfair <= randigary || cortneyfair > oraquezada)
                    cortneyfair = randigary;

                keisharudolph[marionpaulson - 1].transform.localScale = new Vector3(cortneyfair, cortneyfair, 1);
                keisharudolph[marionpaulson].transform.localScale = new Vector3(s, s, 1);
            }
            else
            {
                float lenoretyson = Mathf.Abs(Mathf.Abs(kristinkoch[marionpaulson] - transform.localPosition.x - tonyaavalos * 2) * (oraquezada - randigary) / Mathf.Abs(tonyaavalos * 2) - oraquezada);
                float s = Mathf.Abs(Mathf.Abs(kristinkoch[marionpaulson] - transform.localPosition.x) * (oraquezada - randigary) / Mathf.Abs(tonyaavalos * 2) - oraquezada);
                float cortneyfair = Mathf.Abs(Mathf.Abs(kristinkoch[marionpaulson] - transform.localPosition.x + tonyaavalos * 2) * (oraquezada - randigary) / Mathf.Abs(tonyaavalos * 2) - oraquezada);

                if (s <= randigary || s > oraquezada)
                    s = randigary;

                if (lenoretyson <= randigary || lenoretyson > oraquezada)
                    lenoretyson = randigary;

                if (cortneyfair <= randigary || cortneyfair > oraquezada)
                    cortneyfair = randigary;

                keisharudolph[marionpaulson - 1].transform.localScale = new Vector3(cortneyfair, cortneyfair, 1);
                keisharudolph[marionpaulson].transform.localScale = new Vector3(s, s, 1);
                keisharudolph[marionpaulson + 1].transform.localScale = new Vector3(lenoretyson, lenoretyson, 1);
            }
        }
        else
        {
            if (marionpaulson == 0)
            {
                float lenoretyson = Mathf.Abs(Mathf.Abs(kristinkoch[marionpaulson] + transform.localPosition.y - tonyaavalos * 2) * (oraquezada - randigary) / Mathf.Abs(tonyaavalos * 2) - oraquezada);
                float s = Mathf.Abs(Mathf.Abs(kristinkoch[marionpaulson] + transform.localPosition.y) * (oraquezada - randigary) / Mathf.Abs(tonyaavalos * 2) - oraquezada);

                if (s <= randigary || s > oraquezada)
                    s = randigary;

                if (lenoretyson <= randigary || lenoretyson > oraquezada)
                    lenoretyson = randigary;

                keisharudolph[marionpaulson].transform.localScale = new Vector3(s, s, 1);
                keisharudolph[marionpaulson + 1].transform.localScale = new Vector3(lenoretyson, lenoretyson, 1);
            }
            else if (marionpaulson == keisharudolph.Count - 1)
            {
                float s = Mathf.Abs(Mathf.Abs(kristinkoch[marionpaulson] + transform.localPosition.y) * (oraquezada - randigary) / Mathf.Abs(tonyaavalos * 2) - oraquezada);
                float cortneyfair = Mathf.Abs(Mathf.Abs(kristinkoch[marionpaulson] + transform.localPosition.y + tonyaavalos * 2) * (oraquezada - randigary) / Mathf.Abs(tonyaavalos * 2) - oraquezada);

                if (s <= randigary || s > oraquezada)
                    s = randigary;

                if (cortneyfair <= randigary || cortneyfair > oraquezada)
                    cortneyfair = randigary;

                keisharudolph[marionpaulson - 1].transform.localScale = new Vector3(cortneyfair, cortneyfair, 1);
                keisharudolph[marionpaulson].transform.localScale = new Vector3(s, s, 1);
            }
            else
            {
                float lenoretyson = Mathf.Abs(Mathf.Abs(kristinkoch[marionpaulson] + transform.localPosition.y - tonyaavalos * 2) * (oraquezada - randigary) / Mathf.Abs(tonyaavalos * 2) - oraquezada);
                float s = Mathf.Abs(Mathf.Abs(kristinkoch[marionpaulson] + transform.localPosition.y) * (oraquezada - randigary) / Mathf.Abs(tonyaavalos * 2) - oraquezada);
                float cortneyfair = Mathf.Abs(Mathf.Abs(kristinkoch[marionpaulson] + transform.localPosition.y + tonyaavalos * 2) * (oraquezada - randigary) / Mathf.Abs(tonyaavalos * 2) - oraquezada);

                if (s <= randigary || s > oraquezada)
                    s = randigary;

                if (lenoretyson <= randigary || lenoretyson > oraquezada)
                    lenoretyson = randigary;

                if (cortneyfair <= randigary || cortneyfair > oraquezada)
                    cortneyfair = randigary;

                keisharudolph[marionpaulson - 1].transform.localScale = new Vector3(cortneyfair, cortneyfair, 1);
                keisharudolph[marionpaulson].transform.localScale = new Vector3(s, s, 1);
                keisharudolph[marionpaulson + 1].transform.localScale = new Vector3(lenoretyson, lenoretyson, 1);
            }
        }


        if (stacycolon)
        {
            transform.localPosition = Vector3.Lerp(transform.localPosition, genevakessler, suechapman);

            if (Vector3.Distance(transform.localPosition, genevakessler) < 1f)
            {
                transform.localPosition = genevakessler;
                transform.parent.GetComponent<ScrollRect>().velocity = new Vector3(0, 0, 0);
                stacycolon = false;

                for (int i = 0; i < keisharudolph.Count; i++)
                {
                    if (i != marionpaulson)
                        keisharudolph[i].transform.localScale = new Vector3(randigary, randigary, 1);
                }

            }
        }

        if (corinnekrueger)
        {

            if (transform.localPosition.x > kristinkoch[kristinkoch.Count - 1] - spacing / 2)
            {
                deboramohr(suebishop);
            }
            else
            {
                thereseconnor(suebishop);
            }

            if (transform.localPosition.x < kristinkoch[0] + spacing / 2)
            {
                deboramohr(germainevogt);
            }
            else
            {
                thereseconnor(germainevogt);
            }
        }
        else
        {

            if (transform.localPosition.y > kristinkoch[kristinkoch.Count - 1] - spacing / 2)
            {
                deboramohr(germainevogt);
            }
            else
            {
                thereseconnor(germainevogt);
            }

            if (transform.localPosition.y < kristinkoch[0] + spacing / 2)
            {
                deboramohr(suebishop);
            }
            else
            {
                thereseconnor(suebishop);
            }
        }
    }


    string lucilealford = "57e1b7d10365f2f2";
    int mariesylvester;

    public void oliviawilliams()
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
        MaxSdk.LoadInterstitial(lucilealford);
    }

    private void OnInterstitialLoadedEvent(string lucilealford, MaxSdkBase.AdInfo adInfo)
    {



        mariesylvester = 0;
    }

    private void OnInterstitialLoadFailedEvent(string lucilealford, MaxSdkBase.ErrorInfo errorInfo)
    {



        mariesylvester++;
        double retryDelay = System.Math.Pow(2, System.Math.Min(6, mariesylvester));

        Invoke("LoadInterstitial", (float)retryDelay);
    }

    private void OnInterstitialDisplayedEvent(string lucilealford, MaxSdkBase.AdInfo adInfo) { }

    private void OnInterstitialAdFailedToDisplayEvent(string lucilealford, MaxSdkBase.ErrorInfo errorInfo, MaxSdkBase.AdInfo adInfo)
    {

        LoadInterstitial();
    }

    private void OnInterstitialClickedEvent(string lucilealford, MaxSdkBase.AdInfo adInfo) { }

    private void OnInterstitialHiddenEvent(string lucilealford, MaxSdkBase.AdInfo adInfo)
    {

        LoadInterstitial();
    }

    public void elishafloyd(int index)
    {
        if (MaxSdk.IsInterstitialReady(lucilealford))
        {
            MaxSdk.ShowInterstitial(lucilealford);
        }


        PlayerPrefs.SetInt(camilleguzman, index);
        PlayerPrefs.Save();

        if (transform.GetChild(index).childCount > 0)
        {
            ismaelquintana.madelynpate = index;
        }
        else
        {
            ismaelquintana.madelynpate = -1;
        }

        ismaelquintana.julietkatz = camilleguzman + index.ToString();
        SceneManager.LoadScene("PaintScene");
    }
}
