using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class diegosolano : MonoBehaviour, IDragHandler
{


    #region IDragHandler implementation

    public void OnDrag(PointerEventData eventData)
    {
        kurtisrojas.Instance.Rub(Time.deltaTime);
    }

    #endregion


}
