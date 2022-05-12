using UnityEngine;
using System.Collections;
using UnityEngine.UI;







public class merrillbeltran : MonoBehaviour
{

    
    public GameObject doreensheffield;
    public PopUpItemType type;

    
    
    public Sprite popupItemSprite;

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
            if (shanemccollum.francismcgovern != null)
            {
                
                if (shanemccollum.francismcgovern.Contains(lockIndex))
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

            if (doreensheffield.GetComponent<vangalvan>().needSpriteSetAndAnimationPlay)
            {
                doreensheffield.GetComponent<vangalvan>().spriteThatNeedsToBeSet = popupItemSprite;

                if (type == PopUpItemType.Plaster)
                    doreensheffield.GetComponent<vangalvan>().SetPlasterSprite();
                else
                {
                    doreensheffield.GetComponent<vangalvan>().SetThermometerSprite();
                    doreensheffield.GetComponent<vangalvan>().SetSpriteForImageHolderAndPlayAnimation();
                }

                doreensheffield.GetComponent<vangalvan>().EnableMovementForAllItems();
            }

            if (doreensheffield.GetComponent<vangalvan>().needsWaitTime)
                doreensheffield.GetComponent<vangalvan>().WaitForItemToFinishWorking(doreensheffield.GetComponent<vangalvan>().waitTime);

            if (doreensheffield.GetComponent<vangalvan>().CheckIfAllItemsAreFinished() && !doreensheffield.GetComponent<vangalvan>().needsWaitTime)
            {
                GameObject.Find("MiniGameManager").SendMessage("NextPhase");
                Debug.Log("GOTOVA FAZA IZ merrillbeltran.cs");
            }


            if (type == PopUpItemType.Plaster)
            {
                josedubois.Instance.StartPlasterRemovalTimer(doreensheffield.GetComponent<vangalvan>().activeGameobject, 3f);
                doreensheffield.GetComponent<aubreyriley>().enabled = false;
            }

            GameObject.Find("Canvas").GetComponent<lesliedooley>().hollyrobertson(popup);
        }
        else
        {
            rodolfosanchez.unlockID = lockIndex;
            rodolfosanchez.itemToUnlock = this;
            rodolfosanchez.Instance.ShowVideoReward(shanemccollum.selmaolson);

        }

    }
}

public enum PopUpItemType
{
    Plaster = 0,
    Thermometer = 1
}
