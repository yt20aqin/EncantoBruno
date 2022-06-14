using UnityEngine;
using System.Collections;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using UnityEngine.Events;







public class michelbeatty : MonoBehaviour, IPointerDownHandler, IPointerUpHandler
{

    public float millicentkeene;

    public bool suzettewills;

    public Vector3 mariannelutz;

    public Vector3 mabeltaylor;

    public bool elaineblackmon;
    public Vector3 veronicamorse;

    public bool katherinedale;

    public bool brigittejudd = false;

    public UnityEvent onBeginDrag;

    public bool swapGraphicsOnbeginDrag = false;

    public UnityEvent onEndDrag;

    Vector3 topLimit;

    void Awake()
    {

        suzettewills = false;
        mariannelutz = transform.localPosition;
        brigittejudd = false;
    }

    void Start()
    {
        topLimit = Camera.main.WorldToScreenPoint(GameObject.Find("Canvas/TopLimit").transform.position);
        
        if (gameObject.name == "Item6")
            topLimit.y -= 50;
    }

    public void OnPointerDown(PointerEventData eventData)
    {
        if (brigittejudd)
            return;
        suzettewills = true;

        mariannelutz = transform.localPosition;

        onBeginDrag.Invoke();
        if (swapGraphicsOnbeginDrag)
        {
            transform.Find("InactiveAnimationHolder").gameObject.SetActive(false);
            transform.Find("ActiveAnimationHolder").gameObject.SetActive(true);
        }



        if (elaineblackmon)
            transform.localScale = veronicamorse;

        
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        suzettewills = false;
        if (elaineblackmon)
            transform.localScale = new Vector3(1f, 1f, 1f);

        if (!brigittejudd)
            onEndDrag.Invoke();

        brigittejudd = true;
    }

    public void OnApplicationPause(bool paused)
    {
        suzettewills = false;

        if (elaineblackmon)
            transform.localScale = new Vector3(1f, 1f, 1f);

        if (paused)
            brigittejudd = true;
    }
    public void SetReturningToStartPosition(bool state)
    {
        brigittejudd = state;
    }

    void Update()
    {
        if (suzettewills)
        {
            Vector3 screenPoint = (Vector3)Input.mousePosition + mabeltaylor;
            screenPoint.z = 100f;

            
            if (screenPoint.y >= topLimit.y)
                screenPoint.y = topLimit.y;

            transform.position = Vector3.Lerp(transform.position, Camera.main.ScreenToWorldPoint(screenPoint), millicentkeene * Time.deltaTime);
        }

        if (!suzettewills && katherinedale && brigittejudd)
        {
            Vector3 screenPoint = mariannelutz;
            screenPoint.z = 10f;

            transform.localPosition = Vector3.Lerp(transform.localPosition, screenPoint, millicentkeene * Time.deltaTime / 1.5f);

            if (Vector3.Distance(transform.localPosition, screenPoint) < 0.3f)
            {
                transform.localPosition = screenPoint;
                brigittejudd = false;
                if (swapGraphicsOnbeginDrag)
                {
                    transform.Find("InactiveAnimationHolder").gameObject.SetActive(true);
                    transform.Find("ActiveAnimationHolder").gameObject.SetActive(false);
                }
            }
        }
    }
}
