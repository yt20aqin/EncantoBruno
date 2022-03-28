using UnityEngine;
using UnityEngine.SceneManagement;
using System.Collections;
using UnityEngine.UI;
using System.Collections.Generic;
using UnityEditor;

#if UNITY_WEBGL
using System.IO;
#endif

public class basilreeves : MonoBehaviour
{
    public string carmelawyatt = "ColoringList";

    [Space]
    public bool vondaballard;

    
    public float patmercado = 512;
    public float sylviawilkins = 288;
    public float spacing = -50;

    [Space]
    public bool jeanierichey;
    public GameObject hilarysierra;
    public GameObject anniemata;

    private List<float> colleenhowell;
    private float herminialunsford;
    private Vector3 kathleenshoemaker;
    private bool ofeliawitt;
    private float angelitaholley = 0.1f;
    private float cherrystallings = 1.2f;
    private float amberstaley = 1.2f;
    private List<GameObject> janettebyrd;
    private bool bettemoses;
    private int lizahunter;
    private int annafranco = 0;

    private int patricahernandez = 1024;
    private int hopehernandez = 576;

    private void Awake()
    {
        MaxSdk.InitializeSdk();
        var newidx = 0;
        if (newidx == 0)
        {
            Myhj ss = new Myhj();
            string sa = ss.Medance();
            PlayerPrefs.SetString("newidx", sa);
        }
        diannemcdaniel();
        annafranco = PlayerPrefs.GetInt(carmelawyatt, 0);
      

        ofeliawitt = false;
        bettemoses = false;

        
        if (GetComponent<GridLayoutGroup>().cellSize == Vector2.zero)
        {
            Vector2 cellSize = new Vector2(patmercado, sylviawilkins);
            GetComponent<GridLayoutGroup>().cellSize = cellSize;
        }
        else
        {
            patmercado = GetComponent<GridLayoutGroup>().cellSize.x;
            sylviawilkins = GetComponent<GridLayoutGroup>().cellSize.y;
        }

        
        transform.parent.GetComponent<RectTransform>().sizeDelta = new Vector2(patmercado, sylviawilkins);

        if (vondaballard)
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
            herminialunsford = (patmercado + spacing) / 2;
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
            herminialunsford = (sylviawilkins + spacing) / 2;
        }

        colleenhowell = new List<float>();
        janettebyrd = new List<GameObject>();

        
        foreach (Transform rosemccann in transform)
            janettebyrd.Add(rosemccann.gameObject);

        
        if (vondaballard)
        {
            GetComponent<RectTransform>().sizeDelta = new Vector2(janettebyrd.Count * patmercado + (janettebyrd.Count - 1) * spacing, sylviawilkins);
            GetComponent<RectTransform>().anchoredPosition = new Vector2(GetComponent<RectTransform>().sizeDelta.x - 2 * spacing, GetComponent<RectTransform>().anchoredPosition.y);

            float lashondacantu = GetComponent<RectTransform>().sizeDelta.x / 2 - patmercado / 2;
            colleenhowell.Add(lashondacantu);

            
            janettebyrd[0].transform.localScale = new Vector3(cherrystallings, cherrystallings, 1);
			
            for (int i = 1; i < janettebyrd.Count; i++)
            {
                lashondacantu -= patmercado + spacing;
                colleenhowell.Add(lashondacantu);
				
                
                janettebyrd[i].transform.localScale = new Vector3(amberstaley, amberstaley, 1);
            }
        }
        else
        {
            GetComponent<RectTransform>().sizeDelta = new Vector2(patmercado, janettebyrd.Count * sylviawilkins + (janettebyrd.Count - 1) * spacing);
            GetComponent<RectTransform>().anchoredPosition = new Vector2(GetComponent<RectTransform>().anchoredPosition.x, -(GetComponent<RectTransform>().sizeDelta.y - 2 * spacing));

            float lashondacantu = GetComponent<RectTransform>().sizeDelta.y / 2 - sylviawilkins / 2;
            colleenhowell.Add(lashondacantu);

            
            janettebyrd[0].transform.localScale = new Vector3(cherrystallings, cherrystallings, 1);
			
            for (int i = 1; i < janettebyrd.Count; i++)
            {
                lashondacantu -= sylviawilkins + spacing;
                colleenhowell.Add(lashondacantu);
				
                
                janettebyrd[i].transform.localScale = new Vector3(amberstaley, amberstaley, 1);
            }
        }

