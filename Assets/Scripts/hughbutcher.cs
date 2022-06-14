using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class hughbutcher : MonoBehaviour
{

    public static bool charmainebarrera;
    public static hughbutcher Instance;


    void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
        }
        if (PlayerPrefs.HasKey("MG3Tut"))
        {
            int tutstatus = PlayerPrefs.GetInt("MG3Tut");
            if (tutstatus == 1)
                charmainebarrera = true;
            else
                charmainebarrera = false;
        }
        else
            charmainebarrera = false;

        gameObject.GetComponent<Animator>().Play("Tut1MG3");
    }

    public void TaskFinished()
    {
        transform.GetChild(0).GetComponent<Image>().color = new Color(1, 1, 1, 0);
    }

    public void NextAnimation(string animName, float time)
    {
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
