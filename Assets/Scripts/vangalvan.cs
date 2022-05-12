using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using System.Linq;
using System;
using UnityEngine.SceneManagement;







public class vangalvan : MonoBehaviour, IPointerDownHandler, IPointerUpHandler
{

    
    public List<GameObject> allTargetItems;
    public int targetItemsCountMin;
    public int targetItemsCountMax;

    
    public List<GameObject> targetItems;
    public float progressTime;
    public List<float> progressTimeByItem;
    public List<bool> itemsDone;

    
    public bool itemAnimatedWhenOverItem;
    public Animator anim;
    public string animationName;

    
    public bool itemParticlePlayWhenOverItem;
    public bool itemParticlePlayWhenGrabed;
    public bool playAnimationWhenGrabbed;
    public string grabbedAnimationName;

    
    public float itemsProgressSpeed;

    
    public bool fadeout;
    public List<Image> allFadeoutImages;
    public List<Image> fadeoutImages;

    
    public List<GameObject> allIndicatorImagesObjectHolders;
    public List<GameObject> indicatorImagesObjects;

    
    public bool justDragToAppropriatePlace;

    
    public bool animateWhenJustDragIsTrue; 

    
    public bool rub;

    
    public bool opensPopup;
    public GameObject itemPopup;
    public bool justOpensPopup;

    
    public GameObject tutorialObjectHolder;
    public GameObject buttonsHolder;
    public Image tutorialImageHolder;
    public Sprite thisItemTutorialImage;
    public GameObject tutorialCheckImageObjectHolder;

    
    public bool needsWaitTime;
    public float waitTime;
    private bool alreadyWaiting = false;

    
    public bool subItem;
    public GameObject parentItem;
    [HideInInspector]
    public int subItemIndex;

    
    public bool opensPanel;
    public GameObject itemPanel;

    
    public bool playFinishedItemUsingParticle;

    
    [HideInInspector]
    public GameObject activeGameobject;

    
    public bool needSpriteSetAndAnimationPlay;
    
    public Sprite spriteThatNeedsToBeSet;

    
    public bool hideTargetGraphics;

    
    public bool itemDependsOnThisItem;
    public vangalvan itemThatDependsOnThisItem;
    public bool itemNeedsToBeDoneBeforeThisOne;
    public vangalvan itemThatNeedToBeDone;

    
    public bool additionalObjectAppearWhenItemIsActive;
    public bool additionalObjectWhenItemActiveAnimated;
    public Animator additionalObjectAnimator;

    
    

    
    public bool thisItemMakesCharacterSad;

    
    public bool thisItemOpensMiniGame;

    
    public bool opensAppropriatePanel;
    public GameObject[] popupItems;

    
    public bool soundNeedsToPlayWhenOnTarget;
    public string soundName;

    public bool needsToShowClockAnimation;

    public bool goesToAppropriatePositionAndAnimate;

    public bool showAdditionalItem;
    public GameObject additionalObjectHolder;

    public bool graphicsDissappearWhenTargetReached;

    private List<int> targetIndices;


    private GameObject gameManager;

    void Awake()
    {
        if (!itemNeedsToBeDoneBeforeThisOne)
        {
            targetIndices = new List<int>();
            int numberOfTargets;

            if (targetItemsCountMin == targetItemsCountMax)
                numberOfTargets = targetItemsCountMin;
            else
                numberOfTargets = UnityEngine.Random.Range(targetItemsCountMin, targetItemsCountMax);

            
            for (int i = 0; i < allIndicatorImagesObjectHolders.Count; i++)
            {
                allIndicatorImagesObjectHolders[i].SetActive(false);
            }

            
            progressTimeByItem = new List<float>();

            
            itemsDone = new List<bool>();

            
            if (itemDependsOnThisItem)
            {
                
                for (int i = 0; i < itemThatDependsOnThisItem.allIndicatorImagesObjectHolders.Count; i++)
                {
                    itemThatDependsOnThisItem.allIndicatorImagesObjectHolders[i].SetActive(false);
                }

                
                itemThatDependsOnThisItem.progressTimeByItem = new List<float>();

                
                itemThatDependsOnThisItem.itemsDone = new List<bool>();
            }

            
            for (int i = 0; i < numberOfTargets; i++)
            {
                int r = UnityEngine.Random.Range(0, allTargetItems.Count);

                targetItems.Add(allTargetItems[r]);
                allTargetItems.RemoveAt(r);

                targetIndices.Add(r);

                
                if (allIndicatorImagesObjectHolders.Count > 0)
                {
                    indicatorImagesObjects.Add(allIndicatorImagesObjectHolders[r]);
                    allIndicatorImagesObjectHolders.RemoveAt(r);
                }

                
                if (fadeout)
                {
                    fadeoutImages.Add(allFadeoutImages[r]);
                    allFadeoutImages.RemoveAt(r);
                }

                
                progressTimeByItem.Add(progressTime);
                itemsDone.Add(false);
            }

            
            for (int i = 0; i < allTargetItems.Count; i++)
            {
                Destroy(allTargetItems[i]);
            }
        }
        gameManager = GameObject.Find("MiniGameManager");
    }

