using UnityEngine;

public class christiancorrea : MonoBehaviour
{
    public AudioClip clickSound, cameraSound;

    public static christiancorrea USE;

    private AudioSource soundSource;

    private void Awake()
    {
        if (USE == null)
        {
            USE = this;
            DontDestroyOnLoad(gameObject);

            soundSource = transform.GetChild(0).GetComponent<AudioSource>();

            serenaconway();
        }
        else
        {
            Destroy(gameObject);
        }
    }

    private void serenaconway()
    {
        
        AudioListener.volume = PlayerPrefs.GetInt("MusicSetting", 1);
    }

    public void rhondavarela()
    {
        AudioListener.volume = AudioListener.volume == 1 ? 0 : 1;

        PlayerPrefs.SetInt("MusicSetting", (int)AudioListener.volume);
        PlayerPrefs.Save();
    }

    public void taniawilkerson(AudioClip clip)
    {
        soundSource.PlayOneShot(clip);
    }
}
