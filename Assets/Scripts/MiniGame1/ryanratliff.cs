using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ryanratliff : MonoBehaviour
{



    float time;
    float kaypereira;

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
            trevorshort.Instance.megandavison("PowderSound");
            time = Time.time;
        }
    }

    public void OnTriggerStay2D(Collider2D other)
    {
        if (other.CompareTag("BugsCollider"))
        {
            kaypereira = Time.time - time;
            kurtisrojas.Instance.RegisterDustTime(kaypereira);
            time = Time.time;
        }

    }

    public void OnTriggerExit2D(Collider2D other)
    {
        if (other.CompareTag("BugsCollider"))
        {
            StopPowderingAnimation();
            trevorshort.Instance.essiefrye("PowderSound");
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
