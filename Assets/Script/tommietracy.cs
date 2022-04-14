using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class tommietracy : MonoBehaviour , IDropHandler{
	public bool franweaver;
	public int anastasiagalloway;
	Vector2 pos;

	void Start(){
		
		franweaver =false;
	}

	public GameObject item{
		get{
			if(transform.childCount > 0){
				return transform.GetChild(0).gameObject;
			}
			return null;
		}

	}

	public void hancurinimage(){
		Destroy(GetComponent<Image>());
	}


 public int feliciafinn;

	#region IDragHandler implementation
		public void OnDrop (PointerEventData eventData){
        if (dominiqueholt.Instance.kirstencosta)
        {
			if (!item)
			{
				if (feliciafinn == romanmahoney.dinabland.GetComponent<devinparis>().jilliankrueger)
				{

					romanmahoney.dinabland.transform.SetParent(transform);
					
					pos = transform.position;
					franweaver = true;
					
					romanmahoney.dinabland.GetComponent<devinparis>().marlasingleton = true;
					
					romanmahoney.dinabland.GetComponent<romanmahoney>().miaeckert = false;

					dominiqueholt.Instance.kaitlinsinclair[anastasiagalloway].GetComponent<Animation>().Play("container_slot_anim");
					
					dominiqueholt.Instance.carolelowery++;
					dominiqueholt.Instance.antoniaoverton += 25;

					if (SceneManager.GetActiveScene().name == "Game1" || SceneManager.GetActiveScene().name == "Game2")
					{
						romanmahoney.dinabland.GetComponent<Image>().sprite = dominiqueholt.Instance.Game_Image[dominiqueholt.aliciacaballero].Image[romanmahoney.dinabland.GetComponent<devinparis>().jilliankrueger];
						romanmahoney.dinabland.GetComponent<Animation>().Stop();
						romanmahoney.dinabland.GetComponent<Image>().color = Color.white;

					}

					StartCoroutine(Spawn());

				}

			}
		}
			
		}

	#endregion
	

	IEnumerator Spawn(){
		
		
		if(dominiqueholt.Instance.carolelowery < dominiqueholt.Instance.kaitlinsinclair.Count){
			
		}
		else{
			
			dominiqueholt.Instance.kirstencosta = false ;
			
			yield return new WaitForSeconds(0.5f);
			omarwesley.Instance.s_play(Random.Range(6,8));
			StartCoroutine(dominiqueholt.Instance.janisahmed());
		}
	}

}
