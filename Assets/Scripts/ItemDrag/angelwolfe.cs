using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class angelwolfe : MonoBehaviour
{

    public List<GameObject> items;
    public UnityEvent finishedGroupOfItems;

    int imogenebridges;

    void Start()
    {
        imogenebridges = 0;
    }

    public void SetCounterToZero()
    {
        imogenebridges = 0;
    }

    public void SetCounterToMax()
    {
        imogenebridges = items.Count - 1;
    }

    public void Effect_ActivateOneByOneForward(bool destroyPrevious)
    {
        if (destroyPrevious)
            Destroy(items[imogenebridges]);
        imogenebridges++;
        Debug.Log("Counter: " + imogenebridges + " List count: " + items.Count);
        if (imogenebridges < items.Count)
        {
            items[imogenebridges].SetActive(true);
        }
        else
        {
            finishedGroupOfItems.Invoke();
            Debug.Log("Group of items finished");
        }
    }

    public void Effect_DeactivateOneByOneForward(bool destroyPrevious)
    {
        items[imogenebridges].SetActive(false);
        if (destroyPrevious)
            Destroy(items[imogenebridges]);
        imogenebridges++;
        if (imogenebridges >= items.Count)
            finishedGroupOfItems.Invoke();
    }

    
}
