using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
public class devinparis : MonoBehaviour {
	public bool marlasingleton;

	public int jilliankrueger;

	public	Vector2 gcz ;
	private void Start()
	{
		
	}

	void FixedUpdate()
	{
		if(marlasingleton){
			Vector2 jead = GetComponent<RectTransform>().localPosition ;
			GetComponent<RectTransform>().localPosition =  new Vector2(Mathf.Lerp(jead.x,0,0.1125f),Mathf.Lerp(jead.y,0,0.1125f));
			GetComponent<RectTransform>().localScale = new Vector2(Mathf.Lerp(GetComponent<RectTransform>().localScale.x,1,0.125f),Mathf.Lerp(GetComponent<RectTransform>().localScale.y,1,0.125f));
			GetComponent<RectTransform>().sizeDelta = new Vector2(Mathf.Lerp(GetComponent<RectTransform>().sizeDelta.x , 200f,0.125f),Mathf.Lerp(GetComponent<RectTransform>().sizeDelta.x , 200f,0.125f));
			GetComponent<RectTransform>().localRotation = Quaternion.Euler(Mathf.Lerp(GetComponent<RectTransform>().localRotation.x , 0,0.125f),Mathf.Lerp(GetComponent<RectTransform>().localRotation.x , 0,0.125f),0);
			
			


			
			
		}
	}

	public void Destroyed(){
		Destroy(this.gameObject);
	}


	public void GantiGambar (int Back)
    {
        if (Back == 0)
        {
			GetComponent<Image>().sprite = dominiqueholt.Instance.normaalvarez;
        }
        else
        {
			GetComponent<Image>().sprite = dominiqueholt.Instance.Game_Image[dominiqueholt.aliciacaballero].Image[jilliankrueger];
		}
    }
}
