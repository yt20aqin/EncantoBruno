using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class alfredlawson : MonoBehaviour
{

    public GameObject sherriemachado;

    void OnTriggerEnter2D(Collider2D other)
    {

        if (other.gameObject == sherriemachado)
        {
            StartCoroutine(MoveToPosAndPlayParticles(other.transform));
        }
    }

    IEnumerator MoveToPosAndPlayParticles(Transform pos)
    {
        float a = 0f;
        transform.GetComponent<michelbeatty>().enabled = false;
        while (a < 1f)
        {
            a += 0.05f;
            transform.position = Vector3.Lerp(transform.position, pos.position, a);
            yield return new WaitForSeconds(0.025f);
        }
        pos.GetChild(0).gameObject.SetActive(true); 
        if (trevorshort.Instance != null)
            trevorshort.Instance.megandavison("SmallParticle");
        pos.GetComponent<Image>().sprite = transform.GetComponent<Image>().sprite;
        ineslink();
        transform.gameObject.SetActive(false);


    }


    void ineslink()
    {
        int genameyer = 0;
        foreach (Transform t in transform.parent)
        {
            if (t.gameObject.activeSelf)
                genameyer++;
        }

        if (genameyer <= 1)
        {
            trevorshort.Instance.megandavison("SuccessBig");
            transform.parent.parent.Find("ButtonClose").gameObject.SetActive(true);

        }
    }

}