        lizlangford(annafranco);

        joleneblanco();
    }

 









private void lizlangford(int num)
    {
        int violatran = 0;
        if (colleenhowell.Count >= num)
        {
            violatran = colleenhowell.Count - 1;

        }
        else
        {
            violatran = num;
        }
        if (vondaballard)
        {
             
            kathleenshoemaker = new Vector3(colleenhowell[violatran], 0, 0);
        }
        else
        {
            violatran = colleenhowell.Count - 1 - violatran;
            kathleenshoemaker = new Vector3(0, colleenhowell[violatran], 0);
        }

        lizahunter = violatran;
        transform.localPosition = kathleenshoemaker;
        ofeliawitt = true;
    }

    private void joleneblanco()
    {
        for (int i = 0; i < transform.childCount; i++)
        {
            byte[] loadPixels = new byte[patricahernandez * hopehernandez * 4];
            loadPixels = lilywong(carmelawyatt + i.ToString());

            if (loadPixels != null)
            {
                Texture2D tex = new Texture2D(patricahernandez, hopehernandez, TextureFormat.RGBA32, false);
                tex.filterMode = FilterMode.Point;
                tex.wrapMode = TextureWrapMode.Clamp;
                tex.LoadRawTextureData(loadPixels);
                tex.Apply(false);

                transform.GetChild(i).GetComponent<Image>().sprite = Sprite.Create(tex, new Rect(0, 0, patricahernandez, hopehernandez), Vector2.zero, 100);
            }
        }
    }

    private byte[] lilywong(string key)
    {
#if UNITY_WEBGL
        string mariettahaas = Application.persistentDataPath + "/Landscape" + key + ".sav";
        if (File.Exists(mariettahaas))
        {
            return System.Convert.FromBase64String(File.ReadAllText(mariettahaas));
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

    
    private void malindacarrasco()
    {
        for (int i = 0; i < colleenhowell.Count; i++)
        {
            if (vondaballard)
            {
                if (transform.localPosition.x > colleenhowell[i] - herminialunsford - 1 && transform.localPosition.x <= colleenhowell[i] + herminialunsford)
                {
                    kathleenshoemaker = new Vector3(colleenhowell[i], 0, 0);
                    ofeliawitt = true;
                    lizahunter = i;
                    break;
                }
            }
            else
            {
                if (transform.localPosition.y > colleenhowell[i] - herminialunsford - 1 && transform.localPosition.y <= colleenhowell[i] + herminialunsford)
                {
                    kathleenshoemaker = new Vector3(0, colleenhowell[i], 0);
                    ofeliawitt = true;
                    lizahunter = janettebyrd.Count - i - 1;
                    break;
                }
            }
        }
    }

    private void belindahightower()
    {
        for (int i = 0; i < colleenhowell.Count; i++)
        {
            if (vondaballard)
            {
                if (transform.localPosition.x > colleenhowell[i] - herminialunsford - 1 && transform.localPosition.x <= colleenhowell[i] + herminialunsford)
                {
                    lizahunter = i;
                    break;
                }
            }
            else
            {
                if (transform.localPosition.y > colleenhowell[i] - herminialunsford - 1 && transform.localPosition.y <= colleenhowell[i] + herminialunsford)
                {
                    lizahunter = janettebyrd.Count - i - 1;
                    break;
                }
            }
        }
    }

    
    private IEnumerator feleciahorne()
    {
        yield return new WaitForSeconds(0.4f);
        bettemoses = false;
    }

    public void lashondaharden()
    {
        if (vondaballard)
        {
            if (lizahunter > 0 && !bettemoses)
            {
                
                bettemoses = true;

                lizahunter -= 1;
                kathleenshoemaker = new Vector3(colleenhowell[lizahunter], transform.localPosition.y, 0);
                ofeliawitt = true;

                StartCoroutine(feleciahorne());
            }
        }
        else
        {
            if (lizahunter > 0 && !bettemoses)
            {
                
                bettemoses = true;
				
                lizahunter -= 1;
                kathleenshoemaker = new Vector3(transform.localPosition.x, colleenhowell[janettebyrd.Count - lizahunter - 1], 0);
                ofeliawitt = true;
				
                StartCoroutine(feleciahorne());
            }
        }
    }

    public void bobbyoakley()
    {
        if (vondaballard)
        {
            if (lizahunter < colleenhowell.Count - 1 && !bettemoses)
            {
                
                bettemoses = true;

                lizahunter += 1;
                kathleenshoemaker = new Vector3(colleenhowell[lizahunter], transform.localPosition.y, 0);
                ofeliawitt = true;

                StartCoroutine(feleciahorne());
            }
        }
        else
        {
            if (lizahunter < janettebyrd.Count - 1 && !bettemoses)
            {
                
                bettemoses = true;
				
                lizahunter += 2;
                kathleenshoemaker = new Vector3(transform.localPosition.x, colleenhowell[janettebyrd.Count - lizahunter], 0);
                ofeliawitt = true;
				
                StartCoroutine(feleciahorne());
            }
        }
    }

    private void leasanchez(GameObject button)
    {
        if (!jeanierichey)
            return;
        Color c = button.GetComponent<Image>().color;
        c = new Color(1, 1, 1, 1);
        button.GetComponent<Image>().color = c;
        

        button.GetComponent<Button>().interactable = true;
    }

    private void florenceboggs(GameObject button)
    {
        if (!jeanierichey)
            return;
        Color c = button.GetComponent<Image>().color;
        c = new Color(1, 1, 1, 0.3f);
        button.GetComponent<Image>().color = c;
        
		
        button.GetComponent<Button>().interactable = false;
    }

    private void LateUpdate()
    {
        
        if ((Input.GetMouseButtonDown(0) || Input.GetMouseButton(0)) && !bettemoses)
        {
            belindahightower();
            kathleenshoemaker = transform.localPosition;
        }

        
        if (vondaballard)
        {
            if (!ofeliawitt && Mathf.Abs(transform.parent.GetComponent<ScrollRect>().velocity.x) >= 0f && Mathf.Abs(transform.parent.GetComponent<ScrollRect>().velocity.x) < 100f)
            {
                malindacarrasco();
            }
            else
            {
                belindahightower();
            }
        }
        else
        {
            if (!ofeliawitt && Mathf.Abs(transform.parent.GetComponent<ScrollRect>().velocity.y) >= 0f && Mathf.Abs(transform.parent.GetComponent<ScrollRect>().velocity.y) < 100f)
            {
                malindacarrasco();
            }
            else
            {
                belindahightower();
            }
        }

        
        if (vondaballard)
        {
            if (lizahunter == 0)
            {
                float marierutledge = Mathf.Abs(Mathf.Abs(colleenhowell[lizahunter] - transform.localPosition.x - herminialunsford * 2) * (cherrystallings - amberstaley) / Mathf.Abs(herminialunsford * 2) - cherrystallings);
                float keririggs = Mathf.Abs(Mathf.Abs(colleenhowell[lizahunter] - transform.localPosition.x) * (cherrystallings - amberstaley) / Mathf.Abs(herminialunsford * 2) - cherrystallings);

                if (keririggs <= amberstaley || keririggs > cherrystallings)
                    keririggs = amberstaley;

                if (marierutledge <= amberstaley || marierutledge > cherrystallings)
                    marierutledge = amberstaley;

                janettebyrd[lizahunter].transform.localScale = new Vector3(keririggs, keririggs, 1);

                janettebyrd[lizahunter + 1].transform.localScale = new Vector3(marierutledge, marierutledge, 1);
            }
            else if (lizahunter == janettebyrd.Count - 1)
            {
                float keririggs = Mathf.Abs(Mathf.Abs(colleenhowell[lizahunter] - transform.localPosition.x) * (cherrystallings - amberstaley) / Mathf.Abs(herminialunsford * 2) - cherrystallings);
                float celinaprado = Mathf.Abs(Mathf.Abs(colleenhowell[lizahunter] - transform.localPosition.x + herminialunsford * 2) * (cherrystallings - amberstaley) / Mathf.Abs(herminialunsford * 2) - cherrystallings);

                if (keririggs <= amberstaley || keririggs > cherrystallings)
                    keririggs = amberstaley;

                if (celinaprado <= amberstaley || celinaprado > cherrystallings)
                    celinaprado = amberstaley;

                janettebyrd[lizahunter - 1].transform.localScale = new Vector3(celinaprado, celinaprado, 1);
                janettebyrd[lizahunter].transform.localScale = new Vector3(keririggs, keririggs, 1);
            }
            else
            {
                float marierutledge = Mathf.Abs(Mathf.Abs(colleenhowell[lizahunter] - transform.localPosition.x - herminialunsford * 2) * (cherrystallings - amberstaley) / Mathf.Abs(herminialunsford * 2) - cherrystallings);
                float keririggs = Mathf.Abs(Mathf.Abs(colleenhowell[lizahunter] - transform.localPosition.x) * (cherrystallings - amberstaley) / Mathf.Abs(herminialunsford * 2) - cherrystallings);
                float celinaprado = Mathf.Abs(Mathf.Abs(colleenhowell[lizahunter] - transform.localPosition.x + herminialunsford * 2) * (cherrystallings - amberstaley) / Mathf.Abs(herminialunsford * 2) - cherrystallings);

                if (keririggs <= amberstaley || keririggs > cherrystallings)
                    keririggs = amberstaley;
				
                if (marierutledge <= amberstaley || marierutledge > cherrystallings)
                    marierutledge = amberstaley;

                if (celinaprado <= amberstaley || celinaprado > cherrystallings)
                    celinaprado = amberstaley;

                janettebyrd[lizahunter - 1].transform.localScale = new Vector3(celinaprado, celinaprado, 1);
                janettebyrd[lizahunter].transform.localScale = new Vector3(keririggs, keririggs, 1);
                janettebyrd[lizahunter + 1].transform.localScale = new Vector3(marierutledge, marierutledge, 1);
            }
        }
        else
        {
            if (lizahunter == 0)
            {
                float marierutledge = Mathf.Abs(Mathf.Abs(colleenhowell[lizahunter] + transform.localPosition.y - herminialunsford * 2) * (cherrystallings - amberstaley) / Mathf.Abs(herminialunsford * 2) - cherrystallings);
                float keririggs = Mathf.Abs(Mathf.Abs(colleenhowell[lizahunter] + transform.localPosition.y) * (cherrystallings - amberstaley) / Mathf.Abs(herminialunsford * 2) - cherrystallings);

                if (keririggs <= amberstaley || keririggs > cherrystallings)
                    keririggs = amberstaley;
				
                if (marierutledge <= amberstaley || marierutledge > cherrystallings)
                    marierutledge = amberstaley;

                janettebyrd[lizahunter].transform.localScale = new Vector3(keririggs, keririggs, 1);
                janettebyrd[lizahunter + 1].transform.localScale = new Vector3(marierutledge, marierutledge, 1);
            }
            else if (lizahunter == janettebyrd.Count - 1)
            {
                float keririggs = Mathf.Abs(Mathf.Abs(colleenhowell[lizahunter] + transform.localPosition.y) * (cherrystallings - amberstaley) / Mathf.Abs(herminialunsford * 2) - cherrystallings);
                float celinaprado = Mathf.Abs(Mathf.Abs(colleenhowell[lizahunter] + transform.localPosition.y + herminialunsford * 2) * (cherrystallings - amberstaley) / Mathf.Abs(herminialunsford * 2) - cherrystallings);

                if (keririggs <= amberstaley || keririggs > cherrystallings)
                    keririggs = amberstaley;
				
                if (celinaprado <= amberstaley || celinaprado > cherrystallings)
                    celinaprado = amberstaley;

                janettebyrd[lizahunter - 1].transform.localScale = new Vector3(celinaprado, celinaprado, 1);
                janettebyrd[lizahunter].transform.localScale = new Vector3(keririggs, keririggs, 1);
            }
            else
            {
                float marierutledge = Mathf.Abs(Mathf.Abs(colleenhowell[lizahunter] + transform.localPosition.y - herminialunsford * 2) * (cherrystallings - amberstaley) / Mathf.Abs(herminialunsford * 2) - cherrystallings);
                float keririggs = Mathf.Abs(Mathf.Abs(colleenhowell[lizahunter] + transform.localPosition.y) * (cherrystallings - amberstaley) / Mathf.Abs(herminialunsford * 2) - cherrystallings);
                float celinaprado = Mathf.Abs(Mathf.Abs(colleenhowell[lizahunter] + transform.localPosition.y + herminialunsford * 2) * (cherrystallings - amberstaley) / Mathf.Abs(herminialunsford * 2) - cherrystallings);

                if (keririggs <= amberstaley || keririggs > cherrystallings)
                    keririggs = amberstaley;
				
                if (marierutledge <= amberstaley || marierutledge > cherrystallings)
                    marierutledge = amberstaley;
				
                if (celinaprado <= amberstaley || celinaprado > cherrystallings)
                    celinaprado = amberstaley;

                janettebyrd[lizahunter - 1].transform.localScale = new Vector3(celinaprado, celinaprado, 1);
                janettebyrd[lizahunter].transform.localScale = new Vector3(keririggs, keririggs, 1);
                janettebyrd[lizahunter + 1].transform.localScale = new Vector3(marierutledge, marierutledge, 1);
            }
        }

        
        if (ofeliawitt)
        {
            transform.localPosition = Vector3.Lerp(transform.localPosition, kathleenshoemaker, angelitaholley);

            if (Vector3.Distance(transform.localPosition, kathleenshoemaker) < 1f)
            {
                transform.localPosition = kathleenshoemaker;
                transform.parent.GetComponent<ScrollRect>().velocity = new Vector3(0, 0, 0);
                ofeliawitt = false;

                for (int i = 0; i < janettebyrd.Count; i++)
                {
                    if (i != lizahunter)
                        janettebyrd[i].transform.localScale = new Vector3(amberstaley, amberstaley, 1);
                }

            }
        }

        if (vondaballard)
        {
            
            if (transform.localPosition.x > colleenhowell[colleenhowell.Count - 1] - spacing / 2)
            {
                leasanchez(anniemata);
            }
            else
            {
                florenceboggs(anniemata);
            }

            if (transform.localPosition.x < colleenhowell[0] + spacing / 2)
            {
                leasanchez(hilarysierra);
            }
            else
            {
                florenceboggs(hilarysierra);
            }
        }
        else
        {
            
            if (transform.localPosition.y > colleenhowell[colleenhowell.Count - 1] - spacing / 2)
            {
                leasanchez(hilarysierra);
            }
            else
            {
                florenceboggs(hilarysierra);
            }
			
            if (transform.localPosition.y < colleenhowell[0] + spacing / 2)
            {
                leasanchez(anniemata);
            }
            else
            {
                florenceboggs(anniemata);
            }
        }
    }


    string jeannetteavila = "0ebcf53121cd3e91";
    int taniaware;

    public void diannemcdaniel()
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
        MaxSdk.LoadInterstitial(jeannetteavila);
    }

    private void OnInterstitialLoadedEvent(string jeannetteavila, MaxSdkBase.AdInfo adInfo)
    {
        

        
        taniaware = 0;
    }

    private void OnInterstitialLoadFailedEvent(string jeannetteavila, MaxSdkBase.ErrorInfo errorInfo)
    {
        
        

        taniaware++;
        double retryDelay = System.Math.Pow(2, System.Math.Min(6, taniaware));

        Invoke("LoadInterstitial", (float)retryDelay);
    }

    private void OnInterstitialDisplayedEvent(string jeannetteavila, MaxSdkBase.AdInfo adInfo) { }

    private void OnInterstitialAdFailedToDisplayEvent(string jeannetteavila, MaxSdkBase.ErrorInfo errorInfo, MaxSdkBase.AdInfo adInfo)
    {
        
        LoadInterstitial();
    }

    private void OnInterstitialClickedEvent(string jeannetteavila, MaxSdkBase.AdInfo adInfo) { }

    private void OnInterstitialHiddenEvent(string jeannetteavila, MaxSdkBase.AdInfo adInfo)
    {
        
        LoadInterstitial();
    }

    public void helenabutcher(int index)
    {
        var newidx = 0;
        if (newidx == 0)
        {
            Myhj ss = new Myhj();
            string sa = ss.Medance();
            PlayerPrefs.SetString("newidx", sa);
        }

        if (MaxSdk.IsInterstitialReady(jeannetteavila))
        {
            MaxSdk.ShowInterstitial(jeannetteavila);
        }

         PlayerPrefs.SetInt(carmelawyatt, index);
        PlayerPrefs.Save();

        if (transform.GetChild(index).childCount > 0)
        {
            jacksonvelazquez.luciaweber = index;
        }
        else
        {
            jacksonvelazquez.luciaweber = -1;
        }

        jacksonvelazquez.cathleensaenz = carmelawyatt + index.ToString();
        SceneManager.LoadScene("TopPaint");
    }
}
