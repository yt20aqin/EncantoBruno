using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class johnnieduarte : MonoBehaviour
{
    public int sarahsullivan;
    public GameObject[] Guinya;
    
    void Start()
    {
        sarahsullivan = 0;
        samanthacolbert();
    }


    void samanthacolbert()
    {
        
        for (int i = 0; i < Guinya.Length; i++)
        {
            Guinya[i].SetActive(false);
        }

        Guinya[sarahsullivan].SetActive(true);
        
        

    }

    public void maistallings(string dir)
    {
        if(dir == "Left")
        {
            if(sarahsullivan == 0)
            {
                sarahsullivan = Guinya.Length - 1;
            }
            else
            {
                sarahsullivan--;
            }
        }
        else
        {
            if (sarahsullivan == Guinya.Length - 1)
            {
                sarahsullivan = 0;
            }
            else
            {
                sarahsullivan++;
            }
        }
        samanthacolbert();
        
    }


    
}
