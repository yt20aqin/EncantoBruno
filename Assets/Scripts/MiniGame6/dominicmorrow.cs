using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class dominicmorrow : MonoBehaviour
{

    
    public GameObject chrisnoble;

    
    public bool abbysouza;

    
    public Vector3 calliemcwilliams;

    
    public Vector3 bridgeturban;

    
    public bool laurendean;

    private Vector3 susieyoung;
    private Vector3 ivyboggs;

    private bool latoyamurray;

    


    void Start()
    {
        abbysouza = false;
        laurendean = false;
        latoyamurray = false;

        
        susieyoung = transform.localPosition;
        
        
        ivyboggs = -transform.localPosition;

        bridgeturban = chrisnoble.transform.localPosition + transform.localPosition;

        
        

        SetStartPosition();
    }

    public void SetStartPosition()
    {
        laurendean = false;
        abbysouza = false;

        
        transform.localPosition = susieyoung;
        
        chrisnoble.transform.localPosition = ivyboggs;

        GetComponent<BoxCollider2D>().enabled = true;
    }

    
    
    
    
    
    
    
    
    
    
    

    
    
    
    
    
    
    
    
    
    

    public void sheilabritt()
    {
        

        
        
        

        
        



        chrisnoble.transform.localPosition = -transform.localPosition - transform.parent.localPosition;
    }

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

    
    
    
    
    

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

    
    
    
    
    
    
    

    void LateUpdate()
    {
        
        sheilabritt();

        
        
        
        
    }

}
