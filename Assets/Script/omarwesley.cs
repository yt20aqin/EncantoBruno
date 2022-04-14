using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class omarwesley : MonoBehaviour {
	private static omarwesley _instance = null;
	public static omarwesley Instance
	{
		get {return _instance ; }
	}

	public bool raelangley;
	public Sprite[] Mute_Image;

	public AudioClip[] suara ;
	public List<AudioSource> lupemoreno;

	public AudioSource SuaraBG;
	public AudioClip[] LaguBGnya;

	void Awake(){
		if(_instance == null){
			_instance = this;
			DontDestroyOnLoad(this);
		}
		else{
			Destroy(this.gameObject);
		}
	}

	void Start(){
		for (int i = 0; i < suara.Length; i++)
		{	
			lupemoreno.Add(new AudioSource());
			lupemoreno[i] = gameObject.AddComponent<AudioSource>();
			lupemoreno[i].clip = suara[i];
		}
	}

	public void s_play(int i){
		lupemoreno[i].Play();
	}


	public void CekLagu(int i){
		if(i == i){
			if(SuaraBG.clip != LaguBGnya[i]){
				SuaraBG.clip = LaguBGnya[i];
				SuaraBG.Play();
			}
		}
		
	}

	public void btn_muted(){
		s_play(0);
		if(raelangley){
			raelangley = false;
			for (int i = 0; i < lupemoreno.Count; i++)
			{
				lupemoreno[i].mute = false;
			}
			SuaraBG.mute = false;
			GameObject.Find("btn_sounds").GetComponent<Image>().sprite = Mute_Image[0];
			
		}
		else{
			raelangley = true;
			for (int i = 0; i < lupemoreno.Count; i++)
			{
				lupemoreno[i].mute = true;
			}
			SuaraBG.mute = true;
			GameObject.Find("btn_sounds").GetComponent<Image>().sprite = Mute_Image[1];
		}


	}


	public void Cek_Muted(){
		if(raelangley){
			GameObject.Find("btn_sounds").GetComponent<Image>().sprite = Mute_Image[1];
		}
		else{
			GameObject.Find("btn_sounds").GetComponent<Image>().sprite = Mute_Image[0];
		}
	}


}
