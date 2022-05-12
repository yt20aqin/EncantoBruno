using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class rexogden : MonoBehaviour
{

    public string lastColliderName;

    void Start()
    {
        lastColliderName = "";
    }

    void OnTriggerEnter2D(Collider2D coll)
    {
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        

        if (coll.name == "Collider11" || coll.name == "Collider21" || coll.name == "Collider31")
        {
            lastColliderName = coll.name;
        }

        if ((coll.name == "Collider21" || coll.name == "Collider22" || coll.name == "Collider32") && lastColliderName == "")
        {
            lastColliderName = coll.name;
        }
        else if ((coll.name == "Collider12" && lastColliderName == "Collider11") || (coll.name == "Collider22" && lastColliderName == "Collider21") || (coll.name == "Collider32" && lastColliderName == "Collider31"))
        {
            if (!coll.transform.parent.GetChild(1).GetComponent<Image>().enabled)
            {
                if (hansbarlow.needleControls.keishabishop == 0)
                {
                    hansbarlow.needleControls.woundAnimationHolder.GetComponent<Animator>().Play("FirstStich", 0, 0);
                }
                else if (hansbarlow.needleControls.keishabishop == 1)
                {
                    hansbarlow.needleControls.woundAnimationHolder.GetComponent<Animator>().Play("SecondStich", 0, 0);
                }
                else if (hansbarlow.needleControls.keishabishop == 2)
                {
                    hansbarlow.needleControls.woundAnimationHolder.GetComponent<Animator>().Play("ThirdStich", 0, 0);
                }

                caseygomes.Instance.charlottehirsch("WoundStichedSound");


                coll.transform.parent.GetComponent<Animator>().Play("Stiched", 0, 0);

                hansbarlow.needleControls.AddPoint();

                if (hansbarlow.needleControls.CheckForLevelFinished())
                    hansbarlow.needleControls.GameCompleted();
            }

            lastColliderName = "";
        }

    }

    
    
    
    
    
    
    
    

    
    
}
