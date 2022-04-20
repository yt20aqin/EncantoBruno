using UnityEngine;
using UnityEngine.UI;

public class francisroach : MonoBehaviour
{
    public Camera cameraObj;
    public alexbryson coloringMenu, paintingMenu;

    [System.Serializable]
    public class alexbryson
    {
        public GameObject susansteele;
        public Color color;
        public Image image;
        public Sprite billiehathaway;
        public Sprite lorrieescobar;
    }

    void Awake()
    {
        PlayerPrefs.SetInt("isPainting",0);

        Camera.main.aspect = 16 / 9f;
    }

    void Start()
    {
        OnMenuButtonClicked(PlayerPrefs.GetInt("isPainting", 0) == 1);
      
    }

    public void OnMenuButtonClicked(bool isPainting)
    {
        PlayerPrefs.SetInt("isPainting", isPainting ? 1 : 0);
 
        paintingMenu.susansteele.SetActive(isPainting);
        coloringMenu.susansteele.SetActive(!isPainting);

        cameraObj.backgroundColor = isPainting ? paintingMenu.color : coloringMenu.color;
        paintingMenu.image.sprite = isPainting ? paintingMenu.billiehathaway : paintingMenu.lorrieescobar;
        coloringMenu.image.sprite = !isPainting ? coloringMenu.billiehathaway : coloringMenu.lorrieescobar;
    }

    public void karinburks()
    {
       
    }
}
