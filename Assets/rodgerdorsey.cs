using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class rodgerdorsey : MonoBehaviour
{

    public static bool charmainebarrera;
    public static rodgerdorsey Instance;


    void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
        }
        if (PlayerPrefs.HasKey("MG1Tut"))
        {
            int tutstatus = PlayerPrefs.GetInt("MG1Tut");
            if (tutstatus == 1)
                charmainebarrera = true;
            else
                charmainebarrera = false;
        }
        else
            charmainebarrera = false;


    }

    public void TaskFinished()
    {
        Debug.Log("TaskFinished");
        transform.GetChild(0).GetComponent<Image>().color = new Color(1, 1, 1, 0);
    }

    public void NextAnimation(string animName, float time)
    {
        GameObject.Find("Canvas").transform.Find("TutorialHolder").gameObject.SetActive(true);
        StartCoroutine(NextAnimationCoroutine(time, animName));
    }

    public IEnumerator NextAnimationCoroutine(float time, string animname)
    {
        transform.GetChild(0).GetComponent<Image>().color = new Color(1, 1, 1, 0);
        Debug.Log("NEXT ANIMACIJAAAAAA");
        if (!charmainebarrera)
        {
            transform.GetComponent<Animator>().Play(animname);
        }
        yield return new WaitForSeconds(time);
        if (!charmainebarrera)
            transform.GetChild(0).GetComponent<Image>().color = new Color(1, 1, 1, 1);
    }
}
