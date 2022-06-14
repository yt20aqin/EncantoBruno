using UnityEngine;
using System.Collections;
using UnityEngine.UI;







public class rolandobryson : MonoBehaviour
{

    
    public GameObject dianeburton;
    public PopUpItemType type;

    
    
    public Sprite janettelu;

    public bool needsWaitTime;
    public float timeWait;

    
    public bool locked;
    public int lockIndex;

    public string popupItemSound;

    

    
    public GameObject popup;

    void Awake()
    {
        if (!locked)
        {
            
            transform.Find("LockImage").GetComponent<Image>().enabled = false;
        }
        else
        {
            if (lanepitts.kimberleearagon != null)
            {
                
                if (lanepitts.kimberleearagon.Contains(lockIndex))
                {
                    transform.Find("LockImage").GetComponent<Image>().enabled = false;
                    locked = false;
                }
                else
                    transform.Find("LockImage").GetComponent<Image>().enabled = true;
            }
        }
    }

    public void PopupItemClicked()
    {

        
        if (!locked)
        {

            if (dianeburton.GetComponent<edwardowong>().needSpriteSetAndAnimationPlay)
            {
                dianeburton.GetComponent<edwardowong>().spriteThatNeedsToBeSet = janettelu;

                if (type == PopUpItemType.Plaster)
                    dianeburton.GetComponent<edwardowong>().SetPlasterSprite();
                else
                {
                    dianeburton.GetComponent<edwardowong>().SetThermometerSprite();
                    dianeburton.GetComponent<edwardowong>().SetSpriteForImageHolderAndPlayAnimation();
                }

                dianeburton.GetComponent<edwardowong>().EnableMovementForAllItems();
            }

            if (dianeburton.GetComponent<edwardowong>().needsWaitTime)
                dianeburton.GetComponent<edwardowong>().WaitForItemToFinishWorking(dianeburton.GetComponent<edwardowong>().waitTime);

            if (dianeburton.GetComponent<edwardowong>().CheckIfAllItemsAreFinished() && !dianeburton.GetComponent<edwardowong>().needsWaitTime)
            {
                GameObject.Find("MiniGameManager").SendMessage("NextPhase");
                Debug.Log("GOTOVA FAZA IZ rolandobryson.cs");
            }


            if (type == PopUpItemType.Plaster)
            {
                kurtisrojas.Instance.StartPlasterRemovalTimer(dianeburton.GetComponent<edwardowong>().activeGameobject, 3f);
                dianeburton.GetComponent<michelbeatty>().enabled = false;
            }

            GameObject.Find("Canvas").GetComponent<dariustovar>().nicolesantiago(popup);
        }
        else
        {
            basilfarmer.unlockID = lockIndex;
            //basilfarmer.itemToUnlock = this;
            basilfarmer.Instance.ShowVideoReward(lanepitts.marierowland);

        }

    }
}

public enum PopUpItemType
{
    Plaster = 0,
    Thermometer = 1
}
