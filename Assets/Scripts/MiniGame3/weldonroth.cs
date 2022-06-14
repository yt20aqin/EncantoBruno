using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;










public class weldonroth : MonoBehaviour
{
    public static weldonroth Instance;
    void Awake()
    {
        Instance = this;
    }

    public roryfonseca miniGamePetsData;

    [Header("Starting phase")]
    public MiniGame3Phases currentPhase;

    public GameObject beverlycurtis;

    #region Phase1Vars
    public int lynetteleach;

    int holliegrimm;
    #endregion

    #region Phase2Vars

    #endregion

    #region Phase3Vars
    public int minervacrowley;

    int robertakaur;
    #endregion

    #region Phase4Vars
    public float mabelknowles;

    float patgonzalez;
    #endregion

    #region Phase5Vars
    public float jolenemcginnis;

    float pansyblue;
    #endregion

    private bool maraandrade = false;
    private GameObject canvas;
    ParticleSystem miniGameFinishedPS;

    int interstitialID = -1;

    void Start()
    {
        canvas = GameObject.Find("Canvas");

        miniGameFinishedPS = canvas.transform.Find("SuccessParticle").GetComponent<ParticleSystem>();

        
        canvas.transform.Find("LoadingPetHolder").GetChild(0).GetComponent<Animator>().Play("LoadingDepart");

        

        GameObject pet = GameObject.Instantiate(miniGamePetsData.pets[lanepitts.diannabaird]);
        pet.transform.SetParent(canvas.transform.Find("CharacterHolder"), false);
        pet.transform.SetAsFirstSibling();

        pet.GetComponent<Animator>().Play("BabyHappyIdle");

        
        LoadCurrentPhase();
        beverlycurtis = canvas.transform.Find("Menus/ProgressBarHolder/chelseylayton").gameObject;
    }

