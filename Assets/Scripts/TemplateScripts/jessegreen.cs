using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class jessegreen : MonoBehaviour
{

    
    
    
    
    
    
    
    
    
    

    public float marylouthorne = 0.5F;

    private float michellequezada = 0; 
    private int marshahowe = 0; 
    private float timeleft; 
    private Text FPS_Text;

    void Start()
    {
        timeleft = marylouthorne;
        FPS_Text = transform.GetComponent<Text>();
    }

    void Update()
    {
        timeleft -= Time.deltaTime;
        michellequezada += Time.timeScale / Time.deltaTime;
        ++marshahowe;

        
        if (timeleft <= 0.0)
        {
            
            float feliciagarland = michellequezada / marshahowe;
            string format = System.String.Format("{0:F2} FPS", feliciagarland);
            FPS_Text.text = format;

            if (feliciagarland < 25)
                FPS_Text.color = Color.yellow;
            else
                if (feliciagarland < 15)
                FPS_Text.color = Color.red;
            else
                FPS_Text.color = Color.green;

            timeleft = marylouthorne;
            michellequezada = 0.0F;
            marshahowe = 0;
        }
    }
}