    void Start()
    {
        if (itemDependsOnThisItem)
        {
            for (int i = 0; i < targetIndices.Count; i++)
            {
                itemThatDependsOnThisItem.targetItems.Add(itemThatDependsOnThisItem.allTargetItems[targetIndices[i]]);
                itemThatDependsOnThisItem.allTargetItems.RemoveAt(targetIndices[i]);

                
                if (itemThatDependsOnThisItem.allIndicatorImagesObjectHolders.Count > 0)
                {
                    itemThatDependsOnThisItem.indicatorImagesObjects.Add(itemThatDependsOnThisItem.allIndicatorImagesObjectHolders[targetIndices[i]]);
                    itemThatDependsOnThisItem.allIndicatorImagesObjectHolders.RemoveAt(targetIndices[i]);
                }

                
                if (itemThatDependsOnThisItem.fadeout)
                {
                    itemThatDependsOnThisItem.fadeoutImages.Add(itemThatDependsOnThisItem.allFadeoutImages[targetIndices[i]]);
                    itemThatDependsOnThisItem.allFadeoutImages.RemoveAt(targetIndices[i]);
                }

                
                itemThatDependsOnThisItem.progressTimeByItem.Add(itemThatDependsOnThisItem.progressTime);
                itemThatDependsOnThisItem.itemsDone.Add(false);
            }

            
            for (int i = 0; i < itemThatDependsOnThisItem.allTargetItems.Count; i++)
            {
                Destroy(itemThatDependsOnThisItem.allTargetItems[i]);
            }
        }
    }

    public void OnPointerDown(PointerEventData eventData)
    {
        if (GetComponent<aubreyriley>().enabled)
        {
            Debug.Log("testis");

            
            if (indicatorImagesObjects.Count > 0)
            {
                for (int i = 0; i < indicatorImagesObjects.Count; i++)
                {
                    if (!itemsDone[i])
                        indicatorImagesObjects[i].SetActive(true);
                }
            }

            
            
            if (tutorialObjectHolder != null)
            {
                tutorialImageHolder.sprite = thisItemTutorialImage;
                tutorialObjectHolder.SetActive(true);
            }

            
            if (!CheckIfAllItemsAreFinished())
            {
                if (tutorialCheckImageObjectHolder != null)
                    tutorialCheckImageObjectHolder.transform.GetChild(0).GetComponent<Animator>().Play("CheckIconInvis", 0, 0);
            }
            else
            {
                if (tutorialCheckImageObjectHolder != null)
                    tutorialCheckImageObjectHolder.transform.GetChild(0).GetComponent<Animator>().Play("CheckIconVisible", 0, 0);
            }

            
            if (itemParticlePlayWhenGrabed)
                transform.Find("ParticleHolder").GetComponent<ParticleSystem>().Play();

            
            if (playAnimationWhenGrabbed)
                anim.Play(grabbedAnimationName, 0, 0);


            
            
            
            if (thisItemMakesCharacterSad)
                GameObject.Find("Canvas").transform.Find("MainPanel/CharacterHolder").GetChild(0).GetChild(0).GetComponent<Animator>().Play("CharacterSad");

            
            if (showAdditionalItem)
            {
                additionalObjectHolder.transform.GetChild(0).GetComponent<Animator>().Play(additionalObjectHolder.name + "Show", 0, 0);
            }
        }
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        if (GetComponent<aubreyriley>() == null)
            return;
        if (GetComponent<aubreyriley>().enabled)
        {
            
            if (indicatorImagesObjects.Count > 0)
            {
                for (int i = 0; i < indicatorImagesObjects.Count; i++)
                {
                    indicatorImagesObjects[i].SetActive(false);
                }
            }

            if (!needsWaitTime && !opensPopup)
            {
                
                if (tutorialObjectHolder != null)
                    tutorialObjectHolder.SetActive(false);
                if (buttonsHolder != null)
                    buttonsHolder.SetActive(true);
            }
            else if (CheckIfAllItemsAreFinished() && itemPopup != null && !itemPopup.activeInHierarchy)
            {
                
                if (tutorialObjectHolder != null)
                    tutorialObjectHolder.SetActive(false);
                
            }
            else if (opensPopup && !opensAppropriatePanel && !itemPopup.activeInHierarchy && !goesToAppropriatePositionAndAnimate) 
            {
                
                if (tutorialObjectHolder != null)
                    tutorialObjectHolder.SetActive(false);

                if (buttonsHolder != null)
                    buttonsHolder.SetActive(true);
            }
            else if (needsWaitTime && !alreadyWaiting)
            {
                
                if (tutorialObjectHolder != null)
                    tutorialObjectHolder.SetActive(false);

                if (buttonsHolder != null)
                    buttonsHolder.SetActive(true);
            }
            else if (goesToAppropriatePositionAndAnimate && GetComponent<aubreyriley>().judithburton == true)
            {
                
                if (tutorialObjectHolder != null)
                    tutorialObjectHolder.SetActive(false);
                if (buttonsHolder != null)
                    buttonsHolder.SetActive(true);
            }
            else if (opensPopup && opensAppropriatePanel && !CheckIfAppropriatePanelIsOpened() && !goesToAppropriatePositionAndAnimate) 
            {
                
                tutorialObjectHolder.SetActive(false);
                buttonsHolder.SetActive(true);
            }

            
            if (itemParticlePlayWhenGrabed)
                transform.Find("ParticleHolder").GetComponent<ParticleSystem>().Stop();

            if (playAnimationWhenGrabbed)
                anim.Play(gameObject.name + "Idle", 0, 0);

            
            if (thisItemMakesCharacterSad)
                GameObject.Find("Canvas").transform.Find("MainPanel/CharacterHolder").GetChild(0).GetChild(0).GetComponent<Animator>().Play("CharacterIdle");

            
            if (showAdditionalItem)
            {
                additionalObjectHolder.transform.GetChild(0).GetComponent<Animator>().Play(additionalObjectHolder.name + "Hide", 0, 0);
            }
        }
    }

