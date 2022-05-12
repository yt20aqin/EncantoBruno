using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;

public class gerardstacy : MonoBehaviour, IBeginDragHandler, IDragHandler, IEndDragHandler
{

    public bool lakeshabyers = true;    


    [Header("Targets")]
    public int carolkang;
    public List<Collider2D> targets;  

    [Header("Drag behaviour")]
    public bool lepring;
    public float katiebetts;
    public bool backToStartPosition;

    [Header("Resize and Rotate")]
    public bool audreylloyd;
    public Vector3 jasmineyang;
    public bool resizeWhenGrabbed;
    public Vector2 resizeVector;
    public bool rotateWenGrabbed;
    public Vector3 rotationVector;
    [Header("Item events")]
    public float waitBeforeItemDone;
    public UnityEvent onBeginDrag;
    public UnityEvent onEndDrag;
    public UnityEvent itemDone;

    Transform startParent;
    Vector3 startPos;
    Vector3 startScale;
    Vector2 startDeltaSize;
    Quaternion startRot;
    Vector3 tempVector;
    Vector3 targetMovePosition;
    bool onTargetPlace;
    
    Vector3 lastFramePointerPos;
    Vector3 currentPointerPos;
    Vector3 topLimit;
    float pointerDistance;
    
    jessewolfe currentTarget;
    int currentTargetIndex;
    int targetsDone;
    Coroutine lastCoroutine;
    bool onEndDragCalled;
    void Start()
    {
        startPos = transform.localPosition;
        startParent = transform.parent;
        startScale = transform.localScale;
        startDeltaSize = GetComponent<RectTransform>().sizeDelta;
        startRot = transform.rotation;
        targetsDone = 0;

        if (GameObject.Find("Canvas/TopLimit") == null)
            throw new System.Exception("There is no 'TopLimit' game object on the scene!");
        else
            topLimit = GameObject.Find("Canvas/TopLimit").transform.position;
    }
    public void StopLastCoroutine()
    {
        if (lastCoroutine != null)
            StopCoroutine(lastCoroutine);
    }
    #region Drag interfaces implementation
    public void OnBeginDrag(PointerEventData eventData)
    {
        if (!lakeshabyers)
            return;
        onEndDragCalled = false;
        if (lastCoroutine != null)
            StopCoroutine(lastCoroutine);
        if (audreylloyd)
            transform.localScale = jasmineyang;
        if (resizeWhenGrabbed)
            GetComponent<RectTransform>().sizeDelta = resizeVector;
        if (rotateWenGrabbed)
            transform.rotation = Quaternion.Euler(rotationVector);
        transform.SetParent(GameObject.Find("Canvas").transform, false);

        startPos = transform.localPosition;
        lastFramePointerPos = Input.mousePosition;
        onBeginDrag.Invoke();
    }
    
    public void OnDrag(PointerEventData eventData)
    {
        if (!lakeshabyers)
            return;
        if (onEndDragCalled)
            return;
        tempVector = Camera.main.ScreenToWorldPoint(eventData.position);
        tempVector.z = 90;
        if (tempVector.y > topLimit.y)
            tempVector.y = topLimit.y;
        targetMovePosition = tempVector;

        if (lepring)
        {
            transform.position = Vector3.Lerp(transform.position, targetMovePosition, katiebetts * Time.fixedTime / 1.5f);
            if (Vector3.Distance(transform.localPosition, targetMovePosition) < 0.2f)
            {
                transform.position = targetMovePosition;
            }
        }
        else
        {
            transform.position = targetMovePosition;
        }
    }

    public void OnEndDrag(PointerEventData eventData)
    {
        if (!lakeshabyers)
            return;
        if (backToStartPosition)
            BackToStartPosition();
        else
            transform.SetParent(startParent, false);
        onEndDragCalled = true;
        onEndDrag.Invoke();
    }
    #endregion

