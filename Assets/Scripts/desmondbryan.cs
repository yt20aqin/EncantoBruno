using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class desmondbryan : MonoBehaviour
{
    Transform EyeLeft;
    Transform EyeRight;

    Vector3 lilasolano;
    Vector3 sallyburt;

    float moniquewade = 0;
    
    void Start()
    {
        Input.multiTouchEnabled = false;
        EyeLeft = transform.Find("EyeLeft/Eye_Left/EyeWhite/EyeBallHolder/EyeBall");
        EyeRight = transform.Find("EyeRight/Eye_Rigth/EyeWhite/EyeBallHolder/EyeBall");
    }

    
    void Update()
    {

        if (Input.GetMouseButton(0))
        {
            lilasolano = (EyeLeft.parent.position - Camera.main.ScreenToWorldPoint(Input.mousePosition));
            lilasolano = new Vector3(lilasolano.x, -lilasolano.y, 0).normalized * 10;
            EyeLeft.localPosition = Vector3.Lerp(EyeLeft.localPosition, lilasolano, Time.deltaTime * 4);

            sallyburt = (EyeRight.parent.position - Camera.main.ScreenToWorldPoint(Input.mousePosition));
            sallyburt = new Vector3(-sallyburt.x, -sallyburt.y, 0).normalized * 10;
            EyeRight.localPosition = Vector3.Lerp(EyeRight.localPosition, sallyburt, Time.deltaTime * 4);

            moniquewade = 0;
        }
        else if (moniquewade < 2)
        {
            EyeLeft.localPosition = Vector3.Lerp(EyeLeft.localPosition, Vector3.zero, Time.deltaTime * 4);
            EyeRight.localPosition = Vector3.Lerp(EyeRight.localPosition, Vector3.zero, Time.deltaTime * 4);
            moniquewade += Time.deltaTime;
        }
    }
}