    public bool CheckIfAppropriatePanelIsOpened()
    {
        if (popupItems.Length > 0)
        {
            for (int i = 0; i < popupItems.Length; i++)
            {
                if (popupItems[i].activeInHierarchy)
                    return true;
            }
        }

        return false;
    }

    
    public void SetSpriteForImageHolderAndPlayAnimation()
    {
        
        

        Debug.Log(activeGameobject.name);
        activeGameobject.transform.Find("AnimationHolder").GetComponent<Animator>().Play(activeGameobject.name + "Active", 0, 0);
    }

    public void SetPlasterSprite()
    {
        if (spriteThatNeedsToBeSet != null)
        {
            activeGameobject.transform.Find("Cut/Plaster").GetComponent<Image>().sprite = spriteThatNeedsToBeSet;
            activeGameobject.transform.Find("Cut/Plaster").gameObject.SetActive(true);
        }
    }

    public void SetThermometerSprite()
    {
        if (spriteThatNeedsToBeSet != null)
        {
            activeGameobject.transform.Find("AnimationHolder/ItemHolder/ThermometerImage").GetComponent<Image>().sprite = spriteThatNeedsToBeSet;
            activeGameobject.transform.GetChild(0).GetComponent<Animator>().Play("ThermometerPlaceActive");
        }
    }

    public void WaitForItemToFinishWorking(float time)
    {
        StartCoroutine(WaitForItemToFinish(time));
    }

    public IEnumerator WaitForItemToFinish(float time)
    {
        if (buttonsHolder != null)
            buttonsHolder.SetActive(false);
        if (tutorialObjectHolder != null)
            tutorialObjectHolder.SetActive(true);

        yield return new WaitForSeconds(time);

        
        if (needsWaitTime)
        {
            int itemIndex = targetItems.IndexOf(activeGameobject);
            itemsDone[itemIndex] = true;
            alreadyWaiting = false;
        }

        
        if (graphicsDissappearWhenTargetReached)
        {
            
            transform.GetComponent<CanvasGroup>().alpha = 1;

            
            GetComponent<aubreyriley>().judithburton = true;
        }

        if (needsToShowClockAnimation)
        {
            
            yield return new WaitForSeconds(3.9f);
        }

        
        if (CheckIfAllItemsAreFinished())
        {

            if (tutorialCheckImageObjectHolder != null)
                tutorialCheckImageObjectHolder.transform.GetChild(0).GetComponent<Animator>().Play("CheckIconFinished", 0, 0);

            string sceneName = SceneManager.GetActiveScene().name;

            Debug.Log("-------------------------------------------------GOTOVA FAZA---------------------------------- waitforitemtofinish HIOI 489");
            GameObject.Find("MiniGameManager").SendMessage("NextPhase");


            
        }

        
        if (playFinishedItemUsingParticle)
        {
            if (caseygomes.Instance != null)
                caseygomes.Instance.charlottehirsch("SmallParticle");
            Debug.Log("PUSTAM PSSSSSSS na " + activeGameobject.name);
            activeGameobject.transform.Find("ParticleHolder").GetComponent<ParticleSystem>().Play();
        }

        
        if (hideTargetGraphics)
            activeGameobject.transform.Find("AnimationHolder").gameObject.SetActive(false);

        
        if (CheckIfAllItemsAreFinished() && !graphicsDissappearWhenTargetReached)
            yield return new WaitForSeconds(0.7f);

        
        if (thisItemMakesCharacterSad)
            GameObject.Find("Canvas").transform.Find("MainPanel/CharacterHolder").GetChild(0).GetChild(0).GetComponent<Animator>().Play("CharacterIdle");

        if (buttonsHolder != null)
            buttonsHolder.SetActive(true);

        if (tutorialObjectHolder != null)
            tutorialObjectHolder.SetActive(false);
        EnableMovementForAllItems();
    }

