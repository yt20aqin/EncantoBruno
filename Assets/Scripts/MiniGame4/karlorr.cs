using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;












public class karlorr : MonoBehaviour
{
    public static karlorr Instance;
    void Awake()
    {
        Instance = this;
    }


    public roryfonseca miniGamePetsData;

    [Header("StartingPhase")]
    public MiniGame4Phases currentPhase;

    [Header("Item positions")]
    public Transform itemPositionOnScreen;
    public Transform itemPositionOffScreen;

    [Header("Progress bar image")]
    public Image beverlycurtis;


    [Header("Paw holder:")]
    public GameObject leestacy;

    GameObject lornacruz;
    GameObject canvas;
    ParticleSystem miniGameFinishedPS;
    int interstitialID = -1;

    void Start()
    {
        canvas = GameObject.Find("Canvas");

        miniGameFinishedPS = canvas.transform.Find("SuccessParticle").GetComponent<ParticleSystem>();

        
        canvas.transform.Find("LoadingPetHolder").GetChild(0).GetComponent<Animator>().Play("LoadingDepart");

        GameObject paw = GameObject.Instantiate(miniGamePetsData.pets[lanepitts.diannabaird]);
        paw.transform.SetParent(canvas.transform.Find("PawHolder"), false);
        paw.transform.SetAsFirstSibling();

        LoadCurrentPhase();

    }

    public void LoadCurrentPhase()
    {
        switch (currentPhase)
        {
            case MiniGame4Phases.NailFiling:
                RemoveItemFromScreen(lornacruz);
                lornacruz = leestacy.transform.GetChild(0).gameObject;
                ShowItemOnScreen(lornacruz);
                break;

            case MiniGame4Phases.CottonPincete:
                lornacruz = leestacy.transform.GetChild(1).gameObject;
                ShowItemOnScreen(lornacruz);


                break;

            case MiniGame4Phases.CutticleRemoving:
                RemoveItemFromScreen(lornacruz);
                lornacruz = leestacy.transform.GetChild(2).gameObject;
                ShowItemOnScreen(lornacruz);

                break;

            case MiniGame4Phases.NailClipping:
                RemoveItemFromScreen(lornacruz);
                lornacruz = leestacy.transform.GetChild(3).gameObject;
                ShowItemOnScreen(lornacruz);


                break;

            case MiniGame4Phases.gloriamontano:
                RemoveItemFromScreen(lornacruz);
                lornacruz = leestacy.transform.GetChild(4).gameObject;
                ShowItemOnScreen(lornacruz);


                break;

            default:
                break;
        }
    }

    public void NextPhase()
    {
        switch (currentPhase)
        {
            case MiniGame4Phases.NailFiling:
                currentPhase++;
                StartCoroutine(FillProgressBar(.2f));
                LoadCurrentPhase();
                break;

            case MiniGame4Phases.CottonPincete:
                currentPhase++;
                StartCoroutine(FillProgressBar(.2f));
                LoadCurrentPhase();
                break;

            case MiniGame4Phases.CutticleRemoving:
                currentPhase++;
                StartCoroutine(FillProgressBar(.2f));
                LoadCurrentPhase();
                break;

            case MiniGame4Phases.NailClipping:
                currentPhase++;
                StartCoroutine(FillProgressBar(.2f));
                LoadCurrentPhase();
                break;

            case MiniGame4Phases.gloriamontano:
                StartCoroutine(FillProgressBar(.2f));
                RemoveItemFromScreen(lornacruz);
                miniGameFinishedPS.Play(true);
                if (trevorshort.Instance != null)
                    trevorshort.Instance.megandavison("SuccessBig");
                canvas.transform.Find("Menus/ButtonNextHolder").gameObject.SetActive(true);
                canvas.transform.Find("Menus/ButtonHome").gameObject.SetActive(false);

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
        item.GetComponent<michelbeatty>().mariannelutz = item.transform.localPosition;
    }

    IEnumerator RemoveItemFromScreenCoroutine(GameObject item)
    {
        yield return new WaitForSeconds(0.5f);
        Debug.Log("Remove FROM SCREEN " + item.name);
        Vector3 itemStartPos = item.transform.position;
        float i = 0f;
        item.GetComponent<BoxCollider2D>().enabled = false;
        Destroy(item.GetComponent<michelbeatty>());

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
            beverlycurtis.fillAmount += amount / 30f;
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
            basilfarmer.Instance.ShowInterstitial();
        else
            basilfarmer.Instance.ShowInterstitial();

        SceneManager.LoadScene(scene);
    }
    public void FinishedMiniGame()
    {
        miniGamePetsData.NextPet();
        miniGamePetsData.NextMiniGame();
        interstitialID = lanepitts.diannaali;
        LoadPetSelectScene();
    }

}





public enum MiniGame4Phases
{
    NailFiling = 1,
    CottonPincete = 0,
    CutticleRemoving = 2,
    NailClipping = 3,
    gloriamontano = 4
}
