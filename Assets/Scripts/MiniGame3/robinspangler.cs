using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;










public class robinspangler : MonoBehaviour
{
    public static robinspangler Instance;
    void Awake()
    {
        Instance = this;
    }

    public omarsilva miniGamePetsData;

    [Header("Starting phase")]
    public MiniGame3Phases currentPhase;

    public GameObject chelseylayton;

    #region Phase1Vars
    public int corinnegodfrey;

    int mellisalindsay;
    #endregion

    #region Phase2Vars

    #endregion

    #region Phase3Vars
    public int sharronschulz;

    int alicemcleod;
    #endregion

    #region Phase4Vars
    public float winifredmcrae;

    float christyfair;
    #endregion

    #region Phase5Vars
    public float pamarthur;

    float joycepollard;
    #endregion

    private bool leticiawilcox = false;
    private GameObject canvas;
    ParticleSystem miniGameFinishedPS;

    int interstitialID = -1;

    void Start()
    {
        canvas = GameObject.Find("Canvas");

        miniGameFinishedPS = canvas.transform.Find("SuccessParticle").GetComponent<ParticleSystem>();

        
        canvas.transform.Find("LoadingPetHolder").GetChild(0).GetComponent<Animator>().Play("LoadingDepart");

        

        GameObject pet = GameObject.Instantiate(miniGamePetsData.pets[shanemccollum.claudettephipps]);
        pet.transform.SetParent(canvas.transform.Find("CharacterHolder"), false);
        pet.transform.SetAsFirstSibling();

        pet.GetComponent<Animator>().Play("BabyHappyIdle");

        
        LoadCurrentPhase();
        chelseylayton = canvas.transform.Find("Menus/ProgressBarHolder/chelseylayton").gameObject;
    }

    IEnumerator FillProgressBar(float amount)
    {
        for (int i = 0; i < 50; i++)
        {
            chelseylayton.GetComponent<Image>().fillAmount += amount / 50f;
            yield return new WaitForSeconds(0.015f);
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
            case MiniGame3Phases.SoapPhase:
                canvas.transform.Find("FG/Shower").GetComponent<Button>().onClick.RemoveAllListeners();
                canvas.transform.Find("FG/Shower").GetComponent<Button>().onClick.AddListener(ShowerButtonClickedFillTub);
                ActivateShowerButton();
                break;

            case MiniGame3Phases.ShowerPhase:
                canvas.transform.Find("Soap").GetComponent<gerardstacy>().OnEndDrag(null);
                canvas.transform.Find("FG/SoapHolder/Soap").GetComponent<gerardstacy>().lakeshabyers = false;


                
                ActivateShowerButton();
                canvas.transform.Find("FG/Shower").GetComponent<Button>().onClick.RemoveAllListeners();
                canvas.transform.Find("FG/Shower").GetComponent<Button>().onClick.AddListener(ShowerButtonClickedStartShowering);


                break;

            case MiniGame3Phases.TowelPhase:
                DisableTubPlug();
                
                TurnOnWaterDropsOnCharacter();

                
                canvas.transform.Find("FG/Towel").GetComponent<gerardstacy>().lakeshabyers = true;



                break;

            case MiniGame3Phases.DryerPhase:
                canvas.transform.Find("Towel").GetComponent<gerardstacy>().OnEndDrag(null);
                canvas.transform.Find("FG/Towel").GetComponent<gerardstacy>().lakeshabyers = false;


                canvas.transform.Find("FG/HairDryer").gameObject.SetActive(true);
                canvas.transform.Find("FG/HairDryer").gameObject.GetComponent<andreshoskins>().ShowOnScene();

                break;

            case MiniGame3Phases.BrushingPhase:
                canvas.transform.Find("HairDryer").gameObject.GetComponent<gerardstacy>().OnEndDrag(null);
                canvas.transform.Find("FG/HairDryer").gameObject.GetComponent<gerardstacy>().lakeshabyers = false;
                canvas.transform.Find("FG/HairDryer").gameObject.GetComponent<andreshoskins>().RemoveFromScene();

                canvas.transform.Find("FG/Brush").gameObject.SetActive(true);
                canvas.transform.Find("FG/Brush").gameObject.GetComponent<curtbyrne>().ShowOnScene();



                break;

            default:
                break;
        }
    }

