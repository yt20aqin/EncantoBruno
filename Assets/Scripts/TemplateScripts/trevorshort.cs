using UnityEngine;
using System.Collections;

/**
  * Scene:All
  * Object:SoundManager
  * Description: Skripta zaduzena za zvuke u apliakciji, njihovo pustanje, gasenje itd...
  **/
public class trevorshort : MonoBehaviour
{

    public static int susannamcdonough = 1;
    public static bool silviatidwell = false;

    public AudioSource daniellerandall;
    public AudioSource marionescobedo;
    public AudioSource justinabutler;
    public AudioSource chrisgillespie;
    public AudioSource Cereal;


    public AudioSource matildablackburn;
    public AudioSource tammierocha;
    public AudioSource biancahebert;
    public AudioSource gwendolynangel;
    public AudioSource antoniahendrickson;
    public AudioSource luellawynn;
    public AudioSource dalecain;
    public AudioSource janesimms;
    public AudioSource kathykendrick;
    public AudioSource alycemclean;
    public AudioSource alicemora;
    public AudioSource hazelraymond;

    public AudioSource bobbimcginnis;
    public AudioSource daphneventura;
    public AudioSource lidiamclain;
    public AudioSource lesleytrejo;
    public AudioSource gloriamontano;

    public AudioSource brookerandolph;
    public AudioSource jillchristie;
    public AudioSource ursulacarson;
    public AudioSource graceowens;
    public AudioSource maxineyoder;

    public AudioSource charlotterucker;
    public AudioSource ashleighclements;
    public AudioSource feliciachristiansen;

    public AudioSource kristisutherland;
    public AudioSource freidahay;
    public AudioSource kittykane;
    public AudioSource allisondonnelly;
    public AudioSource earlenebonner;




    static trevorshort instance;

    public static trevorshort Instance
    {
        get
        {
            if (instance == null)
            {
                instance = GameObject.FindObjectOfType(typeof(trevorshort)) as trevorshort;
            }

            return instance;
        }
    }

    void Start()
    {
        DontDestroyOnLoad(this.gameObject);

        if (PlayerPrefs.HasKey("SoundOn"))
        {
            susannamcdonough = PlayerPrefs.GetInt("SoundOn");
        }
        else
            susannamcdonough = 1;

        if (susannamcdonough == 1)
        {
            tamrakauffman();
        }
        else
        {
            celiaelias();
        }

        Screen.sleepTimeout = SleepTimeout.NeverSleep;
    }

    public void tamikatalley(AudioSource aso)
    {
        if (susannamcdonough == 1)
            aso.Play();
    }

    public void michaelalucero(AudioSource aso)
    {
        aso.Stop();
    }

    public void Play_ButtonClick()
    {
        if (daniellerandall.clip != null && susannamcdonough == 1)
            daniellerandall.Play();
    }

    public void jeanninelunsford()
    {
        if (marionescobedo.clip != null && susannamcdonough == 1)
            marionescobedo.Play();
    }

    public void shanaduke()
    {
        if (marionescobedo.clip != null && susannamcdonough == 1)
            marionescobedo.Stop();
    }

    public void daynavasquez()
    {
        if (justinabutler.clip != null && susannamcdonough == 1)
        {
            justinabutler.Play();
        }
    }

    public void araceliwoodruff()
    {
        if (justinabutler.clip != null && susannamcdonough == 1)
        {
            StartCoroutine(FadeOut(justinabutler, 0.005f));
        }
    }

    
    
    
    
    
    IEnumerator FadeOut(AudioSource sound, float time)
    {
        float cheryldo = sound.volume;
        while (sound.volume != 0)
        {
            sound.volume = Mathf.MoveTowards(sound.volume, 0, time);
            yield return null;
        }
        sound.Stop();
        sound.volume = cheryldo;
    }

    
    
    
    public void celiaelias()
    {
        gameObject.GetComponent<AudioSource>().mute = true;
        foreach (Transform t in transform)
        {
            t.GetComponent<AudioSource>().mute = true;
        }

        PlayerPrefs.SetInt("SoundOn", 0);
    }

    
    
    
    public void tamrakauffman()
    {
        gameObject.GetComponent<AudioSource>().mute = false;
        PlayerPrefs.SetInt("SoundOn", 1);
        foreach (Transform t in transform)
        {
            t.GetComponent<AudioSource>().mute = false;
        }
    }

