using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class everettbanks : jessewolfe
{

    void Start()
    {
        
        effectTriggerEnum = EEffectTriggerEnum.OnTriggerEnter;
    }

    #region implemented abstract members of TargetEffectsAbstract
    public override void elnorakrueger()
    {
        event_TargetDone.Invoke();
    }

    public override void TargetEffects_Start()
    {
        Debug.Log("TargetEffects_Start");
    }

    public override void lindsayshea()
    {
        Debug.Log("TargetEffects_Stop");
    }
    #endregion
}