    void OnTriggerStay2D(Collider2D coll)
    {
        if (GetComponent<aubreyriley>().carynrichards)
        {
            if (rub)
            {
                if (!justDragToAppropriatePlace && (Input.GetAxis("Mouse X") > 0.02f || Input.GetAxis("Mouse Y") > 0.02f))
                {
                    if (!itemNeedsToBeDoneBeforeThisOne && targetItems.Contains(coll.gameObject))
                    {
                        int itemIndex = targetItems.IndexOf(coll.gameObject);

                        if (!itemsDone[itemIndex])
                        {
                            progressTimeByItem[itemIndex] -= itemsProgressSpeed * Time.deltaTime;

                            
                            if (fadeout)
                            {
                                Color c = fadeoutImages[itemIndex].GetComponent<Image>().color;

                                if (c.a >= 0.5f)
                                {
                                    c.a -= itemsProgressSpeed * Time.deltaTime / progressTime;

                                    fadeoutImages[itemIndex].GetComponent<Image>().color = c;
                                }
                            }

                            if (progressTimeByItem[itemIndex] <= 0)
                            {
                                itemsDone[itemIndex] = true;

                                if (indicatorImagesObjects.Count > 0)
                                {
                                    for (int i = 0; i < indicatorImagesObjects.Count; i++)
                                        if (itemsDone[i])
                                            indicatorImagesObjects[i].SetActive(false);
                                }

                                
                                if (itemAnimatedWhenOverItem)
                                {
                                    anim.Play(gameObject.name + "Idle", 0, 0);
                                }

                                
                                if (fadeout)
                                {
                                    Color c = fadeoutImages[itemIndex].GetComponent<Image>().color;
                                    c.a = 0;
                                    fadeoutImages[itemIndex].GetComponent<Image>().color = c;
                                }

                                
                                if (playFinishedItemUsingParticle)
                                {
                                    if (caseygomes.Instance != null)
                                        caseygomes.Instance.charlottehirsch("SmallParticle");
                                    coll.transform.Find("ParticleHolder").GetComponent<ParticleSystem>().Play();
                                }

                                
                                if (soundNeedsToPlayWhenOnTarget)
                                    if (caseygomes.Instance != null)
                                        caseygomes.Instance.saundraseymour(soundName);

                                
                                if (hideTargetGraphics)
                                    coll.transform.Find("AnimationHolder").gameObject.SetActive(false);

                                
                                if (itemParticlePlayWhenOverItem)
                                    transform.Find("ParticleHolder").GetComponent<ParticleSystem>().Stop();

                                
                                if (CheckIfAllItemsAreFinished())
                                {
                                    
                                    if (tutorialCheckImageObjectHolder != null)
                                        tutorialCheckImageObjectHolder.transform.GetChild(0).GetComponent<Animator>().Play("CheckIconFinished", 0, 0);

                                    Debug.Log("-----GOTOVA FAZA----- ONTRIGGERSTAY 603 HIOI");
                                    GameObject.Find("MiniGameManager").SendMessage("NextPhase");

                                    
                                    if (!subItem)
                                    {
                                        
                                    }
                                    else
                                    {
                                        
                                        if (CheckIfAllSubitemsAreDone())
                                            parentItem.GetComponent<vangalvan>().itemsDone[subItemIndex] = true;
                                    }


                                }

                                
                                
                                
                                
                                
                                
                            }

                            
                            if (caseygomes.Instance != null && !itemsDone[itemIndex] && soundNeedsToPlayWhenOnTarget && caseygomes.inestaylor == 1 && !caseygomes.Instance.IsPlaying(soundName))
                                caseygomes.Instance.charlottehirsch(soundName);
                        }
                    }
                    else if (itemNeedsToBeDoneBeforeThisOne && targetItems.Contains(coll.gameObject))
                    {
                        
                        if (!CheckIfNeededItemIsFinishedForCurrentObject(coll.gameObject))
                        {
                            if (!itemThatNeedToBeDone.anim.GetCurrentAnimatorStateInfo(0).IsName("ItemBlinking"))
                                itemThatNeedToBeDone.anim.Play("ItemBlinking", 0, 0);
                        }
                        else
                        {
                            int itemIndex = targetItems.IndexOf(coll.gameObject);

                            if (!itemsDone[itemIndex])
                            {
                                progressTimeByItem[itemIndex] -= itemsProgressSpeed * Time.deltaTime;

                                
                                if (fadeout)
                                {
                                    Color c = fadeoutImages[itemIndex].GetComponent<Image>().color;

                                    if (c.a >= 0.5f)
                                    {
                                        c.a -= itemsProgressSpeed * Time.deltaTime / progressTime;

                                        fadeoutImages[itemIndex].GetComponent<Image>().color = c;
                                    }
                                }

                                if (progressTimeByItem[itemIndex] <= 0)
                                {
                                    itemsDone[itemIndex] = true;

                                    if (indicatorImagesObjects.Count > 0)
                                    {
                                        for (int i = 0; i < indicatorImagesObjects.Count; i++)
                                            if (itemsDone[i])
                                                indicatorImagesObjects[i].SetActive(false);
                                    }

                                    
                                    if (itemAnimatedWhenOverItem)
                                    {
                                        anim.Play(gameObject.name + "Idle", 0, 0);
                                    }

                                    
                                    if (fadeout)
                                    {
                                        Color c = fadeoutImages[itemIndex].GetComponent<Image>().color;
                                        c.a = 0;
                                        fadeoutImages[itemIndex].GetComponent<Image>().color = c;
                                    }

                                    
                                    if (playFinishedItemUsingParticle)
                                    {
                                        if (caseygomes.Instance != null)
                                            caseygomes.Instance.charlottehirsch("SmallParticle");
                                        coll.transform.Find("ParticleHolder").GetComponent<ParticleSystem>().Play();
                                    }

                                    
                                    if (soundNeedsToPlayWhenOnTarget)
                                        if (caseygomes.Instance != null)
                                            caseygomes.Instance.saundraseymour(soundName);

                                    
                                    if (hideTargetGraphics)
                                        coll.transform.Find("AnimationHolder").gameObject.SetActive(false);

                                    
                                    if (itemParticlePlayWhenOverItem)
                                        transform.Find("ParticleHolder").GetComponent<ParticleSystem>().Stop();

                                    
                                    if (CheckIfAllItemsAreFinished())
                                    {
                                        
                                        if (tutorialCheckImageObjectHolder != null)
                                            tutorialCheckImageObjectHolder.transform.GetChild(0).GetComponent<Animator>().Play("CheckIconFinished", 0, 0);

                                        GameObject.Find("MiniGameManager").SendMessage("NextPhase");
                                        
                                        if (!subItem)
                                        {
                                            
                                        }
                                        else
                                        {
                                            
                                            if (CheckIfAllSubitemsAreDone())
                                                parentItem.GetComponent<vangalvan>().itemsDone[subItemIndex] = true;
                                        }

                                        
                                        
                                        
                                        
                                        
                                        
                                        
                                        
                                        
                                        
                                        
                                        
                                        
                                        
                                    }

                                    
                                    
                                    
                                    
                                    
                                    
                                }

                                
                                if (caseygomes.Instance != null && soundNeedsToPlayWhenOnTarget && caseygomes.inestaylor == 1 && !caseygomes.Instance.IsPlaying(soundName))
                                    caseygomes.Instance.charlottehirsch(soundName);
                            }
                        }
                    }
                }
            }
            else
            {
                if (!justDragToAppropriatePlace)
                {
                    if (!itemNeedsToBeDoneBeforeThisOne && targetItems.Contains(coll.gameObject))
                    {
                        int itemIndex = targetItems.IndexOf(coll.gameObject);

                        if (!itemsDone[itemIndex])
                        {
                            progressTimeByItem[itemIndex] -= itemsProgressSpeed * Time.deltaTime;

                            
                            if (fadeout)
                            {
                                Color c = fadeoutImages[itemIndex].GetComponent<Image>().color;

                                if (c.a >= 0.5f)
                                {
                                    c.a -= itemsProgressSpeed * Time.deltaTime / progressTime;

                                    fadeoutImages[itemIndex].GetComponent<Image>().color = c;
                                }
                            }

                            if (progressTimeByItem[itemIndex] <= 0)
                            {
                                itemsDone[itemIndex] = true;

                                if (indicatorImagesObjects.Count > 0)
                                {
                                    for (int i = 0; i < indicatorImagesObjects.Count; i++)
                                        if (itemsDone[i])
                                            indicatorImagesObjects[i].SetActive(false);
                                }

                                
                                if (itemAnimatedWhenOverItem)
                                {
                                    anim.Play(gameObject.name + "Idle", 0, 0);
                                }

                                
                                if (fadeout)
                                {
                                    Color c = fadeoutImages[itemIndex].GetComponent<Image>().color;
                                    c.a = 0;
                                    fadeoutImages[itemIndex].GetComponent<Image>().color = c;
                                }

                                
                                if (playFinishedItemUsingParticle)
                                {
                                    if (caseygomes.Instance != null)
                                        caseygomes.Instance.charlottehirsch("SmallParticle");
                                    coll.transform.Find("ParticleHolder").GetComponent<ParticleSystem>().Play();
                                }

                                
                                if (soundNeedsToPlayWhenOnTarget)
                                    if (caseygomes.Instance != null)
                                        caseygomes.Instance.saundraseymour(soundName);

                                
                                if (hideTargetGraphics)
                                    coll.transform.Find("AnimationHolder").gameObject.SetActive(false);

                                
                                if (itemParticlePlayWhenOverItem)
                                    transform.Find("ParticleHolder").GetComponent<ParticleSystem>().Stop();

                                
                                if (CheckIfAllItemsAreFinished())
                                {
                                    
                                    if (tutorialCheckImageObjectHolder != null)
                                        tutorialCheckImageObjectHolder.transform.GetChild(0).GetComponent<Animator>().Play("CheckIconFinished", 0, 0);

                                    Debug.Log("GOTOVA FAZA HIOI 833");
                                    GameObject.Find("MiniGameManager").SendMessage("NextPhase");
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    

                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                    
                                }

                                
                                
                                
                                
                                
                                
                            }

                            
                            if (caseygomes.Instance != null && soundNeedsToPlayWhenOnTarget && caseygomes.inestaylor == 1 && !caseygomes.Instance.IsPlaying(soundName))
                                caseygomes.Instance.charlottehirsch(soundName);
                        }
                    }
                    else if (itemNeedsToBeDoneBeforeThisOne && targetItems.Contains(coll.gameObject))
                    {
                        
                        if (!CheckIfNeededItemIsFinishedForCurrentObject(coll.gameObject))
                        {
                            if (!itemThatNeedToBeDone.anim.GetCurrentAnimatorStateInfo(0).IsName("ItemBlinking"))
                                itemThatNeedToBeDone.anim.Play("ItemBlinking", 0, 0);
                        }
                        else
                        {
                            int itemIndex = targetItems.IndexOf(coll.gameObject);

                            if (!itemsDone[itemIndex])
                            {
                                progressTimeByItem[itemIndex] -= itemsProgressSpeed * Time.deltaTime;

                                
                                if (fadeout)
                                {
                                    Color c = fadeoutImages[itemIndex].GetComponent<Image>().color;

                                    if (c.a >= 0.5f)
                                    {
                                        c.a -= itemsProgressSpeed * Time.deltaTime / progressTime;

                                        fadeoutImages[itemIndex].GetComponent<Image>().color = c;
                                    }
                                }

                                if (progressTimeByItem[itemIndex] <= 0)
                                {
                                    itemsDone[itemIndex] = true;

                                    if (indicatorImagesObjects.Count > 0)
                                    {
                                        for (int i = 0; i < indicatorImagesObjects.Count; i++)
                                            if (itemsDone[i])
                                                indicatorImagesObjects[i].SetActive(false);
                                    }


                                    
                                    if (itemAnimatedWhenOverItem)
                                    {
                                        anim.Play(gameObject.name + "Idle", 0, 0);
                                    }

                                    
                                    if (fadeout)
                                    {
                                        Color c = fadeoutImages[itemIndex].GetComponent<Image>().color;
                                        c.a = 0;
                                        fadeoutImages[itemIndex].GetComponent<Image>().color = c;
                                    }

                                    
                                    if (playFinishedItemUsingParticle)
                                    {
                                        if (caseygomes.Instance != null)
                                            caseygomes.Instance.charlottehirsch("SmallParticle");
                                        coll.transform.Find("ParticleHolder").GetComponent<ParticleSystem>().Play();
                                    }

                                    
                                    if (soundNeedsToPlayWhenOnTarget)
                                        if (caseygomes.Instance != null)
                                            caseygomes.Instance.saundraseymour(soundName);

                                    
                                    if (hideTargetGraphics)
                                        coll.transform.Find("AnimationHolder").gameObject.SetActive(false);

                                    
                                    if (itemParticlePlayWhenOverItem)
                                        transform.Find("ParticleHolder").GetComponent<ParticleSystem>().Stop();

                                    
                                    if (CheckIfAllItemsAreFinished())
                                    {
                                        
                                        tutorialCheckImageObjectHolder.transform.GetChild(0).GetComponent<Animator>().Play("CheckIconFinished", 0, 0);
                                        Debug.Log("GOTOVA FAZA HIOI 953");
                                        GameObject.Find("MiniGameManager").SendMessage("NextPhase");
                                        
                                        
                                        
                                        
                                        
                                        
                                        
                                        
                                        
                                        
                                        
                                        
                                        
                                        
                                        
                                        
                                        
                                        
                                        
                                        
                                        
                                        
                                        
                                        
                                        
                                    }

                                    
                                    
                                    
                                    
                                    
                                    
                                }

                                
                                if (caseygomes.Instance != null && soundNeedsToPlayWhenOnTarget && caseygomes.inestaylor == 1 && !caseygomes.Instance.IsPlaying(soundName))
                                    caseygomes.Instance.charlottehirsch(soundName);
                            }
                        }
                    }
                }
            }
        }
    }

    
    public bool CheckIfAllSubitemsAreDone()
    {
        
        subItemIndex = parentItem.GetComponent<vangalvan>().targetItems.IndexOf(parentItem.GetComponent<vangalvan>().activeGameobject);

        foreach (Transform t in transform.parent)
        {
            if (!t.GetComponent<vangalvan>().CheckIfAllItemsAreFinished())
                return false;
        }

        
        
        

        return true;
    }

