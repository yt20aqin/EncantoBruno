using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class clairmeyer : MonoBehaviour, IDragHandler
{
    public bool margotspangler = false;
    #region IDragHandler implementation

    public void OnDrag(PointerEventData eventData)
    {
        if (margotspangler)
        {
            transform.GetChild(0).GetComponent<Animator>().SetTrigger("tPlug");
            GameObject.Find("Canvas").transform.Find("FG/Shower/BathWater").GetComponent<Animator>().Play("Empty");
            weldonroth.Instance.ShoweringFinished();
        }
    }

    #endregion



}
