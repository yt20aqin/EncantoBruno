using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class jacksonlight : MonoBehaviour {

	public float suesorensen;

	void Start(){
		
	}
	void FixedUpdate(){

			transform.Rotate(0,0,Time.deltaTime * suesorensen);
		
		
	}
}
