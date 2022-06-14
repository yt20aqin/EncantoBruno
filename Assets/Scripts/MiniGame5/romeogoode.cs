using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;











public class romeogoode : MonoBehaviour
{
    public static romeogoode Instance;
    void Awake()
    {
        Instance = this;
    }

    public roryfonseca miniGamePetsData;

    [Header("Starting phase")]
    public MiniGame5Phases currentPhase;

    public GameObject beverlycurtis;

    #region Phase1Vars

    #endregion

    #region Phase2Vars

    #endregion

    #region Phase3Vars

    #endregion

    #region Phase4Vars
    public int joannecarranza;

    int sallydoyle;
    #endregion

    #region Phase5Vars

    #endregion
    GameObject canvas;
    Transform itemPosition;
    Transform itemOfScreenPosition;
    GameObject milkItem, cerealItem, spoon, napkin;
    GameObject cleanWithNapkin;
    Coroutine coroutine;
    ParticleSystem miniGameFinishedPS;

    int interstitialID = -1;

    IEnumerator Start()
    {
        canvas = GameObject.Find("Canvas");

        miniGameFinishedPS = canvas.transform.Find("SuccessParticle").GetComponent<ParticleSystem>();

        
        canvas.transform.Find("LoadingPetHolder").GetChild(0).GetComponent<Animator>().Play("LoadingDepart");

        

        GameObject pet = GameObject.Instantiate(miniGamePetsData.pets[lanepitts.diannabaird]);
        pet.transform.SetParent(canvas.transform.Find("CharacterHolder"), false);
        pet.transform.SetAsFirstSibling();
        pet.GetComponent<Animator>().Play("BabyWaitEatAnimation");

        

        beverlycurtis = canvas.transform.Find("Menus/ProgressBarHolder/chelseylayton").gameObject;
        itemPosition = canvas.transform.Find("ItemPoint");
        itemOfScreenPosition = canvas.transform.Find("PointOutOfScene");
        milkItem = canvas.transform.Find("FG/Milk").gameObject;
        cerealItem = canvas.transform.Find("FG/Cereal").gameObject;
        spoon = canvas.transform.Find("FG/SpoonHolder").gameObject;
        napkin = canvas.transform.Find("FG/TissueHolder").gameObject;
        cleanWithNapkin = canvas.transform.Find("CharacterHolder").GetChild(0).Find("Head/CleanWithTissue").gameObject;
        yield return new WaitForSeconds(2f);
        LoadCurrentPhase();
    }

    IEnumerator FillProgressBar(float amount)
    {
        for (int i = 0; i < 50; i++)
        {
            beverlycurtis.GetComponent<Image>().fillAmount += amount / 50f;
            yield return new WaitForSeconds(0.015f);
        }
    }

    void ShowItemOnScreen(GameObject item)
    {
        StartCoroutine(LerpToPos(item, itemPosition.position));
    }

    void RemoveItemFromScreen(GameObject item)
    {
        StartCoroutine(LerpToPos(item, itemOfScreenPosition.position));
    }

    IEnumerator LerpToPos(GameObject item, Vector3 pos)
    {
        Vector3 prevPos = item.transform.position;
        float pom = 0;
        while (pom <= 1)
        {
            pom += Time.fixedDeltaTime;
            item.transform.position = Vector3.Lerp(prevPos, pos, pom);
            yield return new WaitForEndOfFrame();
        }

    }

    public void FillProgressBarWithAmount(float amount)
    {
        StartCoroutine(FillProgressBar(amount));
    }

    public void LoadCurrentPhase()
    {
        switch (currentPhase)
        {
            case MiniGame5Phases.MilkPhase:
                martinwalsh.Instance.NextAnimation("Tut1MG5", 1.5f);
                ShowItemOnScreen(milkItem);
                break;

            case MiniGame5Phases.OatMealPhase:
                martinwalsh.Instance.NextAnimation("Tut2MG5", 1.2f);
                ShowItemOnScreen(cerealItem);
                break;

            case MiniGame5Phases.SpoonMixPhase:
                ShowItemOnScreen(spoon);
                martinwalsh.Instance.NextAnimation("Tut3MG5", 0.7f);
                break;

            case MiniGame5Phases.SpoonFeedPhase:
                martinwalsh.Instance.NextAnimation("Tut4MG5", 0.7f);

                ernestclifford.rosalyncartwright = true;

                break;

            case MiniGame5Phases.NapkinPhase:
                martinwalsh.Instance.NextAnimation("Tut5MG5", 1f);
                canvas.transform.Find("SpoonHolder").GetComponent<errolgeiger>().enabled = false;
                RemoveItemFromScreen(canvas.transform.Find("SpoonHolder").gameObject);


                ShowItemOnScreen(napkin);

                break;

            default:
                break;
        }
    }

