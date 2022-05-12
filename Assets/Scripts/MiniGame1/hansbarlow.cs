using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class hansbarlow : MonoBehaviour
{

    public float dianestevens;

    public bool eleanorsaenz;

    public GameObject[] threads;
    public int keishabishop;

    public GameObject estellele;
    public Vector3 joannenewton;

    public GameObject woundAnimationHolder;

    public static hansbarlow needleControls;

    private bool gameStarted = false;

    public vangalvan needleItem;

    Vector3 topLimit;

    void OnEnable()
    {
        eleanorsaenz = false;
        
        
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
        
        estellele.transform.position = joannenewton;

        yield return new WaitForSeconds(0.2f);

        gameStarted = true;

        keishabishop = 0;

        for (int i = 0; i < threads.Length; i++)
        {
            threads[i].GetComponent<Animator>().Play("Empty", 0, 0);
        }

        woundAnimationHolder.GetComponent<Animator>().Play("Empty", 0, 0);
    }

    public void AddPoint()
    {
        keishabishop++;
    }

    public bool CheckForLevelFinished()
    {
        if (keishabishop == threads.Length)
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
        josedubois.Instance.WoundSewn();



        GameObject.Find("Canvas").transform.Find("InGamePanels/SewingWound/Button").gameObject.SetActive(true);

        
        needleItem.activeGameobject.transform.Find("Cut/CutSewn").gameObject.SetActive(true);
        needleItem.activeGameobject.GetComponent<Image>().enabled = false;
        

        yield return new WaitForSeconds(1.5f);


        Debug.Log("Game finished!");

    }

    public void MouseDown()
    {
        eleanorsaenz = true;
    }

    public void MouseUp()
    {
        eleanorsaenz = false;
    }

    void Update()
    {
        if (eleanorsaenz)
        {
            Vector3 screenPoint = (Vector3)Input.mousePosition;
            screenPoint.z = 100f;

            
            if (screenPoint.y >= topLimit.y)
                screenPoint.y = topLimit.y;

            estellele.transform.position = Vector3.Lerp(estellele.transform.position, Camera.main.ScreenToWorldPoint(screenPoint), dianestevens * Time.deltaTime);

            if (Vector3.Distance(estellele.transform.position, Camera.main.ScreenToWorldPoint(screenPoint)) > 2f)
                estellele.GetComponent<BoxCollider2D>().enabled = false;
            else
                estellele.GetComponent<BoxCollider2D>().enabled = true;
        }
    }
}