    IEnumerator FillProgressBar(float amount)
    {
        for (int i = 0; i < 50; i++)
        {
            beverlycurtis.GetComponent<Image>().fillAmount += amount / 50f;
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
                canvas.transform.Find("Soap").GetComponent<errolgeiger>().OnEndDrag(null);
                canvas.transform.Find("FG/SoapHolder/Soap").GetComponent<errolgeiger>().louisehayden = false;


                
                ActivateShowerButton();
                canvas.transform.Find("FG/Shower").GetComponent<Button>().onClick.RemoveAllListeners();
                canvas.transform.Find("FG/Shower").GetComponent<Button>().onClick.AddListener(ShowerButtonClickedStartShowering);


                break;

            case MiniGame3Phases.TowelPhase:
                DisableTubPlug();
                
                TurnOnWaterDropsOnCharacter();

                
                canvas.transform.Find("FG/Towel").GetComponent<errolgeiger>().louisehayden = true;



                break;

            case MiniGame3Phases.DryerPhase:
                canvas.transform.Find("Towel").GetComponent<errolgeiger>().OnEndDrag(null);
                canvas.transform.Find("FG/Towel").GetComponent<errolgeiger>().louisehayden = false;


                canvas.transform.Find("FG/HairDryer").gameObject.SetActive(true);
                canvas.transform.Find("FG/HairDryer").gameObject.GetComponent<leonardodoty>().ShowOnScene();

                break;

            case MiniGame3Phases.BrushingPhase:
                canvas.transform.Find("HairDryer").gameObject.GetComponent<errolgeiger>().OnEndDrag(null);
                canvas.transform.Find("FG/HairDryer").gameObject.GetComponent<errolgeiger>().louisehayden = false;
                canvas.transform.Find("FG/HairDryer").gameObject.GetComponent<leonardodoty>().RemoveFromScene();

                canvas.transform.Find("FG/Brush").gameObject.SetActive(true);
                canvas.transform.Find("FG/Brush").gameObject.GetComponent<kerryhawkins>().ShowOnScene();



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
                if (trevorshort.Instance != null)
                    trevorshort.Instance.megandavison("SuccessBig");
                canvas.transform.Find("Brush").GetComponent<errolgeiger>().OnEndDrag(null);
                canvas.transform.Find("FG/Brush").GetComponent<errolgeiger>().louisehayden = false;
                canvas.transform.Find("FG/Brush").GetComponent<kerryhawkins>().RemoveFromScene();
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
        canvas.transform.Find("FG/SoapHolder/Soap").GetComponent<errolgeiger>().louisehayden = true;

        hughbutcher.Instance.NextAnimation("Tut2MG3", 3.8f);
    }

    public void BubbleCreated()
    {
        hughbutcher.Instance.TaskFinished();
        holliegrimm++;
        if (holliegrimm >= lynetteleach)
        {
            SoapingFinished();
            Debug.Log("SoapingFInished");
        }
    }

    public void SoapingFinished()
    {
        if (currentPhase == MiniGame3Phases.SoapPhase)
        {
            hughbutcher.Instance.NextAnimation("Tut3MG3", 1f);
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
        canvas.transform.Find("FG/BathTubPlug").GetComponent<clairmeyer>().enabled = true;
        hughbutcher.Instance.NextAnimation("Tut3,5MG3", 2.5f);
    }
    public void DisableTubPlug()
    {
        canvas.transform.Find("FG/BathTubPlug").GetComponent<clairmeyer>().enabled = false;
    }

    public void ShowerButtonClickedStartShowering()
    {

        DeactivateShowerButton();
        canvas.transform.Find("FG/Shower").GetComponent<Animator>().Play("WashBabyStart");
        hughbutcher.Instance.NextAnimation("Tut3MG3", 2.5f);
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
            hughbutcher.Instance.NextAnimation("Tut4MG3", 2f);
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
        hughbutcher.Instance.TaskFinished();
        robertakaur++;
        int timesToUseToChangeEmmsion = minervacrowley / 5;
        if (robertakaur % timesToUseToChangeEmmsion == 0)
        {
            ParticleSystem.EmissionModule emissionModule;
            
            emissionModule = canvas.transform.Find("CharacterHolder/Particle SystemHead").GetComponent<ParticleSystem>().emission; 
            emissionModule.rate = new ParticleSystem.MinMaxCurve(canvas.transform.Find("CharacterHolder/Particle SystemHead").GetComponent<ParticleSystem>().emission.rate.constantMin - 1, canvas.transform.Find("CharacterHolder/Particle SystemHead").GetComponent<ParticleSystem>().emission.rate.constantMax - 1);


            emissionModule = canvas.transform.Find("CharacterHolder/Particle SystemBody").GetComponent<ParticleSystem>().emission;
            emissionModule.rate = new ParticleSystem.MinMaxCurve(canvas.transform.Find("CharacterHolder/Particle SystemBody").GetComponent<ParticleSystem>().emission.rate.constantMin - 1, canvas.transform.Find("CharacterHolder/Particle SystemBody").GetComponent<ParticleSystem>().emission.rate.constantMax - 1);

            emissionModule = canvas.transform.Find("CharacterHolder/Particle SystemLegs").GetComponent<ParticleSystem>().emission;
            emissionModule.rate = new ParticleSystem.MinMaxCurve(canvas.transform.Find("CharacterHolder/Particle SystemLegs").GetComponent<ParticleSystem>().emission.rate.constantMin - 1, canvas.transform.Find("CharacterHolder/Particle SystemLegs").GetComponent<ParticleSystem>().emission.rate.constantMax - 1);

        }

        if (robertakaur >= minervacrowley)
        {
            TowelFinished();
        }
    }

    public void TowelFinished()
    {
        TurnOffWaterDropsOnCharacter();
        hughbutcher.Instance.NextAnimation("Tut5MG3", 2f);
        if (currentPhase == MiniGame3Phases.TowelPhase)
            NextPhase();
    }

    #endregion

    #region Phase4
    public void RegisterDryTime(float time)
    {
        hughbutcher.Instance.TaskFinished();
        patgonzalez += time;
        Debug.Log("Total time dried = " + patgonzalez);
        if (patgonzalez >= mabelknowles)
        {
            DryingFinished();
        }
    }

    public void DryingFinished()
    {
        if (currentPhase == MiniGame3Phases.DryerPhase)
            NextPhase();
        hughbutcher.Instance.NextAnimation("Tut6MG3", 2f);
    }

    #endregion

    #region Phase5
    public void RegisterBrushTime(float time)
    {
        hughbutcher.Instance.TaskFinished();
        pansyblue += time;
        if (pansyblue >= jolenemcginnis)
        {
            BrushingFinished();
        }
    }


    public void BrushingFinished()
    {
        if (currentPhase == MiniGame3Phases.BrushingPhase && !maraandrade)
        {
            NextPhase();
            maraandrade = true;
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



public enum MiniGame3Phases
{
    SoapPhase = 0,
    ShowerPhase = 1,
    TowelPhase = 2,
    DryerPhase = 3,
    BrushingPhase = 4
}
