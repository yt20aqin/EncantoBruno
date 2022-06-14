using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class raullarsen : MonoBehaviour
{

    
    
    
    
    
    
    
    
    
    

    public float earlenegrant = 0.5F;

    private float tracysanders = 0; 
    private int corrinekrueger = 0; 
    private float timeleft; 
    private Text FPS_Text;

    void Start()
    {
        timeleft = earlenegrant;
        FPS_Text = transform.GetComponent<Text>();
    }

    void Update()
    {
        timeleft -= Time.deltaTime;
        tracysanders += Time.timeScale / Time.deltaTime;
        ++corrinekrueger;

        
        if (timeleft <= 0.0)
        {
            
            float camillaflores = tracysanders / corrinekrueger;
            string format = System.String.Format("{0:F2} FPS", camillaflores);
            FPS_Text.text = format;

            if (camillaflores < 25)
                FPS_Text.color = Color.yellow;
            else
                if (camillaflores < 15)
                FPS_Text.color = Color.red;
            else
                FPS_Text.color = Color.green;

            timeleft = earlenegrant;
            tracysanders = 0.0F;
            corrinekrueger = 0;
        }
    }
}
