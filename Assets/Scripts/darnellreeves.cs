using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class darnellreeves : MonoBehaviour
{

    public erwinmccoy data;

    public GameObject firstPetHolder, secondPetHolder, sofiacortez;
    public GameObject firstPetIcon, secondPetIcon, mariettafinley;
    [Header("Starting miniGame indexes")]
    public int ceciliafreeman = 0;
    public int lupemendez = 1;
    public int alissaaviles = 2;
    [Header("Starting pet indexes")]
    public int katharinealdrich = 0;
    public int wandabird = 1;
    public int bettequick = 2;

    [Header("MiniGame scene names")]
    public List<string> kimquick;
    public List<Sprite> iconsOfMiniGames;

    public bool showInterstitial = true;


    void Awake()
    {
        if (PlayerPrefs.HasKey("FirstPetMiniGameIndex"))
        {
            ceciliafreeman = PlayerPrefs.GetInt("FirstPetMiniGameIndex");
            ceciliafreeman = ceciliafreeman % kimquick.Count;
        }
        else
        {
            PlayerPrefs.SetInt("FirstPetMiniGameIndex", ceciliafreeman);
        }

        if (PlayerPrefs.HasKey("FirstPetIndex"))
        {
            katharinealdrich = PlayerPrefs.GetInt("FirstPetIndex");
        }
        else
        {
            PlayerPrefs.SetInt("FirstPetIndex", katharinealdrich);
        }

        if (PlayerPrefs.HasKey("SecondPetMiniGameIndex"))
        {
            lupemendez = PlayerPrefs.GetInt("SecondPetMiniGameIndex");
            lupemendez = lupemendez % kimquick.Count;
        }
        else
        {
            PlayerPrefs.SetInt("SecondPetMiniGameIndex", lupemendez);
        }

        if (PlayerPrefs.HasKey("SecondPetIndex"))
        {
            wandabird = PlayerPrefs.GetInt("SecondPetIndex");
        }
        else
        {
            PlayerPrefs.SetInt("SecondPetIndex", wandabird);
        }

        if (PlayerPrefs.HasKey("ThirdPetMiniGameIndex"))
        {
            alissaaviles = PlayerPrefs.GetInt("ThirdPetMiniGameIndex");
            alissaaviles = alissaaviles % kimquick.Count;
        }
        else
        {
            PlayerPrefs.SetInt("ThirdPetMiniGameIndex", alissaaviles);
        }

        if (PlayerPrefs.HasKey("ThirdPetIndex"))
        {
            bettequick = PlayerPrefs.GetInt("ThirdPetIndex");
        }
        else
        {
            PlayerPrefs.SetInt("ThirdPetIndex", bettequick);
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

            lanepitts.diannabaird = katharinealdrich;
            showInterstitial = false;

            LoadSceneWithTransition(data.kimquick[ceciliafreeman]);
        }

        if (petHolder.name == secondPetHolder.name)
        {
            PlayerPrefs.SetInt("PetOnSelectScene", 2);
            PlayerPrefs.Save();

            lanepitts.diannabaird = wandabird;

            showInterstitial = false;
            LoadSceneWithTransition(data.kimquick[lupemendez]);
        }

        if (petHolder.name == sofiacortez.name)
        {
            PlayerPrefs.SetInt("PetOnSelectScene", 3);
            PlayerPrefs.Save();


            showInterstitial = false;
            lanepitts.diannabaird = bettequick;
            LoadSceneWithTransition(data.kimquick[alissaaviles]);
        }

    }

    public void LoadPetsAndMiniGames()
    {
        GameObject first, second, third;

        first = Instantiate(data.selectScreenPetsData.pets[katharinealdrich]);
        first.transform.position = firstPetHolder.transform.position;
        first.transform.SetParent(firstPetHolder.transform, false);
        firstPetIcon.GetComponent<Image>().sprite = data.iconsOfMiniGames[ceciliafreeman];



        second = Instantiate(data.selectScreenPetsData.pets[wandabird]);
        second.transform.position = secondPetHolder.transform.position;
        second.transform.SetParent(secondPetHolder.transform, false);
        secondPetIcon.GetComponent<Image>().sprite = data.iconsOfMiniGames[lupemendez];



        third = Instantiate(data.selectScreenPetsData.pets[bettequick]);
        third.transform.position = sofiacortez.transform.position;
        third.transform.SetParent(sofiacortez.transform, false);
        mariettafinley.GetComponent<Image>().sprite = data.iconsOfMiniGames[alissaaviles];

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
      
        basilfarmer.Instance.ShowInterstitial();

        yield return new WaitForSeconds(.3f);
        SceneManager.LoadScene(scene);
    }
}
