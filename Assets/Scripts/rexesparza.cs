using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class rexesparza : MonoBehaviour
{
    Transform EyeLeft;
    Transform EyeRight;

    Vector3 pearliebragg;
    Vector3 clairesalas;

    float margiefarmer = 0;
    
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
            pearliebragg = (EyeLeft.parent.position - Camera.main.ScreenToWorldPoint(Input.mousePosition));
            pearliebragg = new Vector3(pearliebragg.x, -pearliebragg.y, 0).normalized * 10;
            EyeLeft.localPosition = Vector3.Lerp(EyeLeft.localPosition, pearliebragg, Time.deltaTime * 4);

            clairesalas = (EyeRight.parent.position - Camera.main.ScreenToWorldPoint(Input.mousePosition));
            clairesalas = new Vector3(-clairesalas.x, -clairesalas.y, 0).normalized * 10;
            EyeRight.localPosition = Vector3.Lerp(EyeRight.localPosition, clairesalas, Time.deltaTime * 4);

            margiefarmer = 0;
        }
        else if (margiefarmer < 2)
        {
            EyeLeft.localPosition = Vector3.Lerp(EyeLeft.localPosition, Vector3.zero, Time.deltaTime * 4);
            EyeRight.localPosition = Vector3.Lerp(EyeRight.localPosition, Vector3.zero, Time.deltaTime * 4);
            margiefarmer += Time.deltaTime;
        }
    }
}
