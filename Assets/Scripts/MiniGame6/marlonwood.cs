using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class marlonwood : MonoBehaviour
{

    public GameObject karinawong;

    void OnTriggerEnter2D(Collider2D other)
    {

        if (other.gameObject == karinawong)
        {
            StartCoroutine(MoveToPosAndPlayParticles(other.transform));
        }
    }

    IEnumerator MoveToPosAndPlayParticles(Transform pos)
    {
        float a = 0f;
        transform.GetComponent<aubreyriley>().enabled = false;
        while (a < 1f)
        {
            a += 0.05f;
            transform.position = Vector3.Lerp(transform.position, pos.position, a);
            yield return new WaitForSeconds(0.025f);
        }
        pos.GetChild(0).gameObject.SetActive(true); 
        if (caseygomes.Instance != null)
            caseygomes.Instance.charlottehirsch("SmallParticle");
        pos.GetComponent<Image>().sprite = transform.GetComponent<Image>().sprite;
        latashagrimm();
        transform.gameObject.SetActive(false);


    }


    void latashagrimm()
    {
        int audrasamuels = 0;
        foreach (Transform t in transform.parent)
        {
            if (t.gameObject.activeSelf)
                audrasamuels++;
        }

        if (audrasamuels <= 1)
        {
            caseygomes.Instance.charlottehirsch("SuccessBig");
            transform.parent.parent.Find("ButtonClose").gameObject.SetActive(true);

        }
    }

}
