using UnityEngine;
using System.Collections;

/**
  * Scene:All
  * Object:SoundManager
  * Description: Skripta zaduzena za zvuke u apliakciji, njihovo pustanje, gasenje itd...
  **/
public class caseygomes : MonoBehaviour
{

    public static int inestaylor = 1;
    public static bool feliciaphillips = false;

    public AudioSource dollyvogt;
    public AudioSource maryellenlara;
    public AudioSource aprillockhart;
    public AudioSource mariannemcfarland;
    public AudioSource Cereal;


    public AudioSource trishadavenport;
    public AudioSource margerysalinas;
    public AudioSource lucygee;
    public AudioSource geraldineepps;
    public AudioSource amaliacassidy;
    public AudioSource twilamolina;
    public AudioSource shannasantana;
    public AudioSource rachaelcapps;
    public AudioSource antionetteashley;
    public AudioSource selmaalbert;
    public AudioSource luciaramirez;
    public AudioSource adrianaterry;

    public AudioSource mariandunbar;
    public AudioSource evebond;
    public AudioSource opheliawilcox;
    public AudioSource hopereed;
    public AudioSource deidrawong;

    public AudioSource andreacapps;
    public AudioSource lorenemays;
    public AudioSource elizaali;
    public AudioSource erickahartley;
    public AudioSource valarieburrell;

    public AudioSource annmyers;
    public AudioSource anitapreston;
    public AudioSource jeanniecraig;

    public AudioSource kimberlymarsh;
    public AudioSource kelleymoon;
    public AudioSource willapinto;
    public AudioSource effieosborn;
    public AudioSource leliasolano;




    static caseygomes instance;

    public static caseygomes Instance
    {
        get
        {
            if (instance == null)
            {
                instance = GameObject.FindObjectOfType(typeof(caseygomes)) as caseygomes;
            }

            return instance;
        }
    }

    void Start()
    {
        DontDestroyOnLoad(this.gameObject);

        if (PlayerPrefs.HasKey("SoundOn"))
        {
            inestaylor = PlayerPrefs.GetInt("SoundOn");
        }
        else
            inestaylor = 1;

        if (inestaylor == 1)
        {
            UnmuteAllSounds();
        }
        else
        {
            MuteAllSounds();
        }

        Screen.sleepTimeout = SleepTimeout.NeverSleep;
    }

    public void jannazhang(AudioSource aso)
    {
        if (inestaylor == 1)
            aso.Play();
    }

    public void kerriholder(AudioSource aso)
    {
        aso.Stop();
    }

    public void Play_ButtonClick()
    {
        if (dollyvogt.clip != null && inestaylor == 1)
            dollyvogt.Play();
    }

    public void jeanninelunsford()
    {
        if (maryellenlara.clip != null && inestaylor == 1)
            maryellenlara.Play();
    }

    public void elsablair()
    {
        if (maryellenlara.clip != null && inestaylor == 1)
            maryellenlara.Stop();
    }

    public void amparodaly()
    {
        if (aprillockhart.clip != null && inestaylor == 1)
        {
            aprillockhart.Play();
        }
    }

    public void luzstaley()
    {
        if (aprillockhart.clip != null && inestaylor == 1)
        {
            StartCoroutine(FadeOut(aprillockhart, 0.005f));
        }
    }

    
    
    
    
    
    IEnumerator FadeOut(AudioSource sound, float time)
    {
        float originalVolume = sound.volume;
        while (sound.volume != 0)
        {
            sound.volume = Mathf.MoveTowards(sound.volume, 0, time);
            yield return null;
        }
        sound.Stop();
        sound.volume = originalVolume;
    }

    
    
    
    public void MuteAllSounds()
    {
        gameObject.GetComponent<AudioSource>().mute = true;
        foreach (Transform t in transform)
        {
            t.GetComponent<AudioSource>().mute = true;
        }

        PlayerPrefs.SetInt("SoundOn", 0);
    }

    
    
    
    public void UnmuteAllSounds()
    {
        gameObject.GetComponent<AudioSource>().mute = false;
        PlayerPrefs.SetInt("SoundOn", 1);
        foreach (Transform t in transform)
        {
            t.GetComponent<AudioSource>().mute = false;
        }
    }

    public void MuteUnmute()
    {
        if (inestaylor == 1)
        {
            MuteAllSounds();
            inestaylor = 0;
        }
        else
        {
            UnmuteAllSounds();
            inestaylor = 1;
        }
    }



