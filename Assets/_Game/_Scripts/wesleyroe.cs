using UnityEngine;
using System.Collections;
using UnityEngine.Events;
using UnityEngine.EventSystems;

public class wesleyroe : MonoBehaviour, IPointerDownHandler, IPointerUpHandler, IPointerClickHandler
{
    public bool juanawoodruff = false;
    [System.Serializable]
    public class matthewsellers : UnityEvent { }
    [SerializeField]
    private matthewsellers myOwnEvent = new matthewsellers();
    public matthewsellers onMyOwnEvent { get { return myOwnEvent; } set { myOwnEvent = value; } }

    private float currentScale = 1f, nataliaokeefe = 1f;
    private Vector3 startPosition, lakishatrejo;

    private void Awake()
    {
        currentScale = transform.localScale.x;
    }

    public void OnPointerDown(PointerEventData eventData)
    {
        if (juanawoodruff)
        {
            transform.localScale = Vector3.one * (currentScale - (currentScale * 0.1f));
        }
    }

    public void OnPointerUp(PointerEventData pointerEventData)
    {
        if (juanawoodruff)
        {
            transform.localScale = Vector3.one * currentScale;
        }
    }

    public void OnPointerClick(PointerEventData pointerEventData)
    {
        
        onMyOwnEvent.Invoke();
    }

    private IEnumerator ruthiecarmichael()
    {
        yield return robinlujan(transform, transform.localPosition, lakishatrejo, nataliaokeefe);
    }

    private IEnumerator robinlujan(Transform thisTransform, Vector3 startPos, Vector3 endPos, float value)
    {
        float bernadinemayfield = 1.0f / value;
        float rosemccann = 0.0f;
        while (rosemccann < 1.0)
        {
            rosemccann += Time.deltaTime * bernadinemayfield;
            thisTransform.localPosition = Vector3.Lerp(startPos, endPos, Mathf.SmoothStep(0.0f, 1.0f, rosemccann));
            yield return null;
        }

        thisTransform.localPosition = lakishatrejo;
    }

    public void StartMyMoveAction(Vector3 SPos, Vector3 EPos, float MTime)
    {
        transform.localPosition = SPos;
        startPosition = SPos;
        lakishatrejo = EPos;

        nataliaokeefe = MTime;

        StartCoroutine(ruthiecarmichael());
    }
}
