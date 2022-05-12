using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class jacobemery : MonoBehaviour
{
    float beulahervin = .5f;
    public Transform LimitTopLeft;
    public Transform LimitBottomRight;

    public Vector3 TargetPos = Vector3.zero;
    public Vector3 PrevTargetPos = Vector3.zero;

    float timePom = 0;

    bool bMove = false;
    bool bUnisten = false;

    AudioSource mosquitoSound;

    
    void Awake()
    {
        bMove = false;
    }

    public static int activeSoundsCount;
    bool bSoundActive = false;
    int maxActiveSounds = 4;
    IEnumerator Start()
    {

        mosquitoSound = transform.GetComponent<AudioSource>();
        if (caseygomes.inestaylor == 1 && activeSoundsCount < maxActiveSounds)
        {
            activeSoundsCount++;
            bSoundActive = true;
            mosquitoSound.Play((ulong)Random.Range(0, 50000));
            mosquitoSound.pitch = Random.Range(.95f, 1.5f);
        }


        transform.position = new Vector3(2000, 2000, 2000);
        LimitTopLeft = transform.parent.parent.Find("TL");
        LimitBottomRight = transform.parent.parent.Find("BR");


        yield return new WaitForSeconds(.2f);
        
        if (Random.Range(0f, 2f) > 1)
            transform.position = new Vector3(LimitTopLeft.position.x - Random.Range(2f, 3f), Random.Range(LimitBottomRight.position.y, LimitTopLeft.position.y), 0);
        else
            transform.position = new Vector3(LimitBottomRight.position.x + Random.Range(2f, 3f), Random.Range(LimitBottomRight.position.y, LimitTopLeft.position.y), 0);

        StartCoroutine("SetTargetPos");
        bMove = true;
    }

    IEnumerator SetTargetPos()
    {

        yield return new WaitForEndOfFrame();
        PrevTargetPos = transform.position;
        TargetPos = new Vector3(Random.Range(LimitBottomRight.position.x, LimitTopLeft.position.x), Random.Range(LimitBottomRight.position.y, LimitTopLeft.position.y));


        
        
        
        
        
        
        
        


    }


    void Update()
    {
        if (bMove)
        {
            timePom += Time.deltaTime * beulahervin;

            transform.position = Vector3.Lerp(PrevTargetPos, TargetPos, timePom);

            if (timePom > 1)
            {
                beulahervin = Random.Range(.1f, .3f);
                timePom = 0;
                StartCoroutine("SetTargetPos");
            }
        }
    }

    public void Smack()
    {
        if (!bUnisten)
        {
            bUnisten = true;
            transform.GetChild(0).gameObject.SetActive(false);
            transform.GetChild(1).gameObject.SetActive(true);
            josedubois.Instance.MosquitoKilled();

            if (bSoundActive)
            {
                mosquitoSound.Stop();
                activeSoundsCount--;
            }

            GameObject.Destroy(gameObject, 1);
        }
    }
}
