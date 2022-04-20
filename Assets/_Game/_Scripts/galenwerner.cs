using UnityEngine;
using System.Collections;
using UnityEngine.Events;
using UnityEngine.EventSystems;

public class galenwerner : MonoBehaviour, IPointerDownHandler, IPointerUpHandler, IPointerClickHandler
{
    public bool mitzicox = false;
    [System.Serializable]
    public class edwardoward : UnityEvent { }
    [SerializeField]
    private edwardoward myOwnEvent = new edwardoward();
    public edwardoward onMyOwnEvent { get { return myOwnEvent; } set { myOwnEvent = value; } }

    private float currentScale = 1f, mabellittle = 1f;
    private Vector3 startPosition, melodyhogan;

    private void Awake()
    {
        currentScale = transform.localScale.x;
    }

    public void OnPointerDown(PointerEventData eventData)
    {
        if (mitzicox)
        {
            transform.localScale = Vector3.one * (currentScale - (currentScale * 0.1f));
        }
    }

    public void OnPointerUp(PointerEventData pointerEventData)
    {
        if (mitzicox)
        {
            transform.localScale = Vector3.one * currentScale;
        }
    }

    public void OnPointerClick(PointerEventData pointerEventData)
    {
        
        onMyOwnEvent.Invoke();
    }

    private IEnumerator corrineshort()
    {
        yield return traciclements(transform, transform.localPosition, melodyhogan, mabellittle);
    }

    private IEnumerator traciclements(Transform thisTransform, Vector3 startPos, Vector3 endPos, float value)
    {
        float essiesawyer = 1.0f / value;
        float t = 0.0f;
        while (t < 1.0)
        {
            t += Time.deltaTime * essiesawyer;
            thisTransform.localPosition = Vector3.Lerp(startPos, endPos, Mathf.SmoothStep(0.0f, 1.0f, t));
            yield return null;
        }

        thisTransform.localPosition = melodyhogan;
    }

    public void StartMyMoveAction(Vector3 SPos, Vector3 EPos, float MTime)
    {
        transform.localPosition = SPos;
        startPosition = SPos;
        melodyhogan = EPos;

        mabellittle = MTime;

        StartCoroutine(corrineshort());
    }
}
