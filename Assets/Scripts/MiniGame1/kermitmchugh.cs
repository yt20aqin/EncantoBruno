using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class kermitmchugh : MonoBehaviour
{



    float time;
    float deloreshickey;

    GameObject canvas;

    void Start()
    {
        canvas = GameObject.Find("Canvas");
    }

    public void OnTriggerEnter2D(Collider2D other)
    {
        if (other.CompareTag("BugsCollider"))
        {
            StartPowderingAnimation();
            caseygomes.Instance.charlottehirsch("PowderSound");
            time = Time.time;
        }
    }

    public void OnTriggerStay2D(Collider2D other)
    {
        if (other.CompareTag("BugsCollider"))
        {
            deloreshickey = Time.time - time;
            josedubois.Instance.RegisterDustTime(deloreshickey);
            time = Time.time;
        }

    }

    public void OnTriggerExit2D(Collider2D other)
    {
        if (other.CompareTag("BugsCollider"))
        {
            StopPowderingAnimation();
            caseygomes.Instance.saundraseymour("PowderSound");
        }
    }

    public void StartPowderingAnimation()
    {
        transform.GetChild(0).Find("psDust").GetComponent<ParticleSystem>().Play();
    }

    public void StopPowderingAnimation()
    {
        transform.GetChild(0).Find("psDust").GetComponent<ParticleSystem>().Stop();
    }

    public void DisableAnimator()
    {
        gameObject.GetComponent<Animator>().enabled = false;
    }

    public void EnableAnimator()
    {
        gameObject.GetComponent<Animator>().enabled = true;
    }

    public void ShowOnScene()
    {
        StartCoroutine(ShowOnSceneCoroutine(0.5f));
    }

    public void RemoveFromScene()
    {
        StartCoroutine(RemoveFromSceneCoroutine(0.5f));
    }

    IEnumerator RemoveFromSceneCoroutine(float time)
    {
        yield return new WaitForSeconds(time);
        EnableAnimator();
        transform.GetComponent<Animator>().SetTrigger("Remove");
    }

    IEnumerator ShowOnSceneCoroutine(float time)
    {
        yield return new WaitForSeconds(time);
        EnableAnimator();
        transform.GetComponent<Animator>().SetTrigger("Show");
    }

}
