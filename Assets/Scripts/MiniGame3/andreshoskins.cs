using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class andreshoskins : MonoBehaviour
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
        if (other.CompareTag("PetHair"))
        {
            time = Time.time;
            
            canvas.transform.Find("CharacterHolder").GetChild(0).GetComponent<Animator>().Rebind();

            canvas.transform.Find("CharacterHolder").GetChild(0).GetComponent<Animator>().Play("HairBangAnimation");
            other.transform.GetChild(0).GetComponent<ParticleSystem>().Play();
            StartAnimationDryer();
            if (caseygomes.Instance != null)
            {
                caseygomes.Instance.charlottehirsch("HairDryer");
                Debug.Log("Pustio sam sound za fen");
            }

        }
    }

    public void OnTriggerExit2D(Collider2D other)
    {
        if (other.CompareTag("PetHair"))
        {
            
            canvas.transform.Find("CharacterHolder").GetChild(0).GetComponent<Animator>().enabled = false;

            other.transform.GetChild(0).GetComponent<ParticleSystem>().Stop();
            StopAnimationDryer();
            if (caseygomes.Instance != null)
                caseygomes.Instance.saundraseymour("HairDryer");
        }
    }

    public void OnTriggerStay2D(Collider2D other)
    {
        if (other.CompareTag("PetHair"))
        {
            deloreshickey = Time.time - time;
            robinspangler.Instance.RegisterDryTime(deloreshickey);
            Debug.Log(deloreshickey);
            time = Time.time;
        }
    }

    public void StartAnimationDryer()
    {
        transform.Find("ParticleHolder").GetComponent<ParticleSystem>().Play();
    }

    public void StopAnimationDryer()
    {
        transform.Find("ParticleHolder").GetComponent<ParticleSystem>().Stop();
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
        Debug.Log("Ukloni fen sa scene");
        StartCoroutine(RemoveFromSceneCoroutine(0.5f));
    }

    IEnumerator RemoveFromSceneCoroutine(float time)
    {
        yield return new WaitForSeconds(time);
        Debug.Log("Ukloni fen sa scene korutina");
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