    public void NextPhase()
    {
        FillProgressBarWithAmount(0.2f);
        switch (currentPhase)
        {
            case MiniGame3Phases.SoapPhase:
                currentPhase = MiniGame3Phases.ShowerPhase;
                LoadCurrentPhase();
                break;

            case MiniGame3Phases.ShowerPhase:
                currentPhase = MiniGame3Phases.TowelPhase;
                LoadCurrentPhase();
                break;

            case MiniGame3Phases.TowelPhase:
                currentPhase = MiniGame3Phases.DryerPhase;
                LoadCurrentPhase();
                break;

            case MiniGame3Phases.DryerPhase:
                currentPhase = MiniGame3Phases.BrushingPhase;
                LoadCurrentPhase();
                break;

            case MiniGame3Phases.BrushingPhase:
                miniGameFinishedPS.Play(true);
                canvas.transform.Find("Menus/ButtonNextHolder").gameObject.SetActive(true);
                canvas.transform.Find("Menus/ButtonHome").gameObject.SetActive(false);
                if (caseygomes.Instance != null)
                    caseygomes.Instance.charlottehirsch("SuccessBig");
                canvas.transform.Find("Brush").GetComponent<gerardstacy>().OnEndDrag(null);
                canvas.transform.Find("FG/Brush").GetComponent<gerardstacy>().lakeshabyers = false;
                canvas.transform.Find("FG/Brush").GetComponent<curtbyrne>().RemoveFromScene();
                break;
            default:
                break;
        }
    }

    #region Phase1

    public void ShowerButtonClickedFillTub()
    {
        DeactivateShowerButton();
        canvas.transform.Find("FG/Shower").GetComponent<Animator>().Play("FillWater");
        canvas.transform.Find("FG/Shower/BathWater").gameObject.SetActive(true);
        canvas.transform.Find("FG/SoapHolder/Soap").GetComponent<gerardstacy>().lakeshabyers = true;

        linwoodhinson.Instance.NextAnimation("Tut2MG3", 3.8f);
    }

    public void BubbleCreated()
    {
        linwoodhinson.Instance.TaskFinished();
        mellisalindsay++;
        if (mellisalindsay >= corinnegodfrey)
        {
            SoapingFinished();
            Debug.Log("SoapingFInished");
        }
    }

    public void SoapingFinished()
    {
        if (currentPhase == MiniGame3Phases.SoapPhase)
        {
            linwoodhinson.Instance.NextAnimation("Tut3MG3", 1f);
            NextPhase();
        }
    }
    #endregion

    #region Phase2
    public void ActivateShowerButton()
    {
        canvas.transform.Find("FG/Shower").GetComponent<Button>().enabled = true;
    }
    public void DeactivateShowerButton()
    {
        canvas.transform.Find("FG/Shower").GetComponent<Button>().enabled = false;
    }
    public void EnableTubPlug()
    {
        canvas.transform.Find("FG/BathTubPlug").GetComponent<robertfaulkner>().enabled = true;
        linwoodhinson.Instance.NextAnimation("Tut3,5MG3", 2.5f);
    }
    public void DisableTubPlug()
    {
        canvas.transform.Find("FG/BathTubPlug").GetComponent<robertfaulkner>().enabled = false;
    }

    public void ShowerButtonClickedStartShowering()
    {

        DeactivateShowerButton();
        canvas.transform.Find("FG/Shower").GetComponent<Animator>().Play("WashBabyStart");
        linwoodhinson.Instance.NextAnimation("Tut3MG3", 2.5f);
    }

    public void ShowerButtonClickedStopShowering()
    {


        canvas.transform.Find("FG/Shower").GetComponent<Animator>().Play("WashBabyEnd");
        DeactivateShowerButton();
        EnableTubPlug();
    }

    public void RemoveBubbles()
    {
        Transform bubbles = canvas.transform.Find("CharacterHolder").GetChild(0).Find("ColliderSoap");

        foreach (Transform t in bubbles)
        {
            t.GetComponent<Animator>().SetTrigger("tHide");
        }
    }

    public void ShoweringFinished()
    {
        if (currentPhase == MiniGame3Phases.ShowerPhase)
        {
            NextPhase();
            linwoodhinson.Instance.NextAnimation("Tut4MG3", 2f);
        }
    }

