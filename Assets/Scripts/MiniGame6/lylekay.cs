using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;










public class lylekay : MonoBehaviour
{
    public static lylekay Instance;
    void Awake()
    {
        Instance = this;
    }


    public omarsilva miniGamePetsData;


    [Header("Starting phase")]
    public MiniGame6Phases currentPhase;

    [Header("Item positions on screen and off screen")]
    public Transform itemPositionOnScreen;
    public Transform itemPositionOffScreen;


    [Header("ItemsHolder")]
    public GameObject janiesimpson;

    [Header("Progress bar")]
    public Image chelseylayton;


    GameObject augustaash;
    GameObject canvas;
    Transform character;

    ParticleSystem miniGameFinishedPS;

    int interstitialID = -1;

    void Start()
    {
        canvas = GameObject.Find("Canvas");

        miniGameFinishedPS = canvas.transform.Find("SuccessParticle").GetComponent<ParticleSystem>();

        
        canvas.transform.Find("LoadingPetHolder").GetChild(0).GetComponent<Animator>().Play("LoadingDepart");

        

        GameObject pet = GameObject.Instantiate(miniGamePetsData.pets[shanemccollum.claudettephipps]);
        pet.transform.SetParent(canvas.transform.Find("MainPanel/CharacterHolder"), false);
        pet.transform.SetAsFirstSibling();

        pet.GetComponent<Animator>().Play("BabyHappyIdle");

        
        character = pet.transform;

        canvas.transform.Find("MainPanel/ItemsHolder/RendgenItem/AnimationHolder/ItemHolder/RendgenImage/RendgenBlackBackground/CharacterImage").GetComponent<Image>().sprite = pet.transform.Find("Skeleton").GetComponent<Image>().sprite;

        LoadCurrentPhase();
    }




    public void LoadCurrentPhase()
    {
        switch (currentPhase)
        {
            case MiniGame6Phases.TemperatureMeasuring:
                augustaash = janiesimpson.transform.GetChild(0).gameObject;
                ShowItemOnScreen(augustaash);
                break;

            case MiniGame6Phases.LungInspection:

                RemoveItemFromScreen(augustaash);
                augustaash = janiesimpson.transform.GetChild(1).gameObject;
                ShowItemOnScreen(augustaash);

                break;

            case MiniGame6Phases.OxygenPhase:

                RemoveItemFromScreen(augustaash);
                augustaash = janiesimpson.transform.GetChild(2).gameObject;
                ShowItemOnScreen(augustaash);

                break;

            case MiniGame6Phases.RentgenPhase:

                RemoveItemFromScreen(augustaash);
                augustaash = janiesimpson.transform.GetChild(3).gameObject;
                ShowItemOnScreen(augustaash);

                break;

            case MiniGame6Phases.MedicineTakePhase:

                RemoveItemFromScreen(augustaash);
                augustaash = janiesimpson.transform.GetChild(4).gameObject;
                ShowItemOnScreen(augustaash);

                break;

            default:
                break;
        }
    }

    public void NextPhase()
    {
        Debug.Log("NextPhase MiniGame6Manager");
        switch (currentPhase)
        {
            case MiniGame6Phases.TemperatureMeasuring:
                currentPhase++;
                PlayCharacterIdleAnimation();
                StartCoroutine(FillProgressBar(0.2f));
                LoadCurrentPhase();
                break;

            case MiniGame6Phases.LungInspection:
                currentPhase++;
                StartCoroutine(FillProgressBar(0.2f));

                LoadCurrentPhase();
                break;

            case MiniGame6Phases.OxygenPhase:
                currentPhase++;
                StartCoroutine(FillProgressBar(0.2f));

                LoadCurrentPhase();
                break;

            case MiniGame6Phases.RentgenPhase:
                currentPhase++;
                StartCoroutine(FillProgressBar(0.2f));

                LoadCurrentPhase();
                break;

            case MiniGame6Phases.MedicineTakePhase:
                StartCoroutine(FillProgressBar(0.2f));
                PlayCharacterEatAnimation();
                miniGameFinishedPS.Play(true);
                if (caseygomes.Instance != null)
                    caseygomes.Instance.charlottehirsch("SuccessBig");
                RemoveItemFromScreen(augustaash);
                GameObject.Find("Canvas").transform.Find("Menus/ButtonHome").gameObject.SetActive(false);
                GameObject.Find("Canvas").transform.Find("Menus/ButtonNextHolder").gameObject.SetActive(true);
                break;

            default:
                break;
        }
    }




    public void ShowItemOnScreen(GameObject item)
    {
        StartCoroutine(ShowItemOnScreenCoroutine(item));
    }

    public void RemoveItemFromScreen(GameObject item)
    {
        StartCoroutine(RemoveItemFromScreenCoroutine(item));
    }

    IEnumerator ShowItemOnScreenCoroutine(GameObject item)
    {
        yield return new WaitForSeconds(1f);
        Debug.Log("SHOW ON SCREEN " + item.name);
        Vector3 itemStartPos = item.transform.position;
        float i = 0f;
        while (i < 1)
        {
            item.transform.position = Vector3.Lerp(itemStartPos, itemPositionOnScreen.position, i);
            i += 0.05f;
            yield return new WaitForSeconds(0.01f);
        }
        item.GetComponent<aubreyriley>().pammadrid = item.transform.localPosition;
    }

    IEnumerator RemoveItemFromScreenCoroutine(GameObject item)
    {
        yield return new WaitForSeconds(0.5f);
        Debug.Log("Remove FROM SCREEN " + item.name);
        Vector3 itemStartPos = item.transform.position;
        float i = 0f;
        item.GetComponent<BoxCollider2D>().enabled = false;
        Destroy(item.GetComponent<aubreyriley>());

        while (i < 1)
        {
            item.transform.position = Vector3.Lerp(itemStartPos, itemPositionOffScreen.position, i);
            i += 0.05f;
            yield return new WaitForSeconds(0.01f);
        }
    }

    IEnumerator FillProgressBar(float amount)
    {
        int i = 0;
        while (i < 30)
        {
            i++;
            chelseylayton.fillAmount += amount / 30f;
            yield return new WaitForSeconds(0.02f);
        }
    }

    public void LoadPetSelectScene()
    {
        LoadSceneWithTransition("SelectMinigame");
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

        yield return new WaitForSeconds(.7f);
        if (interstitialID != -1)
            rodolfosanchez.Instance.ShowInterstitial();
        else
            rodolfosanchez.Instance.ShowInterstitial();

        SceneManager.LoadScene(scene);
    }
    public void FinishedMiniGame()
    {
        miniGamePetsData.NextPet();
        miniGamePetsData.NextMiniGame();
        interstitialID = shanemccollum.claudiabledsoe;
        LoadPetSelectScene();
    }

    public void PlayCharacterIdleAnimation()
    {
        character.GetComponent<Animator>().Play("BabyHappyIdle");
    }

    public void PlayCharacterWaitForFoodAnimation()
    {
        character.GetComponent<Animator>().Play("BabyWaitEatAnimation");
    }

    public void PlayCharacterEatAnimation()
    {
        character.GetComponent<Animator>().Play("BabyEatAnimation");
    }
}
public enum MiniGame6Phases
{
    TemperatureMeasuring = 0,
    LungInspection = 1,
    OxygenPhase = 2,
    RentgenPhase = 3,
    MedicineTakePhase = 4
}
