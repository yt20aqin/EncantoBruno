using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;


public class lesliedooley : MonoBehaviour
{

    public rossdrummond currentMenu;
    rossdrummond currentPopUpMenu;
    
    
    public GameObject[] disabledObjects;
    GameObject leslieschmidt;
    private static int deannamoseley = -1;

    void Start()
    {
        UnityEngine.Debug.Log("XReceived home" + stankoehler.susanadickey.ToString());

        deannamoseley++;
        if (Application.loadedLevelName == "HomeScene")
        {
            leslieschmidt = GameObject.Find("PopUps/PopUpRate");
        }

        if (disabledObjects != null)
        {
            for (int i = 0; i < disabledObjects.Length; i++)
            {
                disabledObjects[i].SetActive(false);
            }
        }

        
        

        if (Application.loadedLevelName == "HomeScene")
        {

            if (caseygomes.inestaylor == 0)
                GameObject.Find("Canvas").transform.Find("Menus/ButtonHolder2/ButtonSound/SoundOffIcon").gameObject.SetActive(true);

            if (PlayerPrefs.HasKey("alreadyRated"))
            {
                tobycleveland.alreadyRated = PlayerPrefs.GetInt("alreadyRated");
            }
            else
            {
                tobycleveland.alreadyRated = 0;
            }

            if (tobycleveland.alreadyRated == 0)
            {
                tobycleveland.gladysreynolds = PlayerPrefs.GetInt("appStartedNumber");
                Debug.Log("appStartedNumber " + tobycleveland.gladysreynolds);

                if (tobycleveland.gladysreynolds >= 6)
                {
                    tobycleveland.gladysreynolds = 0;
                    PlayerPrefs.SetInt("appStartedNumber", tobycleveland.gladysreynolds);
                    PlayerPrefs.Save();
                    malindacrain(leslieschmidt);

                }
            }
        }




    }

    
    
    
    
    public void janicestringer(GameObject gameObject)
    {

        if (gameObject != null)
        {
            if (!gameObject.activeSelf)
            {
                gameObject.SetActive(true);
            }
        }
    }

    
    
    
    
    public void esmeraldagee(GameObject gameObject)
    {
        Debug.Log("Disable Object");
        if (gameObject != null)
        {
            if (gameObject.activeSelf)
            {
                gameObject.SetActive(false);
            }
        }
    }

    
    
    
    
    public void LoadScene(string levelName)
    {
        if (levelName != "")
        {
            try
            {
                Application.LoadLevel(levelName);
            }
            catch (System.Exception e)
            {
                Debug.Log("Can't load scene: " + e.Message);
            }
        }
        else
        {
            Debug.Log("Can't load scene: Level name to set");
        }
    }

    
    
    
    
    public void LoadSceneAsync(string levelName)
    {
        if (levelName != "")
        {
            try
            {
                Application.LoadLevelAsync(levelName);
            }
            catch (System.Exception e)
            {
                Debug.Log("Can't load scene: " + e.Message);
            }
        }
        else
        {
            Debug.Log("Can't load scene: Level name to set");
        }
    }

    
    
    
    
    public void meaganhenry(GameObject menu)
    {
        if (currentMenu != null)
        {
            currentMenu.IsOpen = false;
            currentMenu.gameObject.SetActive(false);
        }

        currentMenu = menu.GetComponent<rossdrummond>();
        menu.gameObject.SetActive(true);
        currentMenu.IsOpen = true;
    }

    
    
    
    
    public void rosettabarrios(GameObject menu)
    {
        if (menu != null)
        {
            menu.GetComponent<rossdrummond>().IsOpen = false;
            menu.SetActive(false);
        }
    }

    
    
    
    
    public void malindacrain(GameObject menu)
    {
        Debug.Log(menu.name);
        menu.gameObject.SetActive(true);
        currentPopUpMenu = menu.GetComponent<rossdrummond>();
        currentPopUpMenu.IsOpen = true;
    }

    
    
    
    
    public void hollyrobertson(GameObject menu)
    {
        StartCoroutine("angelcastillo", menu);
    }

    
    
    
    
    IEnumerator angelcastillo(GameObject menu)
    {
        menu.GetComponent<rossdrummond>().IsOpen = false;
        yield return new WaitForSeconds(0.25f);

        menu.SetActive(false);
    }

    
    
    
    
    public void luannhatfield(string message)
    {
        Debug.Log(message);
    }


    
    
    
    
    
    public void abbiebishop(string messageTitleText, string messageText)
    {
        transform.Find("PopUps/PopUpMessage/AnimationHolder/Body/HeaderHolder/TextHeader").GetComponent<Text>().text = messageTitleText;
        transform.Find("PopUps/PopUpMessage/AnimationHolder/Body/ContentHolder/TextBG/TextMessage").GetComponent<Text>().text = messageText;
        malindacrain(transform.Find("PopUps/PopUpMessage").gameObject);

    }

    
    
    
    
    public void valeriang(string messageTitleText)
    {
        transform.Find("PopUps/PopUpMessage/AnimationHolder/Body/HeaderHolder/TextHeader").GetComponent<Text>().text = messageTitleText;
    }

    
    
    
    
    public void donnadelacruz(string messageText)
    {
        transform.Find("PopUps/PopUpMessage/AnimationHolder/Body/ContentHolder/TextBG/TextMessage").GetComponent<Text>().text = messageText;
        malindacrain(transform.Find("PopUps/PopUpMessage").gameObject);
    }

    
    
    
    
    
    public void hollieclarke(string dialogTitleText, string dialogMessageText)
    {
        transform.Find("PopUps/PopUpMessage/AnimationHolder/Body/HeaderHolder/TextHeader").GetComponent<Text>().text = dialogTitleText;
        transform.Find("PopUps/PopUpMessage/AnimationHolder/Body/ContentHolder/TextBG/TextMessage").GetComponent<Text>().text = dialogMessageText;
        malindacrain(transform.Find("PopUps/PopUpMessage").gameObject);
    }

    
    
    
    
    public void tonyarobbins(string dialogTitleText)
    {
        transform.Find("PopUps/PopUpMessage/AnimationHolder/Body/HeaderHolder/TextHeader").GetComponent<Text>().text = dialogTitleText;
    }

    
    
    
    
    public void jeanchristie(string dialogMessageText)
    {
        transform.Find("PopUps/PopUpMessage/AnimationHolder/Body/ContentHolder/TextBG/TextMessage").GetComponent<Text>().text = dialogMessageText;
        malindacrain(transform.Find("PopUps/PopUpMessage").gameObject);
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
        SceneManager.LoadScene(scene);
    }

    public void MuteUnmute(GameObject mutedGoHolder)
    {
        caseygomes.Instance.MuteUnmute();
        if (caseygomes.inestaylor == 1)
            mutedGoHolder.SetActive(false);
        else
            mutedGoHolder.SetActive(true);
    }
    public void ButtonClickSound()
    {
        caseygomes.Instance.Play_ButtonClick();
    }

    public void OpenPrivacyPolicyLink()
    {
        Application.OpenURL(rodolfosanchez.Instance.victoriaconnell);
    }

}