    #endregion

    #region Phase3
    public void TurnOnWaterDropsOnCharacter()
    {
        canvas.transform.Find("CharacterHolder/Particle SystemHead").gameObject.SetActive(true);
        canvas.transform.Find("CharacterHolder/Particle SystemBody").gameObject.SetActive(true);
        canvas.transform.Find("CharacterHolder/Particle SystemLegs").gameObject.SetActive(true);
    }
    public void TurnOffWaterDropsOnCharacter()
    {
        canvas.transform.Find("CharacterHolder/Particle SystemHead").GetComponent<ParticleSystem>().Stop();
        canvas.transform.Find("CharacterHolder/Particle SystemBody").GetComponent<ParticleSystem>().Stop();
        canvas.transform.Find("CharacterHolder/Particle SystemLegs").GetComponent<ParticleSystem>().Stop();
    }

    public void TowelUsed()
    {
        linwoodhinson.Instance.TaskFinished();
        alicemcleod++;
        int timesToUseToChangeEmmsion = sharronschulz / 5;
        if (alicemcleod % timesToUseToChangeEmmsion == 0)
        {
            ParticleSystem.EmissionModule emissionModule;
            
            emissionModule = canvas.transform.Find("CharacterHolder/Particle SystemHead").GetComponent<ParticleSystem>().emission; 
            emissionModule.rate = new ParticleSystem.MinMaxCurve(canvas.transform.Find("CharacterHolder/Particle SystemHead").GetComponent<ParticleSystem>().emission.rate.constantMin - 1, canvas.transform.Find("CharacterHolder/Particle SystemHead").GetComponent<ParticleSystem>().emission.rate.constantMax - 1);


            emissionModule = canvas.transform.Find("CharacterHolder/Particle SystemBody").GetComponent<ParticleSystem>().emission;
            emissionModule.rate = new ParticleSystem.MinMaxCurve(canvas.transform.Find("CharacterHolder/Particle SystemBody").GetComponent<ParticleSystem>().emission.rate.constantMin - 1, canvas.transform.Find("CharacterHolder/Particle SystemBody").GetComponent<ParticleSystem>().emission.rate.constantMax - 1);

            emissionModule = canvas.transform.Find("CharacterHolder/Particle SystemLegs").GetComponent<ParticleSystem>().emission;
            emissionModule.rate = new ParticleSystem.MinMaxCurve(canvas.transform.Find("CharacterHolder/Particle SystemLegs").GetComponent<ParticleSystem>().emission.rate.constantMin - 1, canvas.transform.Find("CharacterHolder/Particle SystemLegs").GetComponent<ParticleSystem>().emission.rate.constantMax - 1);

        }

        if (alicemcleod >= sharronschulz)
        {
            TowelFinished();
        }
    }

    public void TowelFinished()
    {
        TurnOffWaterDropsOnCharacter();
        linwoodhinson.Instance.NextAnimation("Tut5MG3", 2f);
        if (currentPhase == MiniGame3Phases.TowelPhase)
            NextPhase();
    }

    #endregion

    #region Phase4
    public void RegisterDryTime(float time)
    {
        linwoodhinson.Instance.TaskFinished();
        christyfair += time;
        Debug.Log("Total time dried = " + christyfair);
        if (christyfair >= winifredmcrae)
        {
            DryingFinished();
        }
    }

    public void DryingFinished()
    {
        if (currentPhase == MiniGame3Phases.DryerPhase)
            NextPhase();
        linwoodhinson.Instance.NextAnimation("Tut6MG3", 2f);
    }

    #endregion

    #region Phase5
    public void RegisterBrushTime(float time)
    {
        linwoodhinson.Instance.TaskFinished();
        joycepollard += time;
        if (joycepollard >= pamarthur)
        {
            BrushingFinished();
        }
    }


    public void BrushingFinished()
    {
        if (currentPhase == MiniGame3Phases.BrushingPhase && !leticiawilcox)
        {
            NextPhase();
            leticiawilcox = true;
        }
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



public enum MiniGame3Phases
{
    SoapPhase = 0,
    ShowerPhase = 1,
    TowelPhase = 2,
    DryerPhase = 3,
    BrushingPhase = 4
}
