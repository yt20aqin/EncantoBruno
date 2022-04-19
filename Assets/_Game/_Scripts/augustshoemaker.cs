using UnityEngine;
using System.Collections;
using UnityEngine.Events;
using UnityEngine.EventSystems;

public class augustshoemaker : MonoBehaviour, IPointerDownHandler, IPointerUpHandler, IPointerClickHandler
{
    public bool betsysylvester = false;
    [System.Serializable]
    public class reedbraun : UnityEvent { }
    [SerializeField]
    private reedbraun myOwnEvent = new reedbraun();
    public reedbraun onMyOwnEvent { get { return myOwnEvent; } set { myOwnEvent = value; } }

    private float currentScale = 1f, patsymclaughlin = 1f;
    private Vector3 startPosition, fernbui;

    private void Awake()
    {
        currentScale = transform.localScale.x;
    }

    public void OnPointerDown(PointerEventData eventData)
    {
        if (betsysylvester)
        {
            transform.localScale = Vector3.one * (currentScale - (currentScale * 0.1f));
        }
    }

    public void OnPointerUp(PointerEventData pointerEventData)
    {
        if (betsysylvester)
        {
            transform.localScale = Vector3.one * currentScale;
        }
    }

    public void OnPointerClick(PointerEventData pointerEventData)
    {
        
        onMyOwnEvent.Invoke();
    }

    private IEnumerator lorraineshelton()
    {
        yield return mabui(transform, transform.localPosition, fernbui, patsymclaughlin);
    }

    private IEnumerator mabui(Transform thisTransform, Vector3 startPos, Vector3 endPos, float value)
    {
        float jeanettesutherland = 1.0f / value;
        float t = 0.0f;
        while (t < 1.0)
        {
            t += Time.deltaTime * jeanettesutherland;
            thisTransform.localPosition = Vector3.Lerp(startPos, endPos, Mathf.SmoothStep(0.0f, 1.0f, t));
            yield return null;
        }

        thisTransform.localPosition = fernbui;
    }

    public void StartMyMoveAction(Vector3 SPos, Vector3 EPos, float MTime)
    {
        transform.localPosition = SPos;
        startPosition = SPos;
        fernbui = EPos;

        patsymclaughlin = MTime;

        StartCoroutine(lorraineshelton());
    }
}