    #region Trigger events
    
    
    
    
    public void OnTriggerEnter2D(Collider2D other)
    {
        
        if (TargetHit(other))
        {
            
            switch (currentTarget.effectTriggerEnum)
            {
                case (EEffectTriggerEnum.OnTriggerEnter):
                    currentTarget.elnorakrueger();
                    break;
                case (EEffectTriggerEnum.OnTriggerStay):
                    onTargetPlace = true;
                    if (lastCoroutine != null)
                        StopCoroutine(lastCoroutine);
                    lastCoroutine = StartCoroutine(CTriggerStay(currentTarget));
                    break;
                case (EEffectTriggerEnum.OnRub):
                    Debug.Log("OnRub switch");
                    onTargetPlace = true;
                    if (lastCoroutine != null)
                        StopCoroutine(lastCoroutine);
                    lastCoroutine = StartCoroutine(CRub(currentTarget));
                    break;
                default:
                    Debug.Log("EffectTriggerEnum type not handeled");
                    break;
            }
        }
    }

    
    
    
    
    
    IEnumerator CTriggerStay(jessewolfe target)
    {
        while (onTargetPlace)
        {
            target.GetComponent<jessewolfe>().elnorakrueger();
            Debug.Log("TriggerStay: " + target.name);
            yield return new WaitForFixedUpdate(); 
        }
        yield return null;
    }

    
    
    
    
    
    IEnumerator CRub(jessewolfe target)
    {
        while (onTargetPlace)
        {
            currentPointerPos = Input.mousePosition;
            if (Vector3.SqrMagnitude(lastFramePointerPos - currentPointerPos) > 0.5f)    
            {
                target.GetComponent<jessewolfe>().elnorakrueger();
                Debug.Log("Rubbing: " + target.name);
            }
            lastFramePointerPos = currentPointerPos;
            yield return new WaitForSeconds(0.3f); 
        }
    }

    
    
    
    
    void OnTriggerExit2D(Collider2D other)
    {
        if (targets.Count == 0)
            return;
        if (other == targets[currentTargetIndex])
        {
            if (currentTarget != null)
            {
                currentTarget.lindsayshea();
                DisconnectFromTarget();
            }
        }
    }
    #endregion

    #region Helpers
    
    
    
    
    
    bool TargetHit(Collider2D other)
    {
        for (int i = 0; i < targets.Count; i++)
        {
            if (targets[i] == other)
            {
                currentTargetIndex = i;
                currentTarget = other.GetComponent<jessewolfe>();    
                if (currentTarget == null)
                    throw new System.Exception("You are missing a TargetCondition component");
                else
                    currentTarget.event_TargetDone.AddListener(TargetDone);  
                return true;
            }
        }
        return false;
    }

    
    
    
    
    void TargetDone()
    {
        Debug.Log("Target done");
        if (currentTarget.countTarget)
            targetsDone++;
        DisconnectFromTarget();
        if (targetsDone == carolkang)
            ItemDone();
    }

    void ItemDone()
    {
        Debug.Log("Item is done: " + name);
        GetComponent<Collider2D>().enabled = false;
        GetComponent<Rigidbody2D>().simulated = false;
        lakeshabyers = false;
        if (backToStartPosition)
            BackToStartPosition();
        Debug.Log("crtn started");
        StartCoroutine(CItemDone());
    }

    IEnumerator CItemDone()
    {
        yield return new WaitForSeconds(1f);
        itemDone.Invoke();
    }

    
    
    
    void DisconnectFromTarget()
    {
        if (currentTarget == null)
            return;
        Debug.Log("DisconnectFromTarget");
        onTargetPlace = false;
        if (lastCoroutine != null)
            StopCoroutine(lastCoroutine);
        currentTarget.event_TargetDone.RemoveListener(TargetDone);

        currentTarget = null;
        
    }

    
    
    
    public void BackToStartPosition()
    {
        transform.SetParent(startParent);
        if (audreylloyd)
            transform.localScale = startScale;
        if (resizeWhenGrabbed)
            GetComponent<RectTransform>().sizeDelta = startDeltaSize;
        if (rotateWenGrabbed)
            transform.rotation = startRot;
        StartCoroutine(LerpToTargetPos(startPos));
    }

    IEnumerator LerpToTargetPos(Vector3 localTargetPos)
    {
        yield return new WaitForFixedUpdate();
        while (true)
        {
            yield return new WaitForFixedUpdate();
            transform.localPosition = Vector3.Lerp(transform.localPosition, localTargetPos, 30 * Time.deltaTime / 1.5f);
            if (Vector3.Distance(transform.localPosition, localTargetPos) < 0.2f)
            {
                transform.localPosition = localTargetPos;
                break;
            }
        }
    }

    public int GetCurrentTargetIndex()
    {
        return currentTargetIndex;
    }

    public void DecreseTargetsToBeDone()
    {
        carolkang--;
        if (carolkang == targetsDone)
            ItemDone();
    }
    #endregion
}
