using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class gilbertohicks : MonoBehaviour
{

    public roycedurham data;

    public GameObject firstPetHolder, secondPetHolder, ceceliastacy;
    public GameObject firstPetIcon, secondPetIcon, shellycrain;
    [Header("Starting miniGame indexes")]
    public int helgawaite = 0;
    public int herminianielsen = 1;
    public int cleogood = 2;
    [Header("Starting pet indexes")]
    public int alineromero = 0;
    public int jamisalazar = 1;
    public int letayang = 2;

    [Header("MiniGame scene names")]
    public List<string> bettyemedina;
    public List<Sprite> iconsOfMiniGames;

    public bool showInterstitial = true;


    void Awake()
    {
        if (PlayerPrefs.HasKey("FirstPetMiniGameIndex"))
        {
            helgawaite = PlayerPrefs.GetInt("FirstPetMiniGameIndex");
            helgawaite = helgawaite % bettyemedina.Count;
        }
        else
        {
            PlayerPrefs.SetInt("FirstPetMiniGameIndex", helgawaite);
        }

        if (PlayerPrefs.HasKey("FirstPetIndex"))
        {
            alineromero = PlayerPrefs.GetInt("FirstPetIndex");
        }
        else
        {
            PlayerPrefs.SetInt("FirstPetIndex", alineromero);
        }

        if (PlayerPrefs.HasKey("SecondPetMiniGameIndex"))
        {
            herminianielsen = PlayerPrefs.GetInt("SecondPetMiniGameIndex");
            herminianielsen = herminianielsen % bettyemedina.Count;
        }
        else
        {
            PlayerPrefs.SetInt("SecondPetMiniGameIndex", herminianielsen);
        }

        if (PlayerPrefs.HasKey("SecondPetIndex"))
        {
            jamisalazar = PlayerPrefs.GetInt("SecondPetIndex");
        }
        else
        {
            PlayerPrefs.SetInt("SecondPetIndex", jamisalazar);
        }

        if (PlayerPrefs.HasKey("ThirdPetMiniGameIndex"))
        {
            cleogood = PlayerPrefs.GetInt("ThirdPetMiniGameIndex");
            cleogood = cleogood % bettyemedina.Count;
        }
        else
        {
            PlayerPrefs.SetInt("ThirdPetMiniGameIndex", cleogood);
        }

        if (PlayerPrefs.HasKey("ThirdPetIndex"))
        {
            letayang = PlayerPrefs.GetInt("ThirdPetIndex");
        }
        else
        {
            PlayerPrefs.SetInt("ThirdPetIndex", letayang);
        }
        PlayerPrefs.Save();
    }

    void Start()
    {
        LoadPetsAndMiniGames();


        
        GameObject canvas = GameObject.Find("Canvas");
        if (canvas != null)
        {
            if (canvas.transform.Find("LoadingPetHolder") != null)
            {
                Transform loadingHolder = canvas.transform.Find("LoadingPetHolder").GetChild(0);
                if (loadingHolder != null)
                    if (loadingHolder.GetComponent<Animator>() != null)
                        loadingHolder.GetComponent<Animator>().Play("LoadingDepart");
            }
        }
        

    }


    public void SelectPetAndLoadMiniGame(GameObject petHolder)
    {
        if (petHolder.name == firstPetHolder.name)
        {
            PlayerPrefs.SetInt("PetOnSelectScene", 1);
            PlayerPrefs.Save();

            shanemccollum.claudettephipps = alineromero;
            showInterstitial = false;

            LoadSceneWithTransition(data.bettyemedina[helgawaite]);
        }

        if (petHolder.name == secondPetHolder.name)
        {
            PlayerPrefs.SetInt("PetOnSelectScene", 2);
            PlayerPrefs.Save();

            shanemccollum.claudettephipps = jamisalazar;

            showInterstitial = false;
            LoadSceneWithTransition(data.bettyemedina[herminianielsen]);
        }

        if (petHolder.name == ceceliastacy.name)
        {
            PlayerPrefs.SetInt("PetOnSelectScene", 3);
            PlayerPrefs.Save();


            showInterstitial = false;
            shanemccollum.claudettephipps = letayang;
            LoadSceneWithTransition(data.bettyemedina[cleogood]);
        }

    }

    public void LoadPetsAndMiniGames()
    {
        GameObject first, second, third;

        first = Instantiate(data.selectScreenPetsData.pets[alineromero]);
        first.transform.position = firstPetHolder.transform.position;
        first.transform.SetParent(firstPetHolder.transform, false);
        firstPetIcon.GetComponent<Image>().sprite = data.iconsOfMiniGames[helgawaite];



        second = Instantiate(data.selectScreenPetsData.pets[jamisalazar]);
        second.transform.position = secondPetHolder.transform.position;
        second.transform.SetParent(secondPetHolder.transform, false);
        secondPetIcon.GetComponent<Image>().sprite = data.iconsOfMiniGames[herminianielsen];



        third = Instantiate(data.selectScreenPetsData.pets[letayang]);
        third.transform.position = ceceliastacy.transform.position;
        third.transform.SetParent(ceceliastacy.transform, false);
        shellycrain.GetComponent<Image>().sprite = data.iconsOfMiniGames[cleogood];

        PlayCorrectAnimation(first);
        PlayCorrectAnimation(second);
        PlayCorrectAnimation(third);

    }

    public void LoadHome()
    {
        showInterstitial = true;
        LoadSceneWithTransition("HomeScene");
    }
    void PlayCorrectAnimation(GameObject obj)
    {
        if (obj.name.Contains("Bunny"))
        {
            obj.GetComponent<Animator>().Play("BunnyIdle3Screen");
        }
        else if (obj.name.Contains("Cat"))
        {
            obj.GetComponent<Animator>().Play("CatIdle3Screen");
        }
        else if (obj.name.Contains("Monkey"))
        {
            obj.GetComponent<Animator>().Play("MonkeyIdle3Screen");
        }
        else if (obj.name.Contains("Dog"))
        {
            obj.GetComponent<Animator>().Play("DogIdle3Screen");
        }


    }



    public void LoadSceneWithTransition(string scene)
    {
        StartCoroutine(LoadSceneWithTransitionCoroutine(scene));
    }
    IEnumerator LoadSceneWithTransitionCoroutine(string scene)
    {
        GameObject loading = GameObject.Find("Canvas").transform.Find("LoadingPetHolder").gameObject;
        loading.SetActive(true);
        loading.transform.GetChild(0).GetComponent<Animator>().Play("LoadingArrive");
        yield return new WaitForSeconds(.5f);
      
        rodolfosanchez.Instance.ShowInterstitial();

        yield return new WaitForSeconds(.3f);
        SceneManager.LoadScene(scene);
    }
}
