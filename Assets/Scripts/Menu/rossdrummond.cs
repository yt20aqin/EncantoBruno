using UnityEngine;
using System.Collections;

/**
  * Scene: Sve
  * Object: rossdrummond objekti
  * Description: Skripta zaduzena za Menu-je
  **/
public class rossdrummond : MonoBehaviour
{


    public Animator _animtor;

    public bool IsOpen
    {
        get
        {
            return _animtor.GetBool("IsOpen");
        }
        set
        {
            _animtor.SetBool("IsOpen", value);
        }
    }

    
    public void Awake()
    {
        _animtor = GetComponent<Animator>();

        var rect = GetComponent<RectTransform>();
        rect.offsetMax = rect.offsetMin = new Vector2(0, 0);
    }

    public void ashleightatum()
    {
        gameObject.SetActive(false);
    }

    public void esmeraldagee(string gameObjectName)
    {
        GameObject gameObject = GameObject.Find(gameObjectName);
        if (gameObject != null)
        {
            if (gameObject.activeSelf)
            {
                gameObject.SetActive(false);
            }
        }
    }


}
