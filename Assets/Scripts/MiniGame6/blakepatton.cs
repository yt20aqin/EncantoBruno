using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class blakepatton : MonoBehaviour
{

    
    public GameObject ellenesposito;

    
    public bool taniadaniels;

    
    public Vector3 erikadoherty;

    
    public Vector3 dinakirkland;

    
    public bool avislogan;

    private Vector3 yvonnecrump;
    private Vector3 marissahorner;

    private bool brigittejudd;

    


    void Start()
    {
        taniadaniels = false;
        avislogan = false;
        brigittejudd = false;

        
        yvonnecrump = transform.localPosition;
        
        
        marissahorner = -transform.localPosition;

        dinakirkland = ellenesposito.transform.localPosition + transform.localPosition;

        
        

        SetStartPosition();
    }

    public void SetStartPosition()
    {
        avislogan = false;
        taniadaniels = false;

        
        transform.localPosition = yvonnecrump;
        
        ellenesposito.transform.localPosition = marissahorner;

        GetComponent<BoxCollider2D>().enabled = true;
    }

    
    
    
    
    
    
    
    
    
    
    

    
    
    
    
    
    
    
    
    
    

    public void ofeliakessler()
    {
        

        
        
        

        
        



        ellenesposito.transform.localPosition = -transform.localPosition - transform.parent.localPosition;
    }

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

    
    
    
    
    

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

    
    
    
    
    
    
    

    void LateUpdate()
    {
        
        ofeliakessler();

        
        
        
        
    }

}
