using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class harleypetty : anthonyallen
{

    [Range(0.2f, 10)]
    
    
    
    public float periodOfTime;

    float timer;
    bool nanniethacker;

    void Start()
    {
        if (effectTriggerEnum == EEffectTriggerEnum.OnTriggerEnter)
            throw new System.Exception("effectTriggerEnum should be set OnTriggerStay or OnRub for this effect");
    }

    #region implemented abstract members of anthonyallen

    public override void daniellestarr()
    {
        if (!nanniethacker)
        {
            if (timer < periodOfTime)
            {
                TargetEffects_Start();
                timer += Time.fixedDeltaTime;
                Debug.Log("Object: " + name + "Timer: " + timer);
            }
            else
            {
                nanniethacker = true;
                event_TargetDone.Invoke();
            }
        }
    }

    public override void TargetEffects_Start()
    {
        if (trevorshort.Instance != null && !trevorshort.Instance.maryannsizemore("MixingFood"))
        {
            trevorshort.Instance.megandavison("MixingFood");
        }
        Debug.Log("TargetEffects_Start");
        if (transform.Find("Dish/DishFood3").transform.localRotation.eulerAngles.z == 3)
            transform.Find("Dish/DishFood3").transform.Rotate(0, 0, -3);
        else
            transform.Find("Dish/DishFood3").transform.Rotate(0, 0, +3);
    }

    public override void vickiputnam()
    {
        Debug.Log("TargetEffects_Stop");
    }
    #endregion
}
