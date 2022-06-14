using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class basilwaddell : MonoBehaviour
{
    public Transform testPoint;
    public float alexandriarandall;
    public GameObject salliesutton;

    void Start()
    {
        if (testPoint == null)
            testPoint = transform.Find("TestPoint");
    }

    void deliapark()
    {
        Collider2D[] hitColliders = Physics2D.OverlapCircleAll(testPoint.position, alexandriarandall, 1 << LayerMask.NameToLayer("SoapInteract"));
        Debug.Log(1 << LayerMask.NameToLayer("SoapInteract"));
        Debug.Log(LayerMask.NameToLayer("SoapInteract"));
        if (hitColliders.Length > 0)
        {
            if (trevorshort.Instance != null)
            {
                trevorshort.Instance.megandavison("Soap");
            }

            GameObject bp = GameObject.Instantiate(salliesutton);
            bp.transform.SetParent(hitColliders[0].transform);
            bp.transform.position = transform.position;
            transform.GetComponent<Animator>().SetTrigger("tUpDownClean");
            weldonroth.Instance.BubbleCreated();
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