    public void NextPhase()
    {
        FillProgressBarWithAmount(.2f);
        switch (currentPhase)
        {
            case MiniGame5Phases.MilkPhase:
                currentPhase = MiniGame5Phases.OatMealPhase;
                LoadCurrentPhaseWithDelay(1.2f);
                break;

            case MiniGame5Phases.OatMealPhase:
                currentPhase = MiniGame5Phases.SpoonMixPhase;
                LoadCurrentPhaseWithDelay(1.2f);
                break;

            case MiniGame5Phases.SpoonMixPhase:
                currentPhase = MiniGame5Phases.SpoonFeedPhase;
                LoadCurrentPhaseWithDelay(1.2f);
                break;

            case MiniGame5Phases.SpoonFeedPhase:
                currentPhase = MiniGame5Phases.NapkinPhase;
                LoadCurrentPhase();
                break;

            case MiniGame5Phases.NapkinPhase:
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
    public void LoadCurrentPhaseWithDelay(float delay)
    {
        StartCoroutine(LoadCurrentPhaseDelay(delay));
    }
    IEnumerator LoadCurrentPhaseDelay(float delay)
    {
        yield return new WaitForSeconds(delay);
        LoadCurrentPhase();
    }

    #region Phase1
    public void MilkPoured()
    {
        GameObject canvas = GameObject.Find("Canvas");
        canvas.transform.Find("FG/DishHolder").GetComponent<Animator>().Play("MilkAppear");
        NextPhase();
    }
    #endregion

    #region Phase2
    public void OatMealPoured()
    {
        GameObject canvas = GameObject.Find("Canvas");
        canvas.transform.Find("FG/DishHolder").GetComponent<Animator>().Play("CerealAppear");

        NextPhase();
    }
    #endregion

    #region Phase3
    public void SpoonMixFinished()
    {
        GameObject canvas = GameObject.Find("Canvas");
        canvas.transform.Find("SpoonHolder").GetComponent<errolgeiger>().OnEndDrag(null);
        canvas.transform.Find("FG/DishHolder").GetComponent<Animator>().Play("Default");
        canvas.transform.Find("FG/DishHolder/Dish/DishFood4").gameObject.SetActive(false);
        canvas.transform.Find("FG/DishHolder/Dish/DishFood1").gameObject.SetActive(false);
        canvas.transform.Find("FG/DishHolder/Dish/DishFood2").gameObject.SetActive(false);
        canvas.transform.Find("FG/DishHolder/Dish/DishFood3").gameObject.SetActive(false);
        canvas.transform.Find("FG/DishHolder/Dish/DishFood5").gameObject.SetActive(true);

        Debug.Log("SPOONMIX FINISHED");
        NextPhase();
    }
    #endregion

    #region Phase4
    public void Feeded()
    {
        sallydoyle++;
        Color c = new Color(1, 1, 1, 1);
        c.a = (float)sallydoyle / (float)joannecarranza;
        cleanWithNapkin.GetComponent<Image>().color = c;
        if (sallydoyle >= joannecarranza)
        {
            canvas.transform.Find("FG/DishHolder").GetComponent<BoxCollider2D>().enabled = false;
            ernestclifford.rosalyncartwright = false;
            NextPhase();
        }
    }
    #endregion

    #region Phase5
    public void NapkinUsed()
    {
        cleanWithNapkin.gameObject.SetActive(false);
        NextPhase();
    }
    #endregion


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

public enum MiniGame5Phases
{
    MilkPhase = 0,
    OatMealPhase = 1,
    SpoonMixPhase = 2,
    SpoonFeedPhase = 3,
    NapkinPhase = 4
}
