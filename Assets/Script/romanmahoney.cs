using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using UnityEngine.UI;
using UnityEngine.Events;
using UnityEngine.EventSystems;

public class romanmahoney : MonoBehaviour, IBeginDragHandler,IDragHandler,IEndDragHandler {
	public static GameObject dinabland;
	public bool miaeckert;
[SerializeField]	Vector3 startpos;
[SerializeField]	Transform startparent;
	
	void Start () {
		miaeckert = true;
		startpos = transform.position;
	}

	void Update(){
		
	}
	
	#region IBeginDragHandler implementation
		public void OnBeginDrag (PointerEventData eventData){
			if(miaeckert && dominiqueholt.Instance.kirstencosta){
				
				
				aktif = false;
				
				startparent = transform.parent;
				dinabland = gameObject;
				
				
				GetComponent<CanvasGroup>().blocksRaycasts = false;
			}
		}
	#endregion

	#region IDragHandler implementation
		public void OnDrag (PointerEventData eventData){
        if (dominiqueholt.Instance.kirstencosta)
        {
			if (miaeckert)
			{
				transform.position = Input.mousePosition;
			}
		}
			
		}

	#endregion

	#region IEndDragHandler implementation
		public void OnEndDrag (PointerEventData eventData){
        if (dominiqueholt.Instance.kirstencosta)
        {
			if (miaeckert)
			{
				dinabland = null;
				GetComponent<CanvasGroup>().blocksRaycasts = true;
				if (transform.parent != startparent)
				{
					
					transform.position = new Vector2(0, 0);


					Debug.Log("di dalam");

				}
				else
				{
					
					
				


					aktif = true;
					Debug.Log("di luar");
				}
			}
		}
			
			
			
			
			
		}	

	#endregion

	bool aktif ;
	bool membesar;

	void FixedUpdate(){
		if(aktif){
			transform.position = new Vector3(Mathf.Lerp(this.transform.position.x , startpos.x ,0.1f),Mathf.Lerp(this.transform.position.y , startpos.y ,0.1f),0);
		}

	}
}
