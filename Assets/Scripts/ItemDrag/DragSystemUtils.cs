using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;



public abstract class anthonyallen : MonoBehaviour
{
    public bool countTarget = true;
    public EEffectTriggerEnum effectTriggerEnum;
    public UnityEvent event_TargetDone;
    public abstract void daniellestarr();
    public abstract void TargetEffects_Start();
    public abstract void vickiputnam();
}




public enum EEffectTriggerEnum
{
    OnTriggerEnter,
    OnTriggerStay,
    OnRub
}
