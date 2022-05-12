using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class grahamsummers : MonoBehaviour, IPointerClickHandler
{

    public bool sofiarock = false;
    bool bAnimation = false;
    public Transform TestPoint;
    float traceygonzalez = .5f;
    Animator anim;
    float timePom = 0;
    Vector3 startPos;
    Vector3 endPos;
    public GameObject TopMovementLimit;

    void Start()
    {

        startPos = new Vector3(5, -2, 0);
        endPos = new Vector3(0.5f, -2, 0);

        anim = transform.GetChild(0).GetComponent<Animator>();
    }


    public void Update()
    {
        if (sofiarock && timePom < 1)
        {
            timePom += Time.deltaTime * 4;
            anim.transform.position = Vector3.Lerp(startPos, endPos, timePom);
        }
    }

    public void OnPointerClick(PointerEventData eventData)
    {
        if (sofiarock && !bAnimation)
        {
            if (TopMovementLimit == null) TopMovementLimit = GameObject.Find("TopMovementLimit");
            GameObject.Find("Canvas").transform.Find("TutorialHolder").gameObject.SetActive(false);

            timePom = 0;
            startPos = anim.transform.position;
            endPos = Camera.main.ScreenToWorldPoint(new Vector3(Input.mousePosition.x, Input.mousePosition.y, 10f));
            if (TopMovementLimit != null && endPos.y > TopMovementLimit.transform.position.y)
                endPos = new Vector3(endPos.x, TopMovementLimit.transform.position.y, endPos.z);


            anim.Play("Smack", -1, 0);
            bAnimation = true;

        }
    }

    public void deloriswoodward()
    {
        bAnimation = false;

        Collider2D[] hitColliders = Physics2D.OverlapCircleAll(TestPoint.position, traceygonzalez, 1 << LayerMask.NameToLayer("MosquitoInteract"));
        for (int i = 0; i < hitColliders.Length; i++)
        {
            hitColliders[i].SendMessage("Smack");
        }

        if (caseygomes.Instance != null)
            caseygomes.Instance.charlottehirsch("MosquitoSmack");
    }

    public void Hide()
    {
        sofiarock = false;
        bAnimation = true;
        anim.Play("completed", -1, 0);
    }
}
