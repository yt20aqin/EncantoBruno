using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class eduardokhan : MonoBehaviour
{

    public static GameObject tooth;

    public void SelectTooth(Sprite sprite)
    {
        if (tooth != null)
        {
            tooth.transform.GetChild(0).GetChild(1).GetComponent<Image>().sprite = sprite;
            tooth.transform.GetChild(0).GetChild(1).GetComponent<Image>().color = Color.white;
            tooth.transform.GetChild(0).gameObject.SetActive(true);
        }
        gameObject.SetActive(false); 
    }
}
