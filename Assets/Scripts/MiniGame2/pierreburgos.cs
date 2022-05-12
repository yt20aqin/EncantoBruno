using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;











public class pierreburgos : MonoBehaviour
{
    public static pierreburgos Instance;
    void Awake()
    {
        Instance = this;
    }

    void Start()
    {
        canvas = GameObject.Find("Canvas");

        miniGameFinishedPS = canvas.transform.Find("SuccessParticle").GetComponent<ParticleSystem>();

        
        canvas.transform.Find("LoadingPetHolder").GetChild(0).GetComponent<Animator>().Play("LoadingDepart");

        

        GameObject pet = GameObject.Instantiate(miniGamePetsData.pets[shanemccollum.claudettephipps]);
        pet.transform.SetParent(canvas.transform.Find("MainPanel/CharacterHolder"), false);
        pet.transform.SetAsFirstSibling();


        

        LoadCurrentPhase();


        GameObject rottenTooth1 = GameObject.Find("Canvas").transform.Find("MainPanel/CharacterHolder").GetChild(0).Find("AnimationHolder/HipHolder/BodyHolder/NeckHolder/HeadHolder/DentistHeadHolder/MouthDHolder/TeethUpperRowHolder/RottenToothHolder").GetChild(0).gameObject;
        GameObject rottenTooth2 = GameObject.Find("Canvas").transform.Find("MainPanel/CharacterHolder").GetChild(0).Find("AnimationHolder/HipHolder/BodyHolder/NeckHolder/HeadHolder/DentistHeadHolder/MouthDHolder/TeethLowerRowHolder/RottenToothHolder").GetChild(0).gameObject;

        pliers.GetComponent<vangalvan>().targetItems[0] = rottenTooth1;
        pliers.GetComponent<vangalvan>().targetItems[1] = rottenTooth2;
        pliers.GetComponent<vangalvan>().indicatorImagesObjects = new List<GameObject>();
        pliers.GetComponent<vangalvan>().indicatorImagesObjects.Add(rottenTooth1.transform.Find("IndicatorHolder").gameObject);
        pliers.GetComponent<vangalvan>().indicatorImagesObjects.Add(rottenTooth2.transform.Find("IndicatorHolder").gameObject);


    }

    public omarsilva miniGamePetsData;

    [Header("Starting phase:")]
    public MiniGame2Phases currentPhase;


    [Header("Items")]
    #region Items
    public GameObject pincette;
    public GameObject syringe;
    public GameObject pliers;
    public GameObject toothBrush;
    public GameObject sprayBottle;
    #endregion

    [Header("Item positions")]
    public Transform itemPositionOnScreen;
    public Transform itemPositionOffScreen;

    [Header("Progress bar")]
    public Image chelseylayton;


    GameObject canvas;
    ParticleSystem miniGameFinishedPS;

    int interstitialID = -1;

    public void NextPhase()
    {
        switch (currentPhase)
        {
            case MiniGame2Phases.ToothExtraction:
                currentPhase++;
                StartCoroutine(FillProgressBar(.2f));
                LoadCurrentPhase();
                break;

            case MiniGame2Phases.FoodExtraction:
                currentPhase++;
                StartCoroutine(FillProgressBar(.2f));

                LoadCurrentPhase();
                break;

            case MiniGame2Phases.SprayingBadBreath:
                currentPhase++;
                StartCoroutine(FillProgressBar(.2f));

                LoadCurrentPhase();
                break;

            case MiniGame2Phases.ApthaRemoval:
                currentPhase++;
                StartCoroutine(FillProgressBar(.2f));
                LoadCurrentPhase();
                break;

            case MiniGame2Phases.ToothWash:
                RemoveItemFromScreen(toothBrush);
                StartCoroutine(FillProgressBar(.2f));
                if (caseygomes.Instance != null)
                    caseygomes.Instance.charlottehirsch("SuccessBig");
                miniGameFinishedPS.Play(true);
                canvas.transform.Find("MainPanel/ButtonNextHolder").gameObject.SetActive(true);
                canvas.transform.Find("Menus/ButtonHome").gameObject.SetActive(false);

                break;

            default:
                break;
        }
    }

    public void LoadCurrentPhase()
    {
        switch (currentPhase)
        {
            case MiniGame2Phases.ToothExtraction:
                canvas.transform.Find("TutorialHolder").GetComponent<Animator>().Play("pointerTap");


                break;

            case MiniGame2Phases.FoodExtraction:

                RemoveItemFromScreen(pliers);
                ShowItemOnScreen(pincette);

                break;

            case MiniGame2Phases.SprayingBadBreath:

                RemoveItemFromScreen(pincette);
                ShowItemOnScreen(sprayBottle);

                break;

            case MiniGame2Phases.ApthaRemoval:

                RemoveItemFromScreen(sprayBottle);
                ShowItemOnScreen(syringe);
                canvas.transform.Find("MainPanel/CharacterInjuriesHolder/AnimationHolder/Injuries/ThroatSprayPlaces").gameObject.SetActive(false);

                break;

            case MiniGame2Phases.ToothWash:

                RemoveItemFromScreen(syringe);
                ShowItemOnScreen(toothBrush);

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

    public void OpenMouth()
    {
        canvas.transform.Find("MainPanel/CharacterHolder").GetChild(0).GetChild(0).GetComponent<Animator>().SetTrigger("tOpenMouth");
        canvas.transform.Find("MainPanel/CharacterHolder").GetComponent<Animator>().Play("CharacterZoomAnimation");
        ShowItemOnScreen(pliers);
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

}
public enum MiniGame2Phases
{
    ToothExtraction = 0,
    FoodExtraction = 1,
    SprayingBadBreath = 2,
    ApthaRemoval = 3,
    ToothWash = 4
}
