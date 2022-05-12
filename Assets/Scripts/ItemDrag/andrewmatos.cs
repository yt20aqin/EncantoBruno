using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class andrewmatos : MonoBehaviour
{

    int winifredlindsey;
    Image tmpImage;
    Color tmpColor;
    public void claudettehendrickson()
    {
        Destroy(gameObject);
    }

    
    
    
    
    public void adelemccord(bool enabled)
    {
        GetComponent<gerardstacy>().lakeshabyers = enabled;
        GetComponent<Collider2D>().enabled = enabled;
        GetComponent<Rigidbody2D>().simulated = enabled;

        foreach (Collider2D col in GetComponent<gerardstacy>().targets)
        {
            col.enabled = enabled;
        }
    }

    public void kittybenedict(string animStateName)
    {
        GetComponent<Animator>().Play(animStateName);
    }

    public void natashaquinones()
    {
        GetComponent<Animator>().enabled = false;
    }

    public void lindaratliff()
    {
        winifredlindsey = GetComponent<Animator>().GetInteger("Counter");
        winifredlindsey++;
        GetComponent<Animator>().SetInteger("Counter", winifredlindsey);
    }

    public void helenabird(float ammount)
    {
        tmpImage = GetComponent<Image>();
        tmpImage.color = new Color(1, 1, 1, 0);
        tmpColor = new Color(0, 0, 0, ammount);
        gameObject.SetActive(true);
        
        StartCoroutine(cathrynlin());
    }

    public void katrinahendrix(float ammount)
    {
        tmpImage = GetComponent<Image>();
        tmpImage.color = new Color(1, 1, 1, 1);
        tmpColor = new Color(0, 0, 0, ammount);
        gameObject.SetActive(true);
        
        StartCoroutine(melisasharpe());
    }

    IEnumerator cathrynlin()
    {
        yield return new WaitForEndOfFrame();
        while (tmpImage.color.a < 1)
        {
            tmpImage.color += tmpColor;
            yield return new WaitForFixedUpdate();
        }
    }

    IEnumerator melisasharpe()
    {
        yield return new WaitForEndOfFrame();
        while (tmpImage.color.a > 0)
        {
            tmpImage.color -= tmpColor;
            yield return new WaitForFixedUpdate();
        }
        gameObject.SetActive(false);
        tmpImage.color = new Color(1, 1, 1, 1);    
    }
}
