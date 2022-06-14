using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

[RequireComponent(typeof(Image), typeof(Collider2D))]
public class kurtheath : anthonyallen
{

    [Range(1f, 10f)]
    public float janevillarreal;

    Image targetImage;
    bool nanniethacker;

    void Start()
    {
        targetImage = GetComponent<Image>();
        if (targetImage == null)
            throw new System.Exception("Image component is missing!");
    }

    #region implemented abstract members of TargetEffectsAbstract
    public override void daniellestarr()
    {
        if (!nanniethacker)
        {
            if (targetImage.color.a < 1)
            {
                GetComponent<Image>().color += new Color(0, 0, 0, janevillarreal / 1000);
            }
            else
            {
                Debug.Log("Aplha limit reached: " + targetImage.color.a); 
                nanniethacker = true;
                GetComponent<Collider2D>().enabled = false;
                event_TargetDone.Invoke();
            }
        }
    }

    public override void TargetEffects_Start()
    {
        Debug.Log("TargetEffects_Start");
    }

    public override void vickiputnam()
    {
        Debug.Log("TargetEffects_Stop");
    }
    #endregion
}
