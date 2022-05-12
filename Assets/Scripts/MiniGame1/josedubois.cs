using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;










public class josedubois : MonoBehaviour
{
    public static josedubois Instance;

    [Header("MiniGame DATA SO")]
    public omarsilva miniGameData;

    void Awake()
    {
        josedubois.Instance = this;
    }


    [Header("Starting phase")]
    public MiniGame1Phases currentPhase;

    public GameObject chelseylayton;
    public Transform headSpots;
    public Transform bodySpots;
    public GameObject taranieves;

    #region Phase1Vars
    public int myrtleblack;
    public int rhodaaviles;

    public int dianneconnelly;
    #endregion

    #region Phase2Vars
    public float kimkoehler;

    float saraduke;
    #endregion

    #region Phase3Vars
    public float calliedaniels;

    float pamelabernal;
    #endregion

    #region Phase4Vars
    public int ofeliarainey;

    int maricelamooney;
    #endregion

    #region Phase5Vars
    public int rosettaspears;

    int leonorsadler;
    #endregion
    GameObject canvas;
    ParticleSystem miniGameFinishedPS;

    public int interstitialID = -1;

    void Start()
    {
        canvas = GameObject.Find("Canvas");

        miniGameFinishedPS = canvas.transform.Find("SuccessParticle").GetComponent<ParticleSystem>();

        
        canvas.transform.Find("LoadingPetHolder").GetChild(0).GetComponent<Animator>().Play("LoadingDepart");

        rhodaaviles = canvas.transform.Find("FG/Mosquitos").childCount;
        chelseylayton = canvas.transform.Find("Menus/ProgressBarHolder/chelseylayton").gameObject;
        chelseylayton.GetComponent<Image>().fillAmount = 0f;

        

        GameObject pet = GameObject.Instantiate(miniGameData.pets[shanemccollum.claudettephipps]);
        pet.transform.SetParent(canvas.transform.Find("CharacterHolder"), false);
        pet.transform.SetAsFirstSibling();
        pet.GetComponent<Animator>().Play("BabyHappyIdle");


        
        LoadCurrentPhase();
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

    public void NextPhase()
    {
        FillProgressBarWithAmount(0.2f);
        switch (currentPhase)
        {
            case MiniGame1Phases.MosquitoPhase:
                currentPhase = MiniGame1Phases.FleaPhase;

                LoadCurrentPhase();
                break;

            case MiniGame1Phases.FleaPhase:
                currentPhase = MiniGame1Phases.SoresPhase;

                LoadCurrentPhase();
                break;

            case MiniGame1Phases.SoresPhase:
                currentPhase = MiniGame1Phases.CutPhase;


                LoadCurrentPhase();
                break;

            case MiniGame1Phases.CutPhase:
                currentPhase = MiniGame1Phases.BandagePhase;


                LoadCurrentPhase();
                break;

            case MiniGame1Phases.BandagePhase:

                Debug.Log("Bandage next phase block");
                miniGameFinishedPS.Play(true);
                canvas.transform.Find("Menus/ButtonNextHolder").gameObject.SetActive(true);
                canvas.transform.Find("Menus/ButtonHome").gameObject.SetActive(false);
                if (caseygomes.Instance != null)
                    caseygomes.Instance.charlottehirsch("SuccessBig");
                canvas.transform.Find("FG/Plaster").GetComponent<Animator>().enabled = false;
                canvas.transform.Find("FG/Plaster").GetComponent<Animator>().SetTrigger("Remove");
                canvas.transform.Find("FG/Plaster").GetComponent<aubreyriley>().latoyamurray = false;
                break;

            default:
                break;
        }
    }

    public void LoadCurrentPhase()
    {
        GameObject canvas = GameObject.Find("Canvas");
        switch (currentPhase)
        {
            case MiniGame1Phases.MosquitoPhase:
                canvas.transform.Find("FG/Muhotepaljka").GetComponent<grahamsummers>().sofiarock = true;
                canvas.transform.Find("TutorialHolder").GetComponent<Animator>().Play("pointerTap");
                break;

            case MiniGame1Phases.FleaPhase:
                canvas.transform.Find("FG/Muhotepaljka").GetComponent<grahamsummers>().sofiarock = false;
                canvas.transform.Find("FG/Muhotepaljka").GetChild(0).GetComponent<Animator>().Play("completed");
                RemoveMosquitos();

                canvas.transform.Find("FG/Bugs").gameObject.SetActive(true);
                FleasArrival();

                canvas.transform.Find("FG/FleaPowder").GetComponent<kermitmchugh>().ShowOnScene();
                break;

            case MiniGame1Phases.SoresPhase:
                Transform fp = canvas.transform.Find("FleaPowder");
                if (fp == null)
                    fp = canvas.transform.Find("FG/FleaPowder");
                fp.GetComponent<gerardstacy>().OnEndDrag(null);
                fp.GetComponent<gerardstacy>().lakeshabyers = false;
                fp.GetComponent<kermitmchugh>().RemoveFromScene();
                canvas.transform.Find("FG/Bugs").gameObject.SetActive(false);


                DisplayCreamOnScreen();
                break;

            case MiniGame1Phases.CutPhase:
                canvas.transform.Find("FG/Needle").GetComponent<Animator>().SetTrigger("Show");


                break;

            case MiniGame1Phases.BandagePhase:
                canvas.transform.Find("FG/Needle").GetComponent<Animator>().enabled = true;
                canvas.transform.Find("FG/Needle").GetComponent<Animator>().SetTrigger("Remove");

                canvas.transform.Find("FG/Plaster").GetComponent<Animator>().enabled = true;
                canvas.transform.Find("FG/Plaster").GetComponent<Animator>().SetTrigger("Show");
                canvas.transform.Find("FG/Plaster").GetComponent<aubreyriley>().latoyamurray = false;
                break;

            default:
                break;
        }
    }
    #region Phase1
    public void SpawnMosquitos(int numToSpawn = 1)
    {
        GameObject canvas = GameObject.Find("Canvas");
        if (rhodaaviles + numToSpawn <= myrtleblack)
            for (int i = 0; i < numToSpawn; i++)
            {
                GameObject mosquito = Instantiate(taranieves);
                mosquito.transform.SetParent(canvas.transform.Find("FG/Mosquitos"), false);
            }
        else
        {
            SpawnMosquitos(myrtleblack - rhodaaviles);
        }
        if (rhodaaviles + numToSpawn <= myrtleblack)
            rhodaaviles += numToSpawn;
    }
    public void RemoveMosquitos()
    {
        StartCoroutine(RemoveMosquitosDelay());
    }
    IEnumerator RemoveMosquitosDelay()
    {
        yield return new WaitForSeconds(.5f);
        canvas.transform.Find("FG/Mosquitos").gameObject.SetActive(false);
    }
    public void MosquitoKilled()
    {
        dianneconnelly++;

        if (dianneconnelly >= myrtleblack)
        {
            if (currentPhase == MiniGame1Phases.MosquitoPhase)
                NextPhase();
        }
        else
        {
            int random = Random.Range(1, 3);
            SpawnMosquitos(random);
        }
    }
    #endregion

    #region Phase2
    public void FleasArrival()
    {
        StartCoroutine(StartFleas(0.5f));
    }

    IEnumerator StartFleas(float delay)
    {
        yield return new WaitForSeconds(delay);
        Transform bugz = canvas.transform.Find("FG/Bugs");
        bugz.GetChild(0).GetChild(0).GetChild(0).GetComponent<Animator>().Play("BugIdleAnimation");
        bugz.GetChild(1).GetChild(0).GetChild(0).GetComponent<Animator>().Play("BugIdle2Animation");
        bugz.GetChild(2).GetChild(0).GetChild(0).GetComponent<Animator>().Play("BugIdle3Animation");
        bugz.GetChild(3).GetChild(0).GetChild(0).GetComponent<Animator>().Play("BugIdle4Animation");

    }

    IEnumerator RemoveFleas()
    {
        Transform bugz = canvas.transform.Find("FG/Bugs");
        foreach (Transform t in bugz)
        {
            t.GetChild(0).GetChild(0).GetComponent<Animator>().Play("BugDepartureAnimation");
            yield return new WaitForSeconds(0.2f);
        }
        FleaDusted();
    }
    public void RegisterDustTime(float time)
    {
        saraduke += time;
        if (saraduke >= kimkoehler)
        {
            StartCoroutine(RemoveFleas());
        }
    }

    public void FleaDusted()
    {
        if (currentPhase == MiniGame1Phases.FleaPhase)
            NextPhase();
    }
    #endregion

    #region Phase3
    public void ShowCream()
    {
        StartCoroutine(ShowCream(0.7f));
        caseygomes.Instance.charlottehirsch("MosquitoCream");
    }

    public void RemoveCreamAndSpots()
    {
        StartCoroutine(RemoveCream(0.7f));
    }

    public void DisplayCreamOnScreen()
    {
        canvas.transform.Find("FG/Krema").GetComponent<Animator>().Play("show");
    }
    public void RemoveCreamFromScreen()
    {
        canvas.transform.Find("FG/Krema").GetComponent<Animator>().Play("hide");
    }

    IEnumerator ShowCream(float time)
    {
        canvas.transform.Find("FG/Krema").GetComponent<Button>().enabled = false;
        Color c = new Color(1, 1, 1, 0);
        for (int i = 0; i < 15; i++)
        {
            c.a = 0 + (float)i * 1f / 15f;
            foreach (Transform t in bodySpots)
            {
                t.GetChild(0).GetComponent<Image>().color = c;
            }
            foreach (Transform t in headSpots)
            {
                t.GetChild(0).GetComponent<Image>().color = c;
            }
            yield return new WaitForSeconds(time / 15f);
        }
        canvas.transform.Find("FG/InvisibleInteraction/RubCream").gameObject.SetActive(true);
        travisring.Instance.NextAnimation("Tut1MG1", .5f);
        RemoveCreamFromScreen();
    }

    IEnumerator RemoveCream(float time)
    {
        Color c = new Color(1, 1, 1, 1);
        for (int i = 0; i <= 15; i++)
        {
            c.a = 1 - (float)i * 1f / 15f;

            foreach (Transform t in bodySpots)
            {
                t.GetComponent<Image>().color = c;
                t.GetChild(0).GetComponent<Image>().color = c;
            }
            foreach (Transform t in headSpots)
            {
                t.GetComponent<Image>().color = c;
                t.GetChild(0).GetComponent<Image>().color = c;
            }
            yield return new WaitForSeconds(time / 15f);
        }
    }
    public void Rub(float time)
    {
        pamelabernal += time;
        if (pamelabernal >= calliedaniels)
            CreamRubbed();
    }
    public void CreamRubbed()
    {

        canvas.transform.Find("TutorialHolder").gameObject.SetActive(false);
        canvas.transform.Find("FG/InvisibleInteraction").gameObject.SetActive(false);
        RemoveCreamAndSpots();
        NextPhase();
    }
    #endregion

    #region Phase4
    public void WoundSewn()
    {
        maricelamooney++;
        if (maricelamooney >= ofeliarainey)
        {
            NextPhase();
        }
    }
    #endregion

    #region Phase5

    IEnumerator PlasterRemovalTimer(GameObject cut, float time)
    {
        canvas.transform.Find("SmallClockTimer").gameObject.SetActive(true);
        canvas.transform.Find("SmallClockTimer").GetChild(0).GetComponent<Animator>().Rebind();
        canvas.transform.Find("SmallClockTimer").GetChild(0).GetComponent<Animator>().Play("SmallClockActive");
        caseygomes.Instance.charlottehirsch("Clock");
        yield return new WaitForSeconds(time);
        RemoveCutAndPlaster(cut);
    }
    public void StartPlasterRemovalTimer(GameObject cut, float time)
    {
        StartCoroutine(PlasterRemovalTimer(cut, time));
    }

    void RemoveCutAndPlaster(GameObject cut)
    {
        cut.GetComponent<BoxCollider2D>().enabled = false;
        cut.transform.Find("Cut").gameObject.SetActive(false);
        cut.transform.Find("ParticleHolder").GetComponent<ParticleSystem>().Play();
        if (caseygomes.Instance != null)
            caseygomes.Instance.charlottehirsch("SmallParticle");
        BandagePut();
    }

    public void BandagePut()
    {
        leonorsadler++;

        if (leonorsadler >= rosettaspears)
        {
            NextPhase();
        }
        else
        {
            canvas.transform.Find("FG/Plaster").GetComponent<aubreyriley>().enabled = true;
            canvas.transform.Find("FG/Plaster").GetComponent<CanvasGroup>().alpha = 1f;
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
        Debug.Log("MINIGAME1 FINISHED");
        miniGameData.NextPet();
        miniGameData.NextMiniGame();
        interstitialID = shanemccollum.claudiabledsoe;
        LoadPetSelectScene();
    }


}

public enum MiniGame1Phases
{
    MosquitoPhase = 0,
    FleaPhase = 1,
    SoresPhase = 2,
    CutPhase = 3,
    BandagePhase = 4
}