    public IEnumerator DisableMovementForAllItemsAfterTime(float time)
    {
        yield return new WaitForSeconds(time);
        
        transform.localScale = new Vector3(1f, 1f, 1f);

        foreach (Transform t in transform.parent)
        {
            if (t.GetComponent<aubreyriley>() != null)
                t.GetComponent<aubreyriley>().enabled = false;
        }

        Debug.Log("DIsableovan movement itema");

        
        
        
        
    }

    public void EnableMovementForAllItems()
    {
        foreach (Transform t in transform.parent)
        {
            if (t.GetComponent<aubreyriley>() != null)
            {
                t.GetComponent<aubreyriley>().enabled = true;
                t.GetComponent<aubreyriley>().latoyamurray = true;
            }
        }
        Debug.Log("ENABLEOVAN MOVEMENT ITEMA");

        
        
        
        
        
    }

    
    
    

    void OnTriggerEnter2D(Collider2D coll)
    {
        if (GetComponent<aubreyriley>().carynrichards)
        {
            if (!itemNeedsToBeDoneBeforeThisOne && targetItems.Contains(coll.gameObject))
            {
                int itemIndex = targetItems.IndexOf(coll.gameObject);

                
                activeGameobject = coll.gameObject;
                if (graphicsDissappearWhenTargetReached && !itemsDone[itemIndex])
                    transform.GetComponent<CanvasGroup>().alpha = 0;

                
                if (itemParticlePlayWhenOverItem && !itemsDone[itemIndex])
                    transform.Find("ParticleHolder").GetComponent<ParticleSystem>().Play();

                
                if (!itemsDone[itemIndex] && justDragToAppropriatePlace)
                {
                    if (!justOpensPopup && !needsWaitTime)
                        itemsDone[itemIndex] = true;

                    if (indicatorImagesObjects.Count > 0)
                    {
                        for (int i = 0; i < indicatorImagesObjects.Count; i++)
                            indicatorImagesObjects[i].SetActive(false);
                    }

                    
                    if (opensPopup && !goesToAppropriatePositionAndAnimate)
                    {
                        
                        GetComponent<aubreyriley>().carynrichards = false;
                        GetComponent<aubreyriley>().latoyamurray = true;

                        if (!opensAppropriatePanel)
                        {
                            GameObject.Find("Canvas").GetComponent<lesliedooley>().malindacrain(itemPopup);

                        }
                        else
                        {

                            GameObject.Find("Canvas").GetComponent<lesliedooley>().malindacrain(popupItems[itemIndex]);
                        }

                        
                        StartCoroutine(DisableMovementForAllItemsAfterTime(0.05f));

                        if (justOpensPopup)
                        {
                            
                            if (buttonsHolder != null)
                                buttonsHolder.SetActive(true);

                            if (tutorialObjectHolder != null)
                                tutorialObjectHolder.SetActive(false);


                            GameObject.Find("Canvas").GetComponent<lesliedooley>().malindacrain(itemPopup);
                        }
                    }
                    else if (opensPopup && goesToAppropriatePositionAndAnimate)
                    {
                        GoToPositionAndAnimate(coll.gameObject.transform, 0.3f);

                    }

                    
                    if (opensPanel)
                    {
                        
                        GetComponent<aubreyriley>().carynrichards = false;
                        GetComponent<aubreyriley>().latoyamurray = true;

                        GameObject.Find("Canvas").GetComponent<lesliedooley>().malindacrain(itemPanel);
                        
                        StartCoroutine(DisableMovementForAllItemsAfterTime(0.4f));
                    }

                    
                    if (itemAnimatedWhenOverItem && !goesToAppropriatePositionAndAnimate)
                    {
                        anim.Play(animationName, 0, 0);
                    }

                    
                    if (needSpriteSetAndAnimationPlay && !opensPopup)
                    {
                        SetSpriteForImageHolderAndPlayAnimation();
                    }

                    
                    if (needsWaitTime)
                    {
                        
                        if (!animateWhenJustDragIsTrue)
                        {
                            GetComponent<aubreyriley>().carynrichards = false;
                            GetComponent<aubreyriley>().latoyamurray = true;

                            
                            if (graphicsDissappearWhenTargetReached)
                            {
                                
                                transform.GetComponent<CanvasGroup>().alpha = 0;

                                
                                GetComponent<aubreyriley>().judithburton = false;
                            }
                        }
                        else
                        {
                            anim.Play("JustDragIsTrueAnimation", 0, 0);
                        }

                        alreadyWaiting = true;
                        StartCoroutine(DisableMovementForAllItemsAfterTime(0.4f));
                        if (!opensPanel && !opensPopup)
                            WaitForItemToFinishWorking(waitTime);
                    }
                    else
                    {
                        if (playFinishedItemUsingParticle && !opensPopup)
                        {
                            
                            if (caseygomes.Instance != null)
                                caseygomes.Instance.charlottehirsch("SmallParticle");
                            activeGameobject.transform.Find("ParticleHolder").GetComponent<ParticleSystem>().Play();
                        }
                    }

                    
                    if ((itemPopup != null && !itemPopup.activeInHierarchy && CheckIfAllItemsAreFinished()) ||
                        (itemPanel != null && !itemPanel.activeInHierarchy && CheckIfAllItemsAreFinished()) ||
                        (itemPopup == null && itemPanel == null && CheckIfAllItemsAreFinished()))
                    {
                        
                        if (tutorialCheckImageObjectHolder != null)
                            tutorialCheckImageObjectHolder.transform.GetChild(0).GetComponent<Animator>().Play("CheckIconFinished", 0, 0);

                        if (!subItem)
                        {
                            
                        }
                        else
                        {
                            
                            if (CheckIfAllSubitemsAreDone())
                                parentItem.GetComponent<vangalvan>().itemsDone[subItemIndex] = true;
                        }

                        
                        
                        
                        
                        
                        
                    }

                    if (CheckIfAllItemsAreFinished())
                    {
                        Debug.Log("GOTOVA FAZA HIOI 1220");
                        if (!opensPopup)
                            GameObject.Find("MiniGameManager").SendMessage("NextPhase");
                    }

                    
                    
                    
                }

                if (itemsDone[itemIndex] && justDragToAppropriatePlace && justOpensPopup && !thisItemOpensMiniGame)
                {
                    
                    GetComponent<aubreyriley>().carynrichards = false;
                    GetComponent<aubreyriley>().latoyamurray = true;

                    GameObject.Find("Canvas").GetComponent<lesliedooley>().malindacrain(itemPopup);
                    
                    
                    
                    
                    
                    
                    
                    
                    StartCoroutine(DisableMovementForAllItemsAfterTime(0.4f));

                    
                    buttonsHolder.SetActive(true);
                    tutorialObjectHolder.SetActive(false);
                }

                if (!itemsDone[itemIndex] && itemAnimatedWhenOverItem && !goesToAppropriatePositionAndAnimate)
                {
                    
                    anim.Play(animationName, 0, 0);
                }

                
                
                
                
                
                
            }
            else if (itemNeedsToBeDoneBeforeThisOne && targetItems.Contains(coll.gameObject))
            {
                
                if (!CheckIfNeededItemIsFinishedForCurrentObject(coll.gameObject))
                {
                    if (!itemThatNeedToBeDone.anim.GetCurrentAnimatorStateInfo(0).IsName("ItemBlinking"))
                        itemThatNeedToBeDone.anim.Play("ItemBlinking", 0, 0);
                }
                else
                {
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    

                    int itemIndex = targetItems.IndexOf(coll.gameObject);

                    
                    activeGameobject = coll.gameObject;

                    
                    if (itemParticlePlayWhenOverItem && !itemsDone[itemIndex])
                        transform.Find("ParticleHolder").GetComponent<ParticleSystem>().Play();

                    
                    if (!itemsDone[itemIndex] && justDragToAppropriatePlace)
                    {
                        if (!justOpensPopup && !needsWaitTime)
                            itemsDone[itemIndex] = true;

                        if (indicatorImagesObjects.Count > 0)
                        {
                            for (int i = 0; i < indicatorImagesObjects.Count; i++)
                                if (itemsDone[i])
                                    indicatorImagesObjects[i].SetActive(false);
                        }

                        
                        if (opensPopup)
                        {
                            
                            GetComponent<aubreyriley>().carynrichards = false;
                            GetComponent<aubreyriley>().latoyamurray = true;

                            
                            
                            
                            
                            
                            

                            
                            StartCoroutine(DisableMovementForAllItemsAfterTime(0.4f));

                            if (justOpensPopup)
                            {
                                
                                buttonsHolder.SetActive(true);
                                tutorialObjectHolder.SetActive(false);
                            }
                        }

                        
                        if (opensPanel)
                        {
                            
                            GetComponent<aubreyriley>().carynrichards = false;
                            GetComponent<aubreyriley>().latoyamurray = true;

                            

                            
                            StartCoroutine(DisableMovementForAllItemsAfterTime(0.4f));
                        }

                        
                        if (itemAnimatedWhenOverItem && !goesToAppropriatePositionAndAnimate)
                        {
                            anim.Play(animationName, 0, 0);
                        }

                        
                        if (needSpriteSetAndAnimationPlay && !opensPopup)
                        {
                            SetSpriteForImageHolderAndPlayAnimation();
                        }

                        
                        if (needsWaitTime)
                        {
                            
                            if (!animateWhenJustDragIsTrue)
                            {
                                GetComponent<aubreyriley>().carynrichards = false;
                                GetComponent<aubreyriley>().latoyamurray = true;

                                
                                if (graphicsDissappearWhenTargetReached)
                                {
                                    
                                    transform.GetComponent<CanvasGroup>().alpha = 0;

                                    
                                    GetComponent<aubreyriley>().judithburton = false;
                                }
                            }
                            else
                            {
                                anim.Play("JustDragIsTrueAnimation", 0, 0);
                            }

                            alreadyWaiting = true;
                            StartCoroutine(DisableMovementForAllItemsAfterTime(0.4f));
                            WaitForItemToFinishWorking(waitTime);
                        }
                        else
                        {
                            if (playFinishedItemUsingParticle && !opensPopup)
                            {
                                
                                if (caseygomes.Instance != null)
                                    caseygomes.Instance.charlottehirsch("SmallParticle");
                                activeGameobject.transform.Find("ParticleHolder").GetComponent<ParticleSystem>().Play();
                            }
                        }

                        
                        if ((itemPopup != null && !itemPopup.activeInHierarchy && CheckIfAllItemsAreFinished()) ||
                            (itemPanel != null && !itemPanel.activeInHierarchy && CheckIfAllItemsAreFinished()) ||
                            (itemPopup == null && itemPanel == null && CheckIfAllItemsAreFinished()))
                        {
                            
                            tutorialCheckImageObjectHolder.transform.GetChild(0).GetComponent<Animator>().Play("CheckIconFinished", 0, 0);

                            
                            
                            
                            
                            
                            
                            
                            
                            
                            
                            
                            
                            
                            
                            
                            
                            
                        }


                    }

                    if (itemsDone[itemIndex] && justDragToAppropriatePlace && justOpensPopup && !thisItemOpensMiniGame)
                    {
                        
                        GetComponent<aubreyriley>().carynrichards = false;
                        GetComponent<aubreyriley>().latoyamurray = true;

                        
                        
                        
                        
                        
                        

                        
                        StartCoroutine(DisableMovementForAllItemsAfterTime(0.4f));

                        
                        buttonsHolder.SetActive(true);
                        tutorialObjectHolder.SetActive(false);
                    }

                    if (!itemsDone[itemIndex] && itemAnimatedWhenOverItem && !goesToAppropriatePositionAndAnimate)
                    {
                        
                        anim.Play(animationName, 0, 0);
                    }

                    
                    
                    
                    
                    
                    
                }
            }
        }
    }

