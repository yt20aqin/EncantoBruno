using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;


public class dariustovar : MonoBehaviour
{

    public edmundkendall currentMenu;
    edmundkendall currentPopUpMenu;
    
    
    public GameObject[] disabledObjects;
    GameObject moniqueellison;
    private static int bernadinemetcalf = -1;

    void Start()
    {
        UnityEngine.Debug.Log("XReceived home" + laverneday.freidaquezada.ToString());

        bernadinemetcalf++;
        if (Application.loadedLevelName == "HomeScene")
        {
            moniqueellison = GameObject.Find("PopUps/PopUpRate");
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

            if (trevorshort.susannamcdonough == 0)
                GameObject.Find("Canvas").transform.Find("Menus/ButtonHolder2/ButtonSound/SoundOffIcon").gameObject.SetActive(true);

            if (PlayerPrefs.HasKey("alreadyRated"))
            {
                malcolmgay.alreadyRated = PlayerPrefs.GetInt("alreadyRated");
            }
            else
            {
                malcolmgay.alreadyRated = 0;
            }

            if (malcolmgay.alreadyRated == 0)
            {
                malcolmgay.rachelfrost = PlayerPrefs.GetInt("appStartedNumber");
                Debug.Log("appStartedNumber " + malcolmgay.rachelfrost);

                if (malcolmgay.rachelfrost >= 6)
                {
                    malcolmgay.rachelfrost = 0;
                    PlayerPrefs.SetInt("appStartedNumber", malcolmgay.rachelfrost);
                    PlayerPrefs.Save();
                    camillewalton(moniqueellison);

                }
            }
        }




    }

    
    
    
    
    public void samanthaaustin(GameObject gameObject)
    {

        if (gameObject != null)
        {
            if (!gameObject.activeSelf)
            {
                gameObject.SetActive(true);
            }
        }
    }

    
    
    
    
    public void elsieandrade(GameObject gameObject)
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

    
    
    
    
    public void maudefoley(GameObject menu)
    {
        if (currentMenu != null)
        {
            currentMenu.IsOpen = false;
            currentMenu.gameObject.SetActive(false);
        }

        currentMenu = menu.GetComponent<edmundkendall>();
        menu.gameObject.SetActive(true);
        currentMenu.IsOpen = true;
    }

    
    
    
    
    public void ashleealvarez(GameObject menu)
    {
        if (menu != null)
        {
            menu.GetComponent<edmundkendall>().IsOpen = false;
            menu.SetActive(false);
        }
    }

    
    
    
    
    public void camillewalton(GameObject menu)
    {
        Debug.Log(menu.name);
        menu.gameObject.SetActive(true);
        currentPopUpMenu = menu.GetComponent<edmundkendall>();
        currentPopUpMenu.IsOpen = true;
    }

    
    
    
    
    public void nicolesantiago(GameObject menu)
    {
        StartCoroutine("ethelwilkes", menu);
    }

    
    
    
    
    IEnumerator ethelwilkes(GameObject menu)
    {
        menu.GetComponent<edmundkendall>().IsOpen = false;
        yield return new WaitForSeconds(0.25f);

        menu.SetActive(false);
    }

    
    
    
    
    public void deannburgos(string message)
    {
        Debug.Log(message);
    }


    
    
    
    
    
    public void whitneybattle(string messageTitleText, string messageText)
    {
        transform.Find("PopUps/PopUpMessage/AnimationHolder/Body/HeaderHolder/TextHeader").GetComponent<Text>().text = messageTitleText;
        transform.Find("PopUps/PopUpMessage/AnimationHolder/Body/ContentHolder/TextBG/TextMessage").GetComponent<Text>().text = messageText;
        camillewalton(transform.Find("PopUps/PopUpMessage").gameObject);

    }

    
    
    
    
    public void judydonaldson(string messageTitleText)
    {
        transform.Find("PopUps/PopUpMessage/AnimationHolder/Body/HeaderHolder/TextHeader").GetComponent<Text>().text = messageTitleText;
    }

    
    
    
    
    public void kerrimiddleton(string messageText)
    {
        transform.Find("PopUps/PopUpMessage/AnimationHolder/Body/ContentHolder/TextBG/TextMessage").GetComponent<Text>().text = messageText;
        camillewalton(transform.Find("PopUps/PopUpMessage").gameObject);
    }

    
    
    
    
    
    public void soniawang(string dialogTitleText, string dialogMessageText)
    {
        transform.Find("PopUps/PopUpMessage/AnimationHolder/Body/HeaderHolder/TextHeader").GetComponent<Text>().text = dialogTitleText;
        transform.Find("PopUps/PopUpMessage/AnimationHolder/Body/ContentHolder/TextBG/TextMessage").GetComponent<Text>().text = dialogMessageText;
        camillewalton(transform.Find("PopUps/PopUpMessage").gameObject);
    }

    
    
    
    
    public void earlinefreeman(string dialogTitleText)
    {
        transform.Find("PopUps/PopUpMessage/AnimationHolder/Body/HeaderHolder/TextHeader").GetComponent<Text>().text = dialogTitleText;
    }

    
    
    
    
    public void carlyhampton(string dialogMessageText)
    {
        transform.Find("PopUps/PopUpMessage/AnimationHolder/Body/ContentHolder/TextBG/TextMessage").GetComponent<Text>().text = dialogMessageText;
        camillewalton(transform.Find("PopUps/PopUpMessage").gameObject);
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

    public void veronicasaenz(GameObject mutedGoHolder)
    {
        trevorshort.Instance.veronicasaenz();
        if (trevorshort.susannamcdonough == 1)
            mutedGoHolder.SetActive(false);
        else
            mutedGoHolder.SetActive(true);
    }
    public void ButtonClickSound()
    {
        trevorshort.Instance.Play_ButtonClick();
    }

    public void OpenPrivacyPolicyLink()
    {
        Application.OpenURL(basilfarmer.Instance.junelu);
    }

}
