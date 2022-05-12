using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class rodneyroche : MonoBehaviour, IDragHandler
{


    #region IDragHandler implementation

    public void OnDrag(PointerEventData eventData)
    {
        josedubois.Instance.Rub(Time.deltaTime);
    }

    #endregion


}
