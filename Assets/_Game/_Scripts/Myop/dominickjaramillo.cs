using UnityEngine;
using UnityEngine.UI;

public class dominickjaramillo : MonoBehaviour
{
    public Camera cameraObj;
    public trevorkenny coloringMenu, paintingMenu;

    [System.Serializable]
    public class trevorkenny
    {
        public GameObject elmamann;
        public Color color;
        public Image image;
        public Sprite darleneruiz;
        public Sprite joannale;
    }

    void Awake()
    {
        Camera.main.aspect = 16 / 9f;
    }

    void Start()
    {
        OnMenuButtonClicked(PlayerPrefs.GetInt("isPainting", 0) == 1);
    }

    public void OnMenuButtonClicked(bool isPainting)
    {
        PlayerPrefs.SetInt("isPainting", isPainting ? 1 : 0);
        PlayerPrefs.Save();

        paintingMenu.elmamann.SetActive(isPainting);
        coloringMenu.elmamann.SetActive(!isPainting);

        cameraObj.backgroundColor = isPainting ? paintingMenu.color : coloringMenu.color;
        paintingMenu.image.sprite = isPainting ? paintingMenu.darleneruiz : paintingMenu.joannale;
        coloringMenu.image.sprite = !isPainting ? coloringMenu.darleneruiz : coloringMenu.joannale;
    }

    public void cathleenburrell()
    {
       
    }
}
