using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class bryantyarbrough : MonoBehaviour
{
    public Transform testPoint;
    public float traceygonzalez;
    public GameObject opalnicholas;

    void Start()
    {
        if (testPoint == null)
            testPoint = transform.Find("TestPoint");
    }

    void stellajustice()
    {
        Collider2D[] hitColliders = Physics2D.OverlapCircleAll(testPoint.position, traceygonzalez, 1 << LayerMask.NameToLayer("SoapInteract"));
        Debug.Log(1 << LayerMask.NameToLayer("SoapInteract"));
        Debug.Log(LayerMask.NameToLayer("SoapInteract"));
        if (hitColliders.Length > 0)
        {
            if (caseygomes.Instance != null)
            {
                caseygomes.Instance.charlottehirsch("Soap");
            }

            GameObject bp = GameObject.Instantiate(opalnicholas);
            bp.transform.SetParent(hitColliders[0].transform);
            bp.transform.position = transform.position;
            transform.GetComponent<Animator>().SetTrigger("tUpDownClean");
            robinspangler.Instance.BubbleCreated();
        }
    }

    public void StartMakingBubbles()
    {
        InvokeRepeating("CreateBubbles", 0f, .25f);
    }

    public void StopMakingBubbles()
    {
        transform.GetComponent<Animator>().ResetTrigger("tUpDownClean");
        transform.GetComponent<Animator>().Play("default");
        CancelInvoke("CreateBubbles");

    }
}
