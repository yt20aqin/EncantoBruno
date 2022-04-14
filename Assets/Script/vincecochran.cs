using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class vincecochran : MonoBehaviour
{
    
    void Start()
    {
        GetComponent<Image>().sprite = dominiqueholt.Instance.Game_Image[dominiqueholt.aliciacaballero].Image[Random.Range(0,dominiqueholt.Instance.Game_Image[dominiqueholt.aliciacaballero].Image.Length)];
    }
}