    void OnTriggerExit2D(Collider2D coll)
    {
        if (targetItems.Contains(coll.gameObject))
        {
            if (itemAnimatedWhenOverItem && !goesToAppropriatePositionAndAnimate) 
            {
                
                anim.Play(gameObject.name + "Idle", 0, 0);

                
                activeGameobject = null;
            }

            if (itemNeedsToBeDoneBeforeThisOne)
            {
                itemThatNeedToBeDone.anim.Play(itemThatNeedToBeDone.name + "Idle", 0, 0);
            }

            
            if (caseygomes.Instance != null && soundNeedsToPlayWhenOnTarget && caseygomes.Instance.IsPlaying(soundName))
                caseygomes.Instance.saundraseymour(soundName);

            
            if (itemParticlePlayWhenOverItem)
                transform.Find("ParticleHolder").GetComponent<ParticleSystem>().Stop();

            
            
            
            
            
            
        }
    }

    
    public bool CheckIfAllItemsAreFinished()
    {
        for (int i = 0; i < itemsDone.Count; i++)
        {
            if (itemsDone[i] == false)
                return false;
        }

        return true;
    }

    public bool CheckIfNeededItemIsFinishedForCurrentObject(GameObject item)
    {
        int index = targetItems.IndexOf(item);

        if (!itemThatNeedToBeDone.itemsDone[index])
            return false;

        return true;
    }

    
    public void GoToPositionAndAnimate(Transform targetPosition, float timeOnPosition)
    {
        StartCoroutine(GoToPositionAndAnimateCoroutine(targetPosition, timeOnPosition));
    }

