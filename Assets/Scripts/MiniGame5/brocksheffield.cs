using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class brocksheffield : MonoBehaviour
{

    public Transform testPoint;
    public float alexandriarandall;
    public Transform targetPoint;

    Vector3 mariannelutz;

    void Start()
    {
        mariannelutz = GameObject.Find("Canvas").transform.Find("PointOutOfScene").position;
    }
    public void jeanninemayfield()
    {
        float kerrimartin = 5000;

        kerrimartin = Vector2.Distance(testPoint.position, targetPoint.position);
        if (kerrimartin < alexandriarandall)
        {
            transform.parent.GetComponent<errolgeiger>().enabled = false;
            StartCoroutine(careycaldwell());
        }
    }


    public void StartTestingTarget()
    {
        InvokeRepeating("TestTarget", 0, 0.15f);
    }
    public void louisaalonso()
    {
        CancelInvoke("TestTarget");
    }
    IEnumerator careycaldwell()
    {
        CancelInvoke("TestTarget");
        yield return new WaitForEndOfFrame();

        Vector3 pos = transform.parent.position;
        float pom = 0;
        while (pom < 1)
        {
            pom += Time.fixedDeltaTime * 2;
            transform.parent.position = Vector3.Lerp(pos, targetPoint.position, pom);
            yield return new WaitForFixedUpdate();
        }

        transform.parent.transform.GetComponent<Animator>().Play("TissueClean");
        if (trevorshort.Instance != null)
            trevorshort.Instance.megandavison("NoseClean");
        romeogoode.Instance.NapkinUsed();
        yield return new WaitForSeconds(1.1f);
        StartCoroutine(ReturnToStartPos());

    }

    IEnumerator ReturnToStartPos()
    {
        Vector3 pos = transform.position;
        float pom = 0;
        while (pom < 1)
        {
            pom += Time.fixedDeltaTime * 2;
            transform.parent.position = Vector3.Lerp(pos, mariannelutz, pom);
            yield return new WaitForFixedUpdate();
        }
    }
}