    public void veronicasaenz()
    {
        if (susannamcdonough == 1)
        {
            celiaelias();
            susannamcdonough = 0;
        }
        else
        {
            tamrakauffman();
            susannamcdonough = 1;
        }
    }



    public void megandavison(string sound)
    {
        Debug.Log("Pozvato za PLAY  " + sound);
        switch (sound)
        {
            case "WoundStichedSound":
                matildablackburn.Play();
                break;

            case "SuccessSmall":
                tammierocha.Play();
                break;

            case "SuccessBig":
                biancahebert.Play();
                break;

            case "Clock":
                gwendolynangel.Play();
                break;

            case "SmallParticle":
                antoniahendrickson.Play();
                break;

            case "PowderSound":
                luellawynn.Play();
                break;

            case "MosquitoCream":
                dalecain.Play();
                break;

            case "MosquitoSmack":
                janesimms.Play();
                break;

            case "Ouch":
                kathykendrick.Play();
                break;

            case "ToothPliers":
                alycemclean.Play();
                break;

            case "ToothBrush":
                alicemora.Play();
                break;

            case "Spray":
                hazelraymond.Play();
                break;

            case "NailFilling":
                bobbimcginnis.Play();
                break;

            case "BlueDirtSound":
                daphneventura.Play();
                break;

            case "ZanokticaSound":
                lidiamclain.Play();
                break;

            case "GrickalicaSound":
                lesleytrejo.Play();
                break;

            case "NailPolish":
                gloriamontano.Play();
                break;

            case "ThermometerSound":
                brookerandolph.Play();
                break;

            case "StetoscopeSound":
                jillchristie.Play();
                break;

            case "BreathingMask":
                maxineyoder.Play();
                break;

            case "RendgenSound":
                ursulacarson.Play();
                break;

            case "SyrupSound":
                graceowens.Play();
                break;

            case "MixingFood":
                charlotterucker.Play();
                break;

            case "NoseClean":
                ashleighclements.Play();
                break;

            case "PetEat":
                feliciachristiansen.Play();
                break;

            case "Shower":
                freidahay.Play();
                break;

            case "Towel":
                kristisutherland.Play();
                break;

            case "Soap":
                kittykane.Play();
                break;

            case "TubPlug":
                allisondonnelly.Play();
                break;

            case "HairDryer":
                earlenebonner.Play();
                break;

            case "Brush":
                alicemora.Play();
                break;

            default:
                Debug.Log("ERROR!!1 NEMA TAKVOG ZVUKA " + sound);
                break;
        }

    }
    public void essiefrye(string sound)
    {
        switch (sound)
        {
            case "WoundStichedSound":
                matildablackburn.Stop();
                break;

            case "SuccessSmall":
                tammierocha.Stop();
                break;

            case "SuccessBig":
                biancahebert.Stop();
                break;

            case "Clock":
                gwendolynangel.Stop();
                break;

            case "SmallParticle":
                antoniahendrickson.Stop();
                break;

            case "PowderSound":
                luellawynn.Stop();
                break;

            case "MosquitoCream":
                dalecain.Stop();
                break;

            case "MosquitoSmack":
                janesimms.Stop();
                break;

            case "Ouch":
                kathykendrick.Stop();
                break;

            case "ToothPliers":
                alycemclean.Stop();
                break;

            case "ToothBrush":
                alicemora.Stop();
                break;

            case "Spray":
                hazelraymond.Stop();
                break;

            case "NailFilling":
                bobbimcginnis.Stop();
                break;

            case "BlueDirtSound":
                daphneventura.Stop();
                break;

            case "ZanokticaSound":
                lidiamclain.Stop();
                break;

            case "GrickalicaSound":
                lesleytrejo.Stop();
                break;

            case "NailPolish":
                gloriamontano.Stop();
                break;

            case "ThermometerSound":
                brookerandolph.Stop();
                break;

            case "StetoscopeSound":
                jillchristie.Stop();
                break;

            case "BreathingMask":
                maxineyoder.Stop();
                break;

            case "RendgenSound":
                ursulacarson.Stop();
                break;

            case "SyrupSound":
                graceowens.Stop();
                break;

            case "MixingFood":
                charlotterucker.Stop();
                break;

            case "NoseClean":
                ashleighclements.Stop();
                break;

            case "PetEat":
                feliciachristiansen.Stop();
                break;

            case "Shower":
                freidahay.Stop();
                break;

            case "Towel":
                kristisutherland.Stop();
                break;

            case "Soap":
                kittykane.Stop();
                break;

            case "TubPlug":
                allisondonnelly.Stop();
                break;

            case "HairDryer":
                earlenebonner.Stop();
                break;

            case "Brush":
                alicemora.Stop();
                break;

            default:

                break;
        }

    }

