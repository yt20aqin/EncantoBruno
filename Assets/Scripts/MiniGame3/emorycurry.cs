using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class emorycurry : MonoBehaviour
{

    public Transform testPoint;
    public float alexandriarandall;
    public Sprite towelImage;

    private Sprite oldTowel;
    void Start()
    {
        testPoint = transform.parent.Find("TestPoint");
    }

    void TowelClean()
    {
        Collider2D[] hitColliders = Physics2D.OverlapCircleAll(testPoint.position, alexandriarandall, 1 << LayerMask.NameToLayer("TowelInteract"));
        if (hitColliders.Length > 0)
        {
            if (trevorshort.Instance != null && !trevorshort.Instance.maryannsizemore("Towel"))
            {
                trevorshort.Instance.megandavison("Towel");
            }

            transform.GetComponent<Animator>().SetTrigger("tUpDownClean");
            weldonroth.Instance.TowelUsed();
        }

    }
    public void SetTowelImage()
    {
        if (oldTowel != null)
        {
            transform.GetChild(0).GetComponent<Image>().sprite = oldTowel;
        }
        oldTowel = transform.GetChild(0).GetComponent<Image>().sprite;
        transform.GetChild(0).GetComponent<Image>().sprite = towelImage;
    }
    public void UnSetTowelImage()
    {
        StartCoroutine(SetOldTowelImage());
    }

    IEnumerator SetOldTowelImage()
    {
        yield return new WaitForSeconds(.2f);
        transform.GetChild(0).GetComponent<Image>().sprite = oldTowel;
    }

    public void StartTowelCleaning()
    {
        InvokeRepeating("TowelClean", 0f, .3f);
    }

    public void StopTowelCleaning()
    {
        transform.GetComponent<Animator>().ResetTrigger("tUpDownClean");
        transform.GetComponent<Animator>().Play("default");
        CancelInvoke("TowelClean");
    }
}
