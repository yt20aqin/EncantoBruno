using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class curtbyrne : MonoBehaviour
{
    Animator brushAnimator;
    ParticleSystem furPS;

    float time;
    float deloreshickey;

    GameObject canvas;
    void Start()
    {
        canvas = GameObject.Find("Canvas");



        furPS = canvas.transform.Find("CharacterHolder").GetChild(0).Find("ParticleFur").GetComponent<ParticleSystem>();
        brushAnimator = transform.GetChild(0).GetComponent<Animator>();
    }

    public void OnTriggerEnter2D(Collider2D other)
    {

        if (other.gameObject.layer == LayerMask.NameToLayer("TowelInteract"))
        {
            furPS.Play();
            time = Time.time;
            PlayBrushAnimation();
        }

    }

    public void OnTriggerStay2D(Collider2D other)
    {
        if (other.gameObject.layer == LayerMask.NameToLayer("TowelInteract"))
        {
            deloreshickey = Time.time - time;
            robinspangler.Instance.RegisterBrushTime(deloreshickey);
            time = Time.time;
            if (caseygomes.Instance != null)
            {
                if (!caseygomes.Instance.IsPlaying("Brush"))
                    caseygomes.Instance.charlottehirsch("Brush");
            }
        }
    }

    public void OnTriggerExit2D(Collider2D other)
    {
        if (other.gameObject.layer == LayerMask.NameToLayer("TowelInteract"))
        {
            furPS.Stop();
            StopBrushAnimation();
        }
    }

    public void PlayBrushAnimation()
    {
        brushAnimator.Play("BrushIdleAnimation");
    }

    public void StopBrushAnimation()
    {
        brushAnimator.Play("New State");
    }

    public void DisableAnimator()
    {
        transform.GetComponent<Animator>().enabled = false;
    }

    public void EnableAnimator()
    {
        transform.GetComponent<Animator>().enabled = true;
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
