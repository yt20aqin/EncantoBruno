using UnityEngine;
using System.Collections;
using UnityEngine.UI;






public class alimayfield : MonoBehaviour
{
    
    
    
    public bool catalinarankin = true;
    
    
    
    public float madgehuggins = 10f;
    
    
    
    public float albawilliam;
    
    
    
    
    public void sophiehay()
    {
        StartCoroutine(anastasianorwood());
    }

    IEnumerator anastasianorwood()
    {
        
        
        yield return new WaitForEndOfFrame();

        
        if (transform.childCount > 0)
        {
            
            if (catalinarankin)
            {
                gameObject.GetComponent<RectTransform>().sizeDelta = new Vector2(gameObject.GetComponent<RectTransform>().sizeDelta.x, 1f);
                
                int childCount = gameObject.transform.childCount;
                gameObject.transform.GetChild(0).GetComponent<RectTransform>().localScale = Vector3.one;
                albawilliam = gameObject.transform.GetChild(0).GetComponent<RectTransform>().sizeDelta.y;
                Vector2 newSize = new Vector2();
                newSize.x = gameObject.GetComponent<RectTransform>().sizeDelta.x;
                newSize.y = (childCount + 1) * madgehuggins + childCount * albawilliam;
                gameObject.GetComponent<RectTransform>().sizeDelta = newSize;
                float startPositionY = newSize.y / 2 - madgehuggins - albawilliam / 2;

                for (int i = 0; i < gameObject.transform.childCount; i++)
                {
                    gameObject.transform.GetChild(i).GetComponent<RectTransform>().localScale = Vector3.one;
                    gameObject.transform.GetChild(i).GetComponent<RectTransform>().sizeDelta = new Vector2(newSize.x, albawilliam);
                    gameObject.transform.GetChild(i).transform.localPosition = new Vector3(0, startPositionY, 0);
                    startPositionY -= madgehuggins + albawilliam;

                }

            }
            else
            {
                gameObject.GetComponent<RectTransform>().sizeDelta = new Vector2(1f, gameObject.GetComponent<RectTransform>().sizeDelta.y);
                int childCount = gameObject.transform.childCount;
                gameObject.transform.GetChild(0).GetComponent<RectTransform>().localScale = Vector3.one;
                albawilliam = gameObject.transform.GetChild(0).GetComponent<RectTransform>().sizeDelta.x;
                Vector2 newSize = new Vector2();
                newSize.y = gameObject.GetComponent<RectTransform>().sizeDelta.y;
                newSize.x = (childCount + 1) * madgehuggins + childCount * albawilliam;
                gameObject.GetComponent<RectTransform>().sizeDelta = newSize;
                float startPositionX = newSize.x / 2 - madgehuggins - albawilliam / 2;

                for (int i = 0; i < gameObject.transform.childCount; i++)
                {
                    gameObject.transform.GetChild(i).GetComponent<RectTransform>().localScale = Vector3.one;
                    gameObject.transform.GetChild(i).GetComponent<RectTransform>().sizeDelta = new Vector2(albawilliam, newSize.y);
                    gameObject.transform.GetChild(i).transform.localPosition = new Vector3(startPositionX, 0, 0);
                    startPositionX -= madgehuggins + albawilliam;

                }

            }
            
            

        }
    }
}
