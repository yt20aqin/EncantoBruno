using UnityEngine;
using System.Collections;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using UnityEngine.Events;







public class aubreyriley : MonoBehaviour, IPointerDownHandler, IPointerUpHandler
{

    public float katiebetts;

    public bool carynrichards;

    public Vector3 pammadrid;

    public Vector3 robertafoley;

    public bool audreylloyd;
    public Vector3 jasmineyang;

    public bool judithburton;

    public bool latoyamurray = false;

    public UnityEvent onBeginDrag;

    public bool swapGraphicsOnbeginDrag = false;

    public UnityEvent onEndDrag;

    Vector3 topLimit;

    void Awake()
    {

        carynrichards = false;
        pammadrid = transform.localPosition;
        latoyamurray = false;
    }

    void Start()
    {
        topLimit = Camera.main.WorldToScreenPoint(GameObject.Find("Canvas/TopLimit").transform.position);
        
        if (gameObject.name == "Item6")
            topLimit.y -= 50;
    }

    public void OnPointerDown(PointerEventData eventData)
    {
        if (latoyamurray)
            return;
        carynrichards = true;

        pammadrid = transform.localPosition;

        onBeginDrag.Invoke();
        if (swapGraphicsOnbeginDrag)
        {
            transform.Find("InactiveAnimationHolder").gameObject.SetActive(false);
            transform.Find("ActiveAnimationHolder").gameObject.SetActive(true);
        }



        if (audreylloyd)
            transform.localScale = jasmineyang;

        
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        carynrichards = false;
        if (audreylloyd)
            transform.localScale = new Vector3(1f, 1f, 1f);

        if (!latoyamurray)
            onEndDrag.Invoke();

        latoyamurray = true;
    }

    public void OnApplicationPause(bool paused)
    {
        carynrichards = false;

        if (audreylloyd)
            transform.localScale = new Vector3(1f, 1f, 1f);

        if (paused)
            latoyamurray = true;
    }
    public void SetReturningToStartPosition(bool state)
    {
        latoyamurray = state;
    }

    void Update()
    {
        if (carynrichards)
        {
            Vector3 screenPoint = (Vector3)Input.mousePosition + robertafoley;
            screenPoint.z = 100f;

            
            if (screenPoint.y >= topLimit.y)
                screenPoint.y = topLimit.y;

            transform.position = Vector3.Lerp(transform.position, Camera.main.ScreenToWorldPoint(screenPoint), katiebetts * Time.deltaTime);
        }

        if (!carynrichards && judithburton && latoyamurray)
        {
            Vector3 screenPoint = pammadrid;
            screenPoint.z = 10f;

            transform.localPosition = Vector3.Lerp(transform.localPosition, screenPoint, katiebetts * Time.deltaTime / 1.5f);

            if (Vector3.Distance(transform.localPosition, screenPoint) < 0.3f)
            {
                transform.localPosition = screenPoint;
                latoyamurray = false;
                if (swapGraphicsOnbeginDrag)
                {
                    transform.Find("InactiveAnimationHolder").gameObject.SetActive(true);
                    transform.Find("ActiveAnimationHolder").gameObject.SetActive(false);
                }
            }
        }
    }
}
