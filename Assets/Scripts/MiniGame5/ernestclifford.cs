using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ernestclifford : MonoBehaviour
{
    public static bool holliebray = false;
    public static bool rosalyncartwright = false;

    void OnTriggerEnter2D(Collider2D other)
    {
        Debug.Log("Trigger2dEnterSpoon");
        if (other.name == "DishHolder")
        {
            if (!holliebray && rosalyncartwright)
            {
                holliebray = true;
                transform.Find("Spoon/FoodSpoon").GetComponent<Image>().enabled = true;
                Vector3 prevPos = other.transform.Find("Dish/DishFood5").GetComponent<RectTransform>().anchoredPosition3D;
                prevPos.y -= 5;
                other.transform.Find("Dish/DishFood5").GetComponent<RectTransform>().anchoredPosition3D = prevPos;
            }
        }
        else
        {
            if (other.name == "MouthHolder")
            {
                if (holliebray)
                {
                    other.transform.parent.parent.GetComponent<Animator>().Play("BabyEatAnimation");

                    holliebray = false;
                    transform.Find("Spoon/FoodSpoon").GetComponent<Image>().enabled = false;
                    romeogoode.Instance.Feeded();
                    if (trevorshort.Instance != null && !trevorshort.Instance.maryannsizemore("PetEat"))
                    {
                        trevorshort.Instance.megandavison("PetEat");
                    }
                }
            }
        }
    }
}
