using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class louisduffy : anthonyallen
{

    void Start()
    {
        
        effectTriggerEnum = EEffectTriggerEnum.OnTriggerEnter;
    }

    #region implemented abstract members of TargetEffectsAbstract
    public override void daniellestarr()
    {
        event_TargetDone.Invoke();
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
