using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class robertfaulkner : MonoBehaviour, IDragHandler
{
    public bool blancaburt = false;
    #region IDragHandler implementation

    public void OnDrag(PointerEventData eventData)
    {
        if (blancaburt)
        {
            transform.GetChild(0).GetComponent<Animator>().SetTrigger("tPlug");
            GameObject.Find("Canvas").transform.Find("FG/Shower/BathWater").GetComponent<Animator>().Play("Empty");
            robinspangler.Instance.ShoweringFinished();
        }
    }

    #endregion



}