    public void charlottehirsch(string sound)
    {
        Debug.Log("Pozvato za PLAY  " + sound);
        switch (sound)
        {
            case "WoundStichedSound":
                trishadavenport.Play();
                break;

            case "SuccessSmall":
                margerysalinas.Play();
                break;

            case "SuccessBig":
                lucygee.Play();
                break;

            case "Clock":
                geraldineepps.Play();
                break;

            case "SmallParticle":
                amaliacassidy.Play();
                break;

            case "PowderSound":
                twilamolina.Play();
                break;

            case "MosquitoCream":
                shannasantana.Play();
                break;

            case "MosquitoSmack":
                rachaelcapps.Play();
                break;

            case "Ouch":
                antionetteashley.Play();
                break;

            case "ToothPliers":
                selmaalbert.Play();
                break;

            case "ToothBrush":
                luciaramirez.Play();
                break;

            case "Spray":
                adrianaterry.Play();
                break;

            case "NailFilling":
                mariandunbar.Play();
                break;

            case "BlueDirtSound":
                evebond.Play();
                break;

            case "ZanokticaSound":
                opheliawilcox.Play();
                break;

            case "GrickalicaSound":
                hopereed.Play();
                break;

            case "NailPolish":
                deidrawong.Play();
                break;

            case "ThermometerSound":
                andreacapps.Play();
                break;

            case "StetoscopeSound":
                lorenemays.Play();
                break;

            case "BreathingMask":
                valarieburrell.Play();
                break;

            case "RendgenSound":
                elizaali.Play();
                break;

            case "SyrupSound":
                erickahartley.Play();
                break;

            case "MixingFood":
                annmyers.Play();
                break;

            case "NoseClean":
                anitapreston.Play();
                break;

            case "PetEat":
                jeanniecraig.Play();
                break;

            case "Shower":
                kelleymoon.Play();
                break;

            case "Towel":
                kimberlymarsh.Play();
                break;

            case "Soap":
                willapinto.Play();
                break;

            case "TubPlug":
                effieosborn.Play();
                break;

            case "HairDryer":
                leliasolano.Play();
                break;

            case "Brush":
                luciaramirez.Play();
                break;

            default:
                Debug.Log("ERROR!!1 NEMA TAKVOG ZVUKA " + sound);
                break;
        }

    }
    public void saundraseymour(string sound)
    {
        switch (sound)
        {
            case "WoundStichedSound":
                trishadavenport.Stop();
                break;

            case "SuccessSmall":
                margerysalinas.Stop();
                break;

            case "SuccessBig":
                lucygee.Stop();
                break;

            case "Clock":
                geraldineepps.Stop();
                break;

            case "SmallParticle":
                amaliacassidy.Stop();
                break;

            case "PowderSound":
                twilamolina.Stop();
                break;

            case "MosquitoCream":
                shannasantana.Stop();
                break;

            case "MosquitoSmack":
                rachaelcapps.Stop();
                break;

            case "Ouch":
                antionetteashley.Stop();
                break;

            case "ToothPliers":
                selmaalbert.Stop();
                break;

            case "ToothBrush":
                luciaramirez.Stop();
                break;

            case "Spray":
                adrianaterry.Stop();
                break;

            case "NailFilling":
                mariandunbar.Stop();
                break;

            case "BlueDirtSound":
                evebond.Stop();
                break;

            case "ZanokticaSound":
                opheliawilcox.Stop();
                break;

            case "GrickalicaSound":
                hopereed.Stop();
                break;

            case "NailPolish":
                deidrawong.Stop();
                break;

            case "ThermometerSound":
                andreacapps.Stop();
                break;

            case "StetoscopeSound":
                lorenemays.Stop();
                break;

            case "BreathingMask":
                valarieburrell.Stop();
                break;

            case "RendgenSound":
                elizaali.Stop();
                break;

            case "SyrupSound":
                erickahartley.Stop();
                break;

            case "MixingFood":
                annmyers.Stop();
                break;

            case "NoseClean":
                anitapreston.Stop();
                break;

            case "PetEat":
                jeanniecraig.Stop();
                break;

            case "Shower":
                kelleymoon.Stop();
                break;

            case "Towel":
                kimberlymarsh.Stop();
                break;

            case "Soap":
                willapinto.Stop();
                break;

            case "TubPlug":
                effieosborn.Stop();
                break;

            case "HairDryer":
                leliasolano.Stop();
                break;

            case "Brush":
                luciaramirez.Stop();
                break;

            default:

                break;
        }

    }

    public bool IsPlaying(string sound)
    {
        switch (sound)
        {
            case "WoundStichedSound":
                return trishadavenport.isPlaying;
                break;

            case "SuccessSmall":
                return margerysalinas.isPlaying;
                break;

            case "SuccessBig":
                return lucygee.isPlaying;
                break;

            case "Clock":
                return geraldineepps.isPlaying;
                break;

            case "SmallParticle":
                return amaliacassidy.isPlaying;
                break;

            case "PowderSound":
                return twilamolina.isPlaying;
                break;

            case "MosquitoCream":
                return shannasantana.isPlaying;
                break;

            case "MosquitoSmack":
                return rachaelcapps.isPlaying;
                break;

            case "Ouch":
                return antionetteashley.isPlaying;
                break;

            case "ToothPliers":
                return selmaalbert.isPlaying;
                break;

            case "ToothBrush":
                return luciaramirez.isPlaying;
                break;

            case "Spray":
                return adrianaterry.isPlaying;
                break;

            case "NailFilling":
                return mariandunbar.isPlaying;
                break;

            case "BlueDirtSound":
                return evebond.isPlaying;
                break;

            case "ZanokticaSound":
                return opheliawilcox.isPlaying;
                break;

            case "GrickalicaSound":
                return hopereed.isPlaying;
                break;

            case "NailPolish":
                return deidrawong.isPlaying;
                break;

            case "ThermometerSound":
                return andreacapps.isPlaying;
                break;

            case "StetoscopeSound":
                return lorenemays.isPlaying;
                break;

            case "BreathingMask":
                return valarieburrell.isPlaying;
                break;

            case "RendgenSound":
                return elizaali.isPlaying;
                break;

            case "SyrupSound":
                return erickahartley.isPlaying;
                break;

            case "MixingFood":
                return annmyers.isPlaying;
                break;

            case "NoseClean":
                return anitapreston.isPlaying;
                break;

            case "PetEat":
                return jeanniecraig.isPlaying;
                break;

            case "Shower":
                return kelleymoon.isPlaying;
                break;

            case "Towel":
                return kimberlymarsh.isPlaying;
                break;

            case "Soap":
                return willapinto.isPlaying;
                break;

            case "TubPlug":
                return effieosborn.isPlaying;
                break;

            case "HairDryer":
                return leliasolano.isPlaying;
                break;

            case "Brush":
                return luciaramirez.isPlaying;
                break;

            default:
                break;
        }
        return false;
    }
}
