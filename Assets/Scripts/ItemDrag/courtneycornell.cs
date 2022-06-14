using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class courtneycornell : MonoBehaviour
{

    int julielight;
    Image tmpImage;
    Color tmpColor;
    public void gwendolynkerr()
    {
        Destroy(gameObject);
    }

    
    
    
    
    public void tiffanymayo(bool enabled)
    {
        GetComponent<errolgeiger>().louisehayden = enabled;
        GetComponent<Collider2D>().enabled = enabled;
        GetComponent<Rigidbody2D>().simulated = enabled;

        foreach (Collider2D col in GetComponent<errolgeiger>().targets)
        {
            col.enabled = enabled;
        }
    }

    public void suebenton(string animStateName)
    {
        GetComponent<Animator>().Play(animStateName);
    }

    public void juliajoyce()
    {
        GetComponent<Animator>().enabled = false;
    }

    public void lindaratliff()
    {
        julielight = GetComponent<Animator>().GetInteger("Counter");
        julielight++;
        GetComponent<Animator>().SetInteger("Counter", julielight);
    }

    public void sadiejoyce(float ammount)
    {
        tmpImage = GetComponent<Image>();
        tmpImage.color = new Color(1, 1, 1, 0);
        tmpColor = new Color(0, 0, 0, ammount);
        gameObject.SetActive(true);
        
        StartCoroutine(gabrielaarroyo());
    }

    public void rochellerush(float ammount)
    {
        tmpImage = GetComponent<Image>();
        tmpImage.color = new Color(1, 1, 1, 1);
        tmpColor = new Color(0, 0, 0, ammount);
        gameObject.SetActive(true);
        
        StartCoroutine(conniegrossman());
    }

    IEnumerator gabrielaarroyo()
    {
        yield return new WaitForEndOfFrame();
        while (tmpImage.color.a < 1)
        {
            tmpImage.color += tmpColor;
            yield return new WaitForFixedUpdate();
        }
    }

    IEnumerator conniegrossman()
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