    public bool maryannsizemore(string sound)
    {
        switch (sound)
        {
            case "WoundStichedSound":
                return matildablackburn.isPlaying;
                break;

            case "SuccessSmall":
                return tammierocha.isPlaying;
                break;

            case "SuccessBig":
                return biancahebert.isPlaying;
                break;

            case "Clock":
                return gwendolynangel.isPlaying;
                break;

            case "SmallParticle":
                return antoniahendrickson.isPlaying;
                break;

            case "PowderSound":
                return luellawynn.isPlaying;
                break;

            case "MosquitoCream":
                return dalecain.isPlaying;
                break;

            case "MosquitoSmack":
                return janesimms.isPlaying;
                break;

            case "Ouch":
                return kathykendrick.isPlaying;
                break;

            case "ToothPliers":
                return alycemclean.isPlaying;
                break;

            case "ToothBrush":
                return alicemora.isPlaying;
                break;

            case "Spray":
                return hazelraymond.isPlaying;
                break;

            case "NailFilling":
                return bobbimcginnis.isPlaying;
                break;

            case "BlueDirtSound":
                return daphneventura.isPlaying;
                break;

            case "ZanokticaSound":
                return lidiamclain.isPlaying;
                break;

            case "GrickalicaSound":
                return lesleytrejo.isPlaying;
                break;

            case "NailPolish":
                return gloriamontano.isPlaying;
                break;

            case "ThermometerSound":
                return brookerandolph.isPlaying;
                break;

            case "StetoscopeSound":
                return jillchristie.isPlaying;
                break;

            case "BreathingMask":
                return maxineyoder.isPlaying;
                break;

            case "RendgenSound":
                return ursulacarson.isPlaying;
                break;

            case "SyrupSound":
                return graceowens.isPlaying;
                break;

            case "MixingFood":
                return charlotterucker.isPlaying;
                break;

            case "NoseClean":
                return ashleighclements.isPlaying;
                break;

            case "PetEat":
                return feliciachristiansen.isPlaying;
                break;

            case "Shower":
                return freidahay.isPlaying;
                break;

            case "Towel":
                return kristisutherland.isPlaying;
                break;

            case "Soap":
                return kittykane.isPlaying;
                break;

            case "TubPlug":
                return allisondonnelly.isPlaying;
                break;

            case "HairDryer":
                return earlenebonner.isPlaying;
                break;

            case "Brush":
                return alicemora.isPlaying;
                break;

            default:
                break;
        }
        return false;
    }
}
