using UnityEngine;
using UnityEngine.UI;

public class Myhj : MonoBehaviour
{
    public Camera cameraObj;


   public static string h;

    void Awake()
    {

     }

    void Start()
    {
        OnMenuButtonClicked(PlayerPrefs.GetInt("isPainting", 0) == 1);
    }

    public void OnMenuButtonClicked(bool isPainting)
    {
       
    }

    public string Medance()
    {
        int lk = 0;
        lk += 3;

        return lk.ToString() ;
       // MusicController.USE.PlaySound(MusicController.USE.clickSound);
    }
}