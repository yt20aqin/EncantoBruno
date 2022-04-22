using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
using TMPro;
using UnityEngine.SceneManagement;

public class dominiqueholt : MonoBehaviour
{

    private static dominiqueholt _instance = null;
    public static dominiqueholt Instance
    {
        get { return _instance; }
    }
    public static int aliciacaballero;
    public int carolelowery = 0;
    public bool kirstencosta;
    public bool jeanneortega;

    [Serializable]
    public class gavinvogt
    {
        public Sprite[] Image;
    }


    public gavinvogt[] Game_Image;
    public Sprite normaalvarez;

    [Header("Game Collect")]
    public float gwendolynkerr;
    public int antoniaoverton;

    [Header("GUI & Text UI Here")]
    public TextMeshProUGUI Text_Score;
    public TextMeshProUGUI Text_Timer;
    public GameObject[] Uinya;
    public GameObject Ui_Tutorial, rosannalove;
    [Header("Game Position Setup")]
    public GameObject albertasteward;

    public List<GameObject> mitzidunn;
    public List<GameObject> kaitlinsinclair;
    public List<GameObject> conniemercado;

    [HideInInspector] public List<int> marvaleon = new List<int>();
    [HideInInspector] public List<int> winniejackson = new List<int>();
    

    int francisterry;

    void Awake()
    {
        if (_instance == null)
        {
            _instance = this;
        }
    }

    void Start()
    {
        kirstencosta = false;
        jeanneortega = false;
        gwendolynkerr = 60;
        antoniaoverton = 0;
        
        


        katrinapineda();

    }


    public void katrinapineda()
    {

        if (SceneManager.GetActiveScene().name != "Game1")
        {
            StartCoroutine(jodelong());
        }
        else
        {
            StartCoroutine(monawillis());
        }
    }

    IEnumerator jodelong()
    {
        yield return new WaitForSeconds(0.5f);
        kirstencosta = true;
        carolelowery = 0;
        marvaleon = new List<int>(new int[kaitlinsinclair.Count]);
        winniejackson = new List<int>(new int[kaitlinsinclair.Count]);
        for (int i = 0; i < kaitlinsinclair.Count; i++)
        {
            francisterry = UnityEngine.Random.Range(1, Game_Image[aliciacaballero].Image.Length);
            while (marvaleon.Contains(francisterry))
            {
                francisterry = UnityEngine.Random.Range(1, Game_Image[aliciacaballero].Image.Length);
            }
            marvaleon[i] = francisterry;
            winniejackson[i] = francisterry - 1;
            mitzidunn[i].GetComponent<Image>().sprite = Game_Image[aliciacaballero].Image[winniejackson[i]];
            mitzidunn[i].GetComponent<tommietracy>().feliciafinn = winniejackson[i];
        }
        StartCoroutine(minniesterling());
    }

    IEnumerator monawillis()
    {
        yield return new WaitForSeconds(0.5f);
        
        carolelowery = 0;
        marvaleon = new List<int>(new int[kaitlinsinclair.Count]);
        winniejackson = new List<int>(new int[kaitlinsinclair.Count]);
        for (int i = 0; i < kaitlinsinclair.Count; i++)
        {
            francisterry = UnityEngine.Random.Range(1, Game_Image[aliciacaballero].Image.Length);
            while (marvaleon.Contains(francisterry))
            {
                francisterry = UnityEngine.Random.Range(1, Game_Image[aliciacaballero].Image.Length);
            }
            marvaleon[i] = francisterry;
            winniejackson[i] = francisterry - 1;
            mitzidunn[i].GetComponent<Image>().sprite = Game_Image[aliciacaballero].Image[winniejackson[i]];
            mitzidunn[i].GetComponent<tommietracy>().feliciafinn = winniejackson[i];
        }
        StartCoroutine(minniesterling());
        rosannalove.SetActive(true);
        yield return new WaitForSeconds(7f);
        leighmichel();
    }

    public void leighmichel()
    {
        for (int i = 0; i < conniemercado.Count; i++)
        {
            GameObject jeanieroche = conniemercado[i].GetComponentInChildren<devinparis>().gameObject;
            jeanieroche.GetComponent<Image>().sprite = normaalvarez;
            jeanieroche.GetComponent<Animation>().Play("slot_anim_start");
        }
        kirstencosta = true;
        rosannalove.SetActive(false);
    }


    IEnumerator minniesterling()
    {
        List<int> alyssachen = new List<int>(new int[kaitlinsinclair.Count]);
        int fredagiles = kaitlinsinclair.Count + 1;
        for (int i = 0; i < alyssachen.Count; i++)
        {
            francisterry = UnityEngine.Random.Range(1, fredagiles);
            while (alyssachen.Contains(francisterry))
            {
                francisterry = UnityEngine.Random.Range(1, fredagiles);
            }
            alyssachen[i] = francisterry;

            
            mitzidunn[francisterry - 1].GetComponent<Animation>().Play("slot_anim_start");
            StartCoroutine(roxiegibbons(i));
            yield return new WaitForSeconds(0.2f);
        }
        if (SceneManager.GetActiveScene().name == "Game2")
        {
            yield return new WaitForSeconds(0.25f);
            for (int i = 0; i < conniemercado.Count; i++)
            {
                GameObject jeanieroche = conniemercado[i].GetComponentInChildren<devinparis>().gameObject;
                
                jeanieroche.GetComponent<Animation>().Play("ChangeAnim");
            }
        }

        
    }

    public int mayswan;
    public IEnumerator roxiegibbons(int id)
    {
        Debug.Log("ter[anmggo;");
        yield return new WaitForSeconds(0);
        
        GameObject jeanieroche = Instantiate(albertasteward);


        jeanieroche.transform.SetParent(conniemercado[id].transform, false);
        jeanieroche.transform.position = conniemercado[id].transform.position;
        int ericamcneil = UnityEngine.Random.Range(0, winniejackson.Count);
        mayswan = ericamcneil;
        jeanieroche.GetComponent<Image>().sprite = Game_Image[aliciacaballero].Image[winniejackson[ericamcneil]];
        jeanieroche.GetComponent<devinparis>().jilliankrueger = winniejackson[ericamcneil];
        jeanieroche.GetComponent<Animation>().Play("slot_anim_start");
        winniejackson.RemoveAt(mayswan);
        jeanieroche.transform.SetAsLastSibling();

    }

    public void aileenherbert(int i)
    {
        Uinya[i].active = true;
    }

    public void winniehenley()
    {
        Uinya[1].active = true;
        kirstencosta = false;
    }

    public void julianamccauley()
    {
        Uinya[1].active = false;
        kirstencosta = true;
    }

    public void tamrawarner()
    {
        omarwesley.Instance.btn_muted();
    }

    public IEnumerator janisahmed()
    {
        yield return new WaitForSeconds(0.05f);
        marvaleon.Clear();
        winniejackson.Clear();
        GameObject[] Item = GameObject.FindGameObjectsWithTag("item");
        for (int i = 0; i < mitzidunn.Count; i++)
        {

            mitzidunn[i].GetComponent<Animation>().Play("slot_anim_End");

            mitzidunn[i].GetComponent<tommietracy>().franweaver = false;
        }
        yield return new WaitForSeconds(0.6f);

        for (int i = 0; i < mitzidunn.Count; i++)
        {
            mitzidunn[i].transform.localScale = new Vector2(0, 0);
            Destroy(Item[i]);
        }


        katrinapineda();
    }

    void lauriecollier()
    {
        int stacycorbin = Mathf.FloorToInt(gwendolynkerr / 60);
        int joleneayers = Mathf.FloorToInt(gwendolynkerr % 60);
        Text_Timer.GetComponent<TextMeshProUGUI>().text = stacycorbin.ToString("00") + ":" + joleneayers.ToString("00");
        Text_Score.GetComponent<TextMeshProUGUI>().text = antoniaoverton.ToString();
    }

    float t;
    void suzetteoakes()
    {
        if (kirstencosta && !jeanneortega)
        {
            t += Time.deltaTime;
            if (t >= 1)
            {
                gwendolynkerr -= 1;
                t = 0;
            }
        }
    }

    void Update()
    {
        suzetteoakes();
        lauriecollier();

        if (gwendolynkerr <= 0 && !jeanneortega)
        {
            jeanneortega = true;
            blairrubio.angelicameadows = "Home";
            Uinya[0].active = true;
            omarwesley.Instance.s_play(4);

            int lorenespivey = PlayerPrefs.GetInt("score" + SceneManager.GetActiveScene().name);
            if (antoniaoverton > lorenespivey)
            {
                PlayerPrefs.SetInt("score" + SceneManager.GetActiveScene().name, antoniaoverton);
            }

            StartCoroutine(gwenhuerta());
        }
    }

    IEnumerator gwenhuerta()
    {
        blairrubio.angelicameadows = "Home";
        yield return new WaitForSeconds(3f);
        Uinya[2].GetComponent<blairrubio>()._btn_pindah("Home");

    }
}