    IEnumerator GoToPositionAndAnimateCoroutine(Transform targetPosition, float timeOnPosition)
    {
        
        if (buttonsHolder != null)
            buttonsHolder.SetActive(false);
        if (tutorialObjectHolder != null)
            tutorialObjectHolder.SetActive(true);
        StartCoroutine(DisableMovementForAllItemsAfterTime(0f));

        GetComponent<aubreyriley>().judithburton = false;
        GetComponent<aubreyriley>().carynrichards = true;

        

        while (Vector2.Distance(new Vector2(transform.position.x, transform.position.y), new Vector2(targetPosition.position.x, targetPosition.position.y)) > 10f)
        {
            transform.position = Vector3.MoveTowards(transform.position, targetPosition.position, 1600f);
            yield return new WaitForSeconds(0.02f);
        }

        transform.position = targetPosition.position;
        

        

        
        
        
        
        
        

        
        if (itemAnimatedWhenOverItem)
        {
            anim.Play(animationName, 0, 0);
        }

        
        yield return new WaitForSeconds(2f);

        
        
        

        
        anim.Play(gameObject.name + "Idle", 0, 0);
        GetComponent<aubreyriley>().carynrichards = false;
        GetComponent<aubreyriley>().judithburton = true;

        
        if (opensPopup)
        {
            GameObject.Find("Canvas").GetComponent<lesliedooley>().malindacrain(itemPopup);

            
            StartCoroutine(DisableMovementForAllItemsAfterTime(0f));

            if (justOpensPopup)
            {
                
                if (buttonsHolder != null)
                    buttonsHolder.SetActive(true);
                if (tutorialObjectHolder != null)
                    tutorialObjectHolder.SetActive(false);
            }
        }

        for (int i = 0; i < indicatorImagesObjects.Count; i++)
        {
            if (!itemsDone[i])
                indicatorImagesObjects[i].SetActive(false);
        }

        EnableMovementForAllItems();
        
    }
}
