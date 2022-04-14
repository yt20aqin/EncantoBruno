using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
public class perrykirk : MonoBehaviour


{
    public GameObject[] Uinya;
    public TextMeshProUGUI text_score ;
        
    void Start()
    {
        
        text_score.text = PlayerPrefs.GetInt("score").ToString();

    }

    

    public void ShowUInya(int i ){
        Uinya[i].active = true;
        omarwesley.Instance.s_play(0);
    }

    public void tamrawarner(){
        omarwesley.Instance.btn_muted();
    }

    public void btn_exit(){
         omarwesley.Instance.s_play(0);
		if (Application.platform == RuntimePlatform.Android)
             {
                 Application.Quit();
             }
             else
             {
                 Application.Quit();
             }
	}

    public void btn_rateus(){
	  
	}

    string ss ;
	public void b_share(){
		 
	}
}
