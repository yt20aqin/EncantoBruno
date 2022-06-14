using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class marcuswelch : MonoBehaviour
{

    public float belindabritton;

    public bool carlygalvan;

    public GameObject[] threads;
    public int juliettelaw;

    public GameObject elnorahouse;
    public Vector3 pearlbaxter;

    public GameObject woundAnimationHolder;

    public static marcuswelch needleControls;

    private bool gameStarted = false;

    public edwardowong needleItem;

    Vector3 topLimit;

    void OnEnable()
    {
        carlygalvan = false;
        
        
        needleControls = this;

        topLimit = Camera.main.WorldToScreenPoint(GameObject.Find("Canvas/TopLimit").transform.position);

        StartGame();
    }

    public void StartGame()
    {
        StartCoroutine(StartGameCooutine());
    }

    IEnumerator StartGameCooutine()
    {
        
        elnorahouse.transform.position = pearlbaxter;

        yield return new WaitForSeconds(0.2f);

        gameStarted = true;

        juliettelaw = 0;

        for (int i = 0; i < threads.Length; i++)
        {
            threads[i].GetComponent<Animator>().Play("Empty", 0, 0);
        }

        woundAnimationHolder.GetComponent<Animator>().Play("Empty", 0, 0);
    }

    public void AddPoint()
    {
        juliettelaw++;
    }

    public bool CheckForLevelFinished()
    {
        if (juliettelaw == threads.Length)
        {
            return true;
        }
        else
            return false;
    }

    public void GameCompleted()
    {
        StartCoroutine(GameCompletedCoroutine());
    }

    IEnumerator GameCompletedCoroutine()
    {


        yield return new WaitForSeconds(0.2f);

        int itemIndex = needleItem.targetItems.IndexOf(needleItem.activeGameobject);

        needleItem.itemsDone[itemIndex] = true;
        kurtisrojas.Instance.WoundSewn();



        GameObject.Find("Canvas").transform.Find("InGamePanels/SewingWound/Button").gameObject.SetActive(true);

        
        needleItem.activeGameobject.transform.Find("Cut/CutSewn").gameObject.SetActive(true);
        needleItem.activeGameobject.GetComponent<Image>().enabled = false;
        

        yield return new WaitForSeconds(1.5f);


        Debug.Log("Game finished!");

    }

    public void MouseDown()
    {
        carlygalvan = true;
    }

    public void MouseUp()
    {
        carlygalvan = false;
    }

    void Update()
    {
        if (carlygalvan)
        {
            Vector3 screenPoint = (Vector3)Input.mousePosition;
            screenPoint.z = 100f;

            
            if (screenPoint.y >= topLimit.y)
                screenPoint.y = topLimit.y;

            elnorahouse.transform.position = Vector3.Lerp(elnorahouse.transform.position, Camera.main.ScreenToWorldPoint(screenPoint), belindabritton * Time.deltaTime);

            if (Vector3.Distance(elnorahouse.transform.position, Camera.main.ScreenToWorldPoint(screenPoint)) > 2f)
                elnorahouse.GetComponent<BoxCollider2D>().enabled = false;
            else
                elnorahouse.GetComponent<BoxCollider2D>().enabled = true;
        }
    }
}
