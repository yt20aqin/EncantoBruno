using UnityEngine;

public class hollisthornton : MonoBehaviour
{
    public AudioClip clickSound, cameraSound;

    public static hollisthornton USE;

    private AudioSource soundSource;

    private void Awake()
    {
        if (USE == null)
        {
            USE = this;
            DontDestroyOnLoad(gameObject);

            soundSource = transform.GetChild(0).GetComponent<AudioSource>();

            tamrabui();
        }
        else
        {
            Destroy(gameObject);
        }
    }

    private void tamrabui()
    {
        
        AudioListener.volume = PlayerPrefs.GetInt("MusicSetting", 1);
    }

    public void vernahanks()
    {
        AudioListener.volume = AudioListener.volume == 1 ? 0 : 1;

        PlayerPrefs.SetInt("MusicSetting", (int)AudioListener.volume);
        PlayerPrefs.Save();
    }

    public void vivianfields(AudioClip clip)
    {
        soundSource.PlayOneShot(clip);
    }
}
