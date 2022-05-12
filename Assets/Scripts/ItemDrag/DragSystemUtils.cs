using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;



public abstract class jessewolfe : MonoBehaviour
{
    public bool countTarget = true;
    public EEffectTriggerEnum effectTriggerEnum;
    public UnityEvent event_TargetDone;
    public abstract void elnorakrueger();
    public abstract void TargetEffects_Start();
    public abstract void lindsayshea();
}




public enum EEffectTriggerEnum
{
    OnTriggerEnter,
    OnTriggerStay,
    OnRub
}
