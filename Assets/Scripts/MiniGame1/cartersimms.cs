using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class cartersimms : MonoBehaviour
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
                if (marcuswelch.needleControls.juliettelaw == 0)
                {
                    marcuswelch.needleControls.woundAnimationHolder.GetComponent<Animator>().Play("FirstStich", 0, 0);
                }
                else if (marcuswelch.needleControls.juliettelaw == 1)
                {
                    marcuswelch.needleControls.woundAnimationHolder.GetComponent<Animator>().Play("SecondStich", 0, 0);
                }
                else if (marcuswelch.needleControls.juliettelaw == 2)
                {
                    marcuswelch.needleControls.woundAnimationHolder.GetComponent<Animator>().Play("ThirdStich", 0, 0);
                }

                trevorshort.Instance.megandavison("WoundStichedSound");


                coll.transform.parent.GetComponent<Animator>().Play("Stiched", 0, 0);

                marcuswelch.needleControls.AddPoint();

                if (marcuswelch.needleControls.CheckForLevelFinished())
                    marcuswelch.needleControls.GameCompleted();
            }

            lastColliderName = "";
        }

    }

    
    
    
    
    
    
    
    

    
    
}
