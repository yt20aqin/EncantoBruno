using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;










public class kurtisrojas : MonoBehaviour
{
    public static kurtisrojas Instance;

    [Header("MiniGame DATA SO")]
    public roryfonseca miniGameData;

    void Awake()
    {
        kurtisrojas.Instance = this;
    }


    [Header("Starting phase")]
    public MiniGame1Phases currentPhase;

    public GameObject beverlycurtis;
    public Transform headSpots;
    public Transform bodySpots;
    public GameObject roxiedye;

    #region Phase1Vars
    public int luzlocke;
    public int trudypadilla;

    public int anang;
    #endregion

    #region Phase2Vars
    public float liliaayala;

    float nelliefields;
    #endregion

    #region Phase3Vars
    public float brittanyalford;

    float marciserrano;
    #endregion

    #region Phase4Vars
    public int kaitlynhoyt;

    int sheliadailey;
    #endregion

    #region Phase5Vars
    public int georgettequiroz;

    int bobbicook;
    #endregion
    GameObject canvas;
    ParticleSystem miniGameFinishedPS;

    public int interstitialID = -1;

    void Start()
    {
        canvas = GameObject.Find("Canvas");

        miniGameFinishedPS = canvas.transform.Find("SuccessParticle").GetComponent<ParticleSystem>();

        
        canvas.transform.Find("LoadingPetHolder").GetChild(0).GetComponent<Animator>().Play("LoadingDepart");

        trudypadilla = canvas.transform.Find("FG/Mosquitos").childCount;
        beverlycurtis = canvas.transform.Find("Menus/ProgressBarHolder/chelseylayton").gameObject;
        beverlycurtis.GetComponent<Image>().fillAmount = 0f;

        

        GameObject pet = GameObject.Instantiate(miniGameData.pets[lanepitts.diannabaird]);
        pet.transform.SetParent(canvas.transform.Find("CharacterHolder"), false);
        pet.transform.SetAsFirstSibling();
        pet.GetComponent<Animator>().Play("BabyHappyIdle");


        
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
                if (trevorshort.Instance != null)
                    trevorshort.Instance.megandavison("SuccessBig");
                canvas.transform.Find("FG/Plaster").GetComponent<Animator>().enabled = false;
                canvas.transform.Find("FG/Plaster").GetComponent<Animator>().SetTrigger("Remove");
                canvas.transform.Find("FG/Plaster").GetComponent<michelbeatty>().brigittejudd = false;
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
                canvas.transform.Find("FG/Muhotepaljka").GetComponent<beaugrace>().bonitaandrews = true;
                canvas.transform.Find("TutorialHolder").GetComponent<Animator>().Play("pointerTap");
                break;

            case MiniGame1Phases.FleaPhase:
                canvas.transform.Find("FG/Muhotepaljka").GetComponent<beaugrace>().bonitaandrews = false;
                canvas.transform.Find("FG/Muhotepaljka").GetChild(0).GetComponent<Animator>().Play("completed");
                RemoveMosquitos();

                canvas.transform.Find("FG/Bugs").gameObject.SetActive(true);
                FleasArrival();

                canvas.transform.Find("FG/FleaPowder").GetComponent<ryanratliff>().ShowOnScene();
                break;

            case MiniGame1Phases.SoresPhase:
                Transform fp = canvas.transform.Find("FleaPowder");
                if (fp == null)
                    fp = canvas.transform.Find("FG/FleaPowder");
                fp.GetComponent<errolgeiger>().OnEndDrag(null);
                fp.GetComponent<errolgeiger>().louisehayden = false;
                fp.GetComponent<ryanratliff>().RemoveFromScene();
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
                canvas.transform.Find("FG/Plaster").GetComponent<michelbeatty>().brigittejudd = false;
                break;

            default:
                break;
        }
    }
    #region Phase1
    public void SpawnMosquitos(int numToSpawn = 1)
    {
        GameObject canvas = GameObject.Find("Canvas");
        if (trudypadilla + numToSpawn <= luzlocke)
            for (int i = 0; i < numToSpawn; i++)
            {
                GameObject mosquito = Instantiate(roxiedye);
                mosquito.transform.SetParent(canvas.transform.Find("FG/Mosquitos"), false);
            }
        else
        {
            SpawnMosquitos(luzlocke - trudypadilla);
        }
        if (trudypadilla + numToSpawn <= luzlocke)
            trudypadilla += numToSpawn;
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
        anang++;

        if (anang >= luzlocke)
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
        nelliefields += time;
        if (nelliefields >= liliaayala)
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
        trevorshort.Instance.megandavison("MosquitoCream");
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
        rodgerdorsey.Instance.NextAnimation("Tut1MG1", .5f);
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
        marciserrano += time;
        if (marciserrano >= brittanyalford)
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
        sheliadailey++;
        if (sheliadailey >= kaitlynhoyt)
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
        trevorshort.Instance.megandavison("Clock");
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
        if (trevorshort.Instance != null)
            trevorshort.Instance.megandavison("SmallParticle");
        BandagePut();
    }

    public void BandagePut()
    {
        bobbicook++;

        if (bobbicook >= georgettequiroz)
        {
            NextPhase();
        }
        else
        {
            canvas.transform.Find("FG/Plaster").GetComponent<michelbeatty>().enabled = true;
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
            basilfarmer.Instance.ShowInterstitial();
        else
            basilfarmer.Instance.ShowInterstitial();
        SceneManager.LoadScene(scene);
    }
    public void FinishedMiniGame()
    {
        Debug.Log("MINIGAME1 FINISHED");
        miniGameData.NextPet();
        miniGameData.NextMiniGame();
        interstitialID = lanepitts.diannaali;
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

