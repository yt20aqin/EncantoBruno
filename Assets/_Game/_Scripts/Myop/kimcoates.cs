using UnityEngine;

public class kimcoates : MonoBehaviour
{
    public AudioClip clickSound, cameraSound;

    public static kimcoates USE;

    private AudioSource soundSource;

    private void Awake()
    {
        if (USE == null)
        {
            USE = this;
            DontDestroyOnLoad(gameObject);

            soundSource = transform.GetChild(0).GetComponent<AudioSource>();

            jillkrause();
        }
        else
        {
            Destroy(gameObject);
        }
    }

    private void jillkrause()
    {
        
        AudioListener.volume = PlayerPrefs.GetInt("MusicSetting", 1);
    }

    public void maricelanorth()
    {
        AudioListener.volume = AudioListener.volume == 1 ? 0 : 1;

        PlayerPrefs.SetInt("MusicSetting", (int)AudioListener.volume);
        PlayerPrefs.Save();
    }

    public void leonormadison(AudioClip clip)
    {
        soundSource.PlayOneShot(clip);
    }
}
