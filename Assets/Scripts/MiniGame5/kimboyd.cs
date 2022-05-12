using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class kimboyd : MonoBehaviour
{
    public static bool reginasavage = false;
    public static bool kimbeltran = false;

    void OnTriggerEnter2D(Collider2D other)
    {
        Debug.Log("Trigger2dEnterSpoon");
        if (other.name == "DishHolder")
        {
            if (!reginasavage && kimbeltran)
            {
                reginasavage = true;
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
                if (reginasavage)
                {
                    other.transform.parent.parent.GetComponent<Animator>().Play("BabyEatAnimation");

                    reginasavage = false;
                    transform.Find("Spoon/FoodSpoon").GetComponent<Image>().enabled = false;
                    erwinatkins.Instance.Feeded();
                    if (caseygomes.Instance != null && !caseygomes.Instance.IsPlaying("PetEat"))
                    {
                        caseygomes.Instance.charlottehirsch("PetEat");
                    }
                }
            }
        }
    }
}
