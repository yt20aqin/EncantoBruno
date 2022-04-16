using UnityEngine;
using UnityEngine.UI;

public class fidelritchie : MonoBehaviour
{
    public Camera cameraObj;
    public stephenholliday coloringMenu, paintingMenu;

    [System.Serializable]
    public class stephenholliday
    {
        public GameObject bobbyjimenez;
        public Color color;
        public Image image;
        public Sprite jillthornton;
        public Sprite tamarahays;
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
 
        paintingMenu.bobbyjimenez.SetActive(isPainting);
        coloringMenu.bobbyjimenez.SetActive(!isPainting);

        cameraObj.backgroundColor = isPainting ? paintingMenu.color : coloringMenu.color;
        paintingMenu.image.sprite = isPainting ? paintingMenu.jillthornton : paintingMenu.tamarahays;
        coloringMenu.image.sprite = !isPainting ? coloringMenu.jillthornton : coloringMenu.tamarahays;
    }

    public void corinesexton()
    {
       
    }
}
