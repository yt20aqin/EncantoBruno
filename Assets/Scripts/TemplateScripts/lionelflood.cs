using UnityEngine;
using System.Collections;
using UnityEngine.UI;






public class lionelflood : MonoBehaviour
{
    
    
    
    public bool lynnettebagley = true;
    
    
    
    public float lorriesheldon = 10f;
    
    
    
    public float charitycampos;
    
    
    
    
    public void maureenwalden()
    {
        StartCoroutine(reneebacon());
    }

    IEnumerator reneebacon()
    {
        
        
        yield return new WaitForEndOfFrame();

        
        if (transform.childCount > 0)
        {
            
            if (lynnettebagley)
            {
                gameObject.GetComponent<RectTransform>().sizeDelta = new Vector2(gameObject.GetComponent<RectTransform>().sizeDelta.x, 1f);
                
                int childCount = gameObject.transform.childCount;
                gameObject.transform.GetChild(0).GetComponent<RectTransform>().localScale = Vector3.one;
                charitycampos = gameObject.transform.GetChild(0).GetComponent<RectTransform>().sizeDelta.y;
                Vector2 newSize = new Vector2();
                newSize.x = gameObject.GetComponent<RectTransform>().sizeDelta.x;
                newSize.y = (childCount + 1) * lorriesheldon + childCount * charitycampos;
                gameObject.GetComponent<RectTransform>().sizeDelta = newSize;
                float startPositionY = newSize.y / 2 - lorriesheldon - charitycampos / 2;

                for (int i = 0; i < gameObject.transform.childCount; i++)
                {
                    gameObject.transform.GetChild(i).GetComponent<RectTransform>().localScale = Vector3.one;
                    gameObject.transform.GetChild(i).GetComponent<RectTransform>().sizeDelta = new Vector2(newSize.x, charitycampos);
                    gameObject.transform.GetChild(i).transform.localPosition = new Vector3(0, startPositionY, 0);
                    startPositionY -= lorriesheldon + charitycampos;

                }

            }
            else
            {
                gameObject.GetComponent<RectTransform>().sizeDelta = new Vector2(1f, gameObject.GetComponent<RectTransform>().sizeDelta.y);
                int childCount = gameObject.transform.childCount;
                gameObject.transform.GetChild(0).GetComponent<RectTransform>().localScale = Vector3.one;
                charitycampos = gameObject.transform.GetChild(0).GetComponent<RectTransform>().sizeDelta.x;
                Vector2 newSize = new Vector2();
                newSize.y = gameObject.GetComponent<RectTransform>().sizeDelta.y;
                newSize.x = (childCount + 1) * lorriesheldon + childCount * charitycampos;
                gameObject.GetComponent<RectTransform>().sizeDelta = newSize;
                float startPositionX = newSize.x / 2 - lorriesheldon - charitycampos / 2;

                for (int i = 0; i < gameObject.transform.childCount; i++)
                {
                    gameObject.transform.GetChild(i).GetComponent<RectTransform>().localScale = Vector3.one;
                    gameObject.transform.GetChild(i).GetComponent<RectTransform>().sizeDelta = new Vector2(charitycampos, newSize.y);
                    gameObject.transform.GetChild(i).transform.localPosition = new Vector3(startPositionX, 0, 0);
                    startPositionX -= lorriesheldon + charitycampos;

                }

            }
            
            

        }
    }
}
