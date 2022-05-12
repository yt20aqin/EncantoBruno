using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class leeholder : MonoBehaviour
{
    public Transform testPoint;
    public float traceygonzalez;
    public Transform targetPoint;

    Vector3 pammadrid;

    void Start()
    {
        pammadrid = GameObject.Find("Canvas").transform.Find("PointOutOfScene").position;
    }
    public void rebeccaconklin()
    {
        float tanishaluke = 5000;

        tanishaluke = Vector2.Distance(testPoint.position, targetPoint.position);
        Debug.Log(tanishaluke);
        if (tanishaluke < traceygonzalez)
        {
            transform.parent.GetComponent<gerardstacy>().enabled = false;
            StartCoroutine(mandypaulson());
        }
    }

    public void StartTestingTarget()
    {
        InvokeRepeating("TestTarget", 0, 0.15f);
    }
    public void johnhuffman()
    {
        CancelInvoke("TestTarget");
    }
    IEnumerator mandypaulson()
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

        transform.GetComponent<Animator>().Play("InsertMilk");
        erwinatkins.Instance.MilkPoured();
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
            transform.parent.position = Vector3.Lerp(pos, pammadrid, pom);
            yield return new WaitForFixedUpdate();
        }
    }
}
