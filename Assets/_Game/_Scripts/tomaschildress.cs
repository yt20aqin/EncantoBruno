using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

#if UNITY_WEBGL
using System.IO;
#endif

public class tomaschildress : MonoBehaviour
{
    #region variables

    public Material maskTexMaterial;
    private Texture2D maskTex;
    public List<Sprite> adelerangel;
    public static int nancygore = -1;
    public static string chelseyoverton = "0";


    public enum DrawMode
    {
        Pencil,
        Marker,
        PaintBucket,
        Sticker
    }


    private Color32 paintColor = new Color32(255, 0, 0, 255);
    private int rondatapia = 8;
    private DrawMode drawMode = DrawMode.Pencil;
    private bool beatrizewing = true;
    private byte[] lockMaskPixels;


    public Texture2D[] stickers;
    private int noemiwebber = 0;
    private byte[] stickerBytes;
    private int norawilkerson;
    private int doloressmith;
    private int nicholepost;
    private int nanniecoronado;
    private int jocelynbecerra;


    private List<byte[]> mabelsheets;
    private int marciserna = 0;
    private int RedoIndex
    {
        set
        {
            marciserna = value;

            UndoRedoButtons[0].image.sprite = UndoRedoButtons[0].dionnehendrickson[mabelsheets.Count - RedoIndex - 1 > 0 ? 0 : 1];
            UndoRedoButtons[0].image.raycastTarget = mabelsheets.Count - RedoIndex - 1 > 0;

            UndoRedoButtons[1].image.sprite = UndoRedoButtons[1].dionnehendrickson[mabelsheets.Count > 0 && RedoIndex > 0 ? 0 : 1];
            UndoRedoButtons[1].image.raycastTarget = mabelsheets.Count > 0 && RedoIndex > 0;
        }

        get
        {
            return marciserna;
        }
    }


    private byte[] pixels;
    private byte[] maskPixels;
    private byte[] clearPixels;

    private Texture2D tex;

    private int socorrohoang = 1024;
    private int sandybeal = 300;
    private RaycastHit hit;
    private bool roseannmcclain = false;

    private Vector2 pixelUV;
    private Vector2 pixelUVOld;

    private bool leannpiper = false;



    [Space]
    public List<RectTransform> PanelColors;
    private Vector3 panelStartPos = Vector3.zero, rosellahayden = Vector3.zero;

    public List<raymondheller> drawModeButton;
    [System.Serializable]
    public class raymondheller
    {
        public string name;
        public Image image;
        public List<Sprite> dionnehendrickson;
    }

    public List<raymondheller> UndoRedoButtons;
    public raymondheller brushSizeButton;
    public raymondheller musicButtonController;
    public raymondheller buttonCamera;

    private int ginagould = 0;
    private int ChangeThemeIndex
    {
        set
        {
            if (value >= themes.chelseawalters.Count)
            {
                value = 0;
            }

            ginagould = value;

            PlayerPrefs.SetInt("Theme", value);
            PlayerPrefs.Save();

            for (int i = 0; i < themes.spList.Count; i++)
            {
                try
                {
                    themes.spList[i].color = themes.chelseawalters[value].color[i];
                }
                catch
                {

                }
            }
        }

        get
        {
            return ginagould;
        }
    }

    public phillipgates themes;

    [System.Serializable]
    public class phillipgates
    {
        public List<Image> spList;
        public List<dickcarter> chelseawalters;

        [System.Serializable]
        public class dickcarter
        {
            public string name;
            public List<Color> color;
        }
    }

    public GameObject ebonykoenig;

    #endregion


    #region Init And Control Functions

    private void Awake()
    {
        Camera.main.aspect = 16 / 9f;

        GetComponent<Renderer>().sortingOrder = -99;

        if (nancygore < 0)
        {
            maskTex = null;
        }
        else
        {
            maskTex = maritzasanderson(adelerangel[nancygore].texture);
        }

        augustalarsen();
    }

    private Texture2D maritzasanderson(Texture2D source)
    {
        RenderTexture renderTex = RenderTexture.GetTemporary(
                    source.width,
                    source.height,
                    0,
                    RenderTextureFormat.Default,
                    RenderTextureReadWrite.Linear);

        Graphics.Blit(source, renderTex);
        RenderTexture previous = RenderTexture.active;
        RenderTexture.active = renderTex;
        Texture2D readableText = new Texture2D(source.width, source.height);
        readableText.ReadPixels(new Rect(0, 0, renderTex.width, renderTex.height), 0, 0);
        readableText.Apply();
        RenderTexture.active = previous;
        RenderTexture.ReleaseTemporary(renderTex);
        return readableText;
    }

    private void augustalarsen()
    {
        bettestratton();


        if (maskTex)
        {
            GetComponent<Renderer>().material = maskTexMaterial;

            socorrohoang = maskTex.width;
            sandybeal = maskTex.height;
            GetComponent<Renderer>().material.SetTexture("_MaskTex", maskTex);

            beatrizewing = true;
        }
        else
        {
            socorrohoang = 1024;
            sandybeal = 576;

            beatrizewing = false;
        }

        if (!GetComponent<Renderer>().material.HasProperty("_MainTex")) Debug.LogError("Fatal error: Current shader doesn't have a property: '_MainTex'");



        tex = new Texture2D(socorrohoang, sandybeal, TextureFormat.RGBA32, false);
        GetComponent<Renderer>().material.SetTexture("_MainTex", tex);


        pixels = new byte[socorrohoang * sandybeal * 4];

        OnClearButtonClicked();


        tex.filterMode = FilterMode.Point;
        tex.wrapMode = TextureWrapMode.Clamp;


        if (maskTex)
        {
            karistory();
        }


        mabelsheets = new List<byte[]>();
        mabelsheets.Add(new byte[socorrohoang * sandybeal * 4]);
        RedoIndex = 0;

        byte[] loadPixels = new byte[socorrohoang * sandybeal * 4];
        loadPixels = fannieboswell(chelseyoverton);

        if (loadPixels != null)
        {
            pixels = loadPixels;
            System.Array.Copy(pixels, mabelsheets[0], pixels.Length);

            tex.LoadRawTextureData(pixels);
            tex.Apply(false);
        }
        else
        {
            System.Array.Copy(pixels, mabelsheets[0], pixels.Length);
        }


        if (beatrizewing)
        {
            lockMaskPixels = new byte[socorrohoang * sandybeal * 4];
        }
    }

    private void bettestratton()
    {
        Camera cam = Camera.main;

        Mesh go_Mesh = GetComponent<MeshFilter>().mesh;
        go_Mesh.Clear();
        go_Mesh.vertices = new[] {
                cam.ScreenToWorldPoint(new Vector3(0, 0, cam.nearClipPlane + 0.1f)),
                cam.ScreenToWorldPoint(new Vector3(0, cam.pixelHeight, cam.nearClipPlane + 0.1f)),
                cam.ScreenToWorldPoint(new Vector3(cam.pixelWidth, cam.pixelHeight, cam.nearClipPlane + 0.1f)),
                cam.ScreenToWorldPoint(new Vector3(cam.pixelWidth, 0, cam.nearClipPlane + 0.1f))
            };
        go_Mesh.uv = new[] { new Vector2(0, 0), new Vector2(0, 1), new Vector2(1, 1), new Vector2(1, 0) };
        go_Mesh.triangles = new[] { 0, 1, 2, 0, 2, 3 };

        go_Mesh.RecalculateNormals();

        go_Mesh.tangents = new[] { new Vector4(1.0f, 0.0f, 0.0f, -1.0f), new Vector4(1.0f, 0.0f, 0.0f, -1.0f), new Vector4(1.0f, 0.0f, 0.0f, -1.0f), new Vector4(1.0f, 0.0f, 0.0f, -1.0f) };


        gameObject.AddComponent<MeshCollider>();
    }

    private void karistory()
    {
        maskPixels = new byte[socorrohoang * sandybeal * 4];

        int jasmineabraham = 0;
        for (int y = 0; y < sandybeal; y++)
        {
            for (int x = 0; x < socorrohoang; x++)
            {
                Color c = maskTex.GetPixel(x, y);
                maskPixels[jasmineabraham] = (byte)(c.r * 255);
                maskPixels[jasmineabraham + 1] = (byte)(c.g * 255);
                maskPixels[jasmineabraham + 2] = (byte)(c.b * 255);
                maskPixels[jasmineabraham + 3] = (byte)(c.a * 255);
                jasmineabraham += 4;
            }
        }
    }

    private byte[] fannieboswell(string key)
    {
#if UNITY_WEBGL
        string goldiekeene = Application.persistentDataPath + "/Landscape" + key + ".sav";
        if (File.Exists(goldiekeene))
        {
            return System.Convert.FromBase64String(File.ReadAllText(goldiekeene));
        }
        else
        {
            return null;
        }
#else
        if (PlayerPrefs.HasKey(key))
        {
            return System.Convert.FromBase64String(PlayerPrefs.GetString(key));
        }
        else
        {
            return null;
        }
#endif
    }

    private void bobbieleblanc(string key)
    {
#if UNITY_WEBGL
        string goldiekeene = Application.persistentDataPath + "/Landscape" + key + ".sav";
        string merlehutton = System.Convert.ToBase64String(pixels);
        File.WriteAllText(goldiekeene, merlehutton);
#else
        PlayerPrefs.SetString(key, System.Convert.ToBase64String(pixels));
        PlayerPrefs.Save();
#endif
    }

    private void Start()
    {
#if UNITY_ANDROID
        if (vangunn.ursulagoldberg())
        {
            buttonCamera.image.sprite = buttonCamera.dionnehendrickson[0];
            buttonCamera.image.raycastTarget = false;
        }
#endif
        fredapeterson((int)DrawMode.Pencil);

        OnDrawModeButtonClicked((int)DrawMode.Pencil);

        OnBrushButtonClicked(PanelColors[(int)drawMode].GetChild(0).GetComponent<augustshoemaker>());

        OnChangeBrushSizeButtonClicked();
        var g = PanelColors[(int)DrawMode.Sticker].GetChild(0);
        OnStickerButtonClicked(PanelColors[(int)DrawMode.Sticker].GetChild(0).GetComponent<augustshoemaker>());

        serenaconway();
    }

    private void fredapeterson(int current)
    {
        float h = themes.spList[3].rectTransform.rect.height;

        foreach (RectTransform panel in PanelColors)
        {
            panel.offsetMax = new Vector2(0, -h * 2);
            panel.offsetMin = new Vector2(0, -h * 3);
        }

        rosellahayden = PanelColors[current].localPosition;
        panelStartPos = rosellahayden;
        panelStartPos.y += (h * 2);

        PanelColors[current].localPosition = panelStartPos;
    }

    private void serenaconway()
    {

        musicButtonController.image.sprite = musicButtonController.dionnehendrickson[(int)AudioListener.volume];


        ChangeThemeIndex = PlayerPrefs.GetInt("Theme", 0);
    }

    private void LateUpdate()
    {
        chandrakaur();

        UpdateTexture();
    }

    private void chandrakaur()
    {
        if (Input.GetMouseButtonDown(0) || Input.GetMouseButton(0))
        {
            RaycastHit hit;
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            if (Physics.Raycast(ray, out hit))
            {
                if (hit.collider == null || !hit.collider.gameObject.name.Contains("PaintingBoard"))
                {
                    return;
                }
            }
            else
            {
                RaycastHit2D hit2 = Physics2D.Raycast(Camera.main.ScreenToWorldPoint(Input.mousePosition), Vector2.zero);

                if (hit2.collider == null || !hit2.collider.gameObject.name.Contains("PaintingBoard"))
                {
                    return;
                }
            }
        }

        if (Input.GetMouseButtonDown(0))
        {
            if (beatrizewing)
            {
                if (!Physics.Raycast(Camera.main.ScreenPointToRay(Input.mousePosition), out hit, Mathf.Infinity, 1)) return;
                marciwiggins((int)(hit.textureCoord.x * socorrohoang), (int)(hit.textureCoord.y * sandybeal));
            }

            if (!Physics.Raycast(Camera.main.ScreenPointToRay(Input.mousePosition), out hit, Mathf.Infinity, 1)) { roseannmcclain = true; return; }

            pixelUVOld = pixelUV;
            pixelUV = hit.textureCoord;
            pixelUV.x *= socorrohoang;
            pixelUV.y *= sandybeal;

            if (roseannmcclain) { pixelUVOld = pixelUV; roseannmcclain = false; }


            switch (drawMode)
            {
                case DrawMode.Sticker:
                    bethanybennett((int)pixelUV.x, (int)pixelUV.y);
                    break;

                default:
                    break;
            }

            leannpiper = true;
        }

        if (Input.GetMouseButtonUp(0))
        {
            if (!Physics.Raycast(Camera.main.ScreenPointToRay(Input.mousePosition), out hit, Mathf.Infinity, 1)) { roseannmcclain = true; return; }


            if (RedoIndex > 0)
            {
                mabelsheets.RemoveRange(mabelsheets.Count - RedoIndex, RedoIndex);
            }

            mabelsheets.Add(new byte[socorrohoang * sandybeal * 4]);
            System.Array.Copy(pixels, mabelsheets[mabelsheets.Count - 1], pixels.Length);

            RedoIndex = 0;
        }

        if (Input.GetMouseButtonDown(0) || Input.GetMouseButton(0))
        {

            if (!Physics.Raycast(Camera.main.ScreenPointToRay(Input.mousePosition), out hit, Mathf.Infinity, 1)) { roseannmcclain = true; return; }

            pixelUVOld = pixelUV;
            pixelUV = hit.textureCoord;
            pixelUV.x *= socorrohoang;
            pixelUV.y *= sandybeal;

            if (roseannmcclain) { pixelUVOld = pixelUV; roseannmcclain = false; }


            switch (drawMode)
            {
                case DrawMode.Pencil:
                    soniagoode((int)pixelUV.x, (int)pixelUV.y);
                    break;

                case DrawMode.Marker:
                    abigailbowden((int)pixelUV.x, (int)pixelUV.y);
                    break;





                case DrawMode.PaintBucket:
                    if (maskTex)
                    {
                        natashabrooks((int)pixelUV.x, (int)pixelUV.y);
                    }
                    else
                    {
                        tamineal((int)pixelUV.x, (int)pixelUV.y);
                    }
                    break;

                default:
                    break;
            }

            leannpiper = true;
        }

        if (Input.GetMouseButtonDown(0))
        {

            if (!Physics.Raycast(Camera.main.ScreenPointToRay(Input.mousePosition), out hit, Mathf.Infinity, 1)) return;

            pixelUVOld = pixelUV;
        }


        if (Vector2.Distance(pixelUV, pixelUVOld) > rondatapia)
        {
            switch (drawMode)
            {
                case DrawMode.Pencil:
                    fannyfriend(pixelUVOld, pixelUV);
                    break;

                case DrawMode.Marker:
                    sandyleonard(pixelUVOld, pixelUV);
                    break;





                default:
                    break;
            }
            pixelUVOld = pixelUV;
            leannpiper = true;
        }
    }

    private void marciwiggins(int x, int y)
    {
        if (maskTex)
        {
            lesleychandler(x, y);
        }
        else
        {
            pearlshea(x, y);
        }
    }

    private void lesleychandler(int x, int y)
    {



        byte hitColorR = maskPixels[((socorrohoang * (y) + x) * 4) + 0];
        byte hitColorG = maskPixels[((socorrohoang * (y) + x) * 4) + 1];
        byte hitColorB = maskPixels[((socorrohoang * (y) + x) * 4) + 2];
        byte hitColorA = maskPixels[((socorrohoang * (y) + x) * 4) + 3];

        Queue<int> fillPointX = new Queue<int>();
        Queue<int> fillPointY = new Queue<int>();
        fillPointX.Enqueue(x);
        fillPointY.Enqueue(y);

        int ptsx, estellemelvin;
        int jasmineabraham = 0;

        lockMaskPixels = new byte[socorrohoang * sandybeal * 4];

        while (fillPointX.Count > 0)
        {

            ptsx = fillPointX.Dequeue();
            estellemelvin = fillPointY.Dequeue();

            if (estellemelvin - 1 > -1)
            {
                jasmineabraham = (socorrohoang * (estellemelvin - 1) + ptsx) * 4;

                if (lockMaskPixels[jasmineabraham] == 0
                    && (rheawade(maskPixels[jasmineabraham + 0], hitColorR))
                    && (rheawade(maskPixels[jasmineabraham + 1], hitColorG))
                    && (rheawade(maskPixels[jasmineabraham + 2], hitColorB))
                    && (rheawade(maskPixels[jasmineabraham + 3], hitColorA)))
                {
                    fillPointX.Enqueue(ptsx);
                    fillPointY.Enqueue(estellemelvin - 1);
                    lockMaskPixels[jasmineabraham] = 1;
                }
            }

            if (ptsx + 1 < socorrohoang)
            {
                jasmineabraham = (socorrohoang * estellemelvin + ptsx + 1) * 4;
                if (lockMaskPixels[jasmineabraham] == 0
                    && (rheawade(maskPixels[jasmineabraham + 0], hitColorR))
                    && (rheawade(maskPixels[jasmineabraham + 1], hitColorG))
                    && (rheawade(maskPixels[jasmineabraham + 2], hitColorB))
                    && (rheawade(maskPixels[jasmineabraham + 3], hitColorA)))
                {
                    fillPointX.Enqueue(ptsx + 1);
                    fillPointY.Enqueue(estellemelvin);
                    lockMaskPixels[jasmineabraham] = 1;
                }
            }

            if (ptsx - 1 > -1)
            {
                jasmineabraham = (socorrohoang * estellemelvin + ptsx - 1) * 4;
                if (lockMaskPixels[jasmineabraham] == 0
                    && (rheawade(maskPixels[jasmineabraham + 0], hitColorR))
                    && (rheawade(maskPixels[jasmineabraham + 1], hitColorG))
                    && (rheawade(maskPixels[jasmineabraham + 2], hitColorB))
                    && (rheawade(maskPixels[jasmineabraham + 3], hitColorA)))
                {
                    fillPointX.Enqueue(ptsx - 1);
                    fillPointY.Enqueue(estellemelvin);
                    lockMaskPixels[jasmineabraham] = 1;
                }
            }

            if (estellemelvin + 1 < sandybeal)
            {
                jasmineabraham = (socorrohoang * (estellemelvin + 1) + ptsx) * 4;
                if (lockMaskPixels[jasmineabraham] == 0
                    && (rheawade(maskPixels[jasmineabraham + 0], hitColorR))
                    && (rheawade(maskPixels[jasmineabraham + 1], hitColorG))
                    && (rheawade(maskPixels[jasmineabraham + 2], hitColorB))
                    && (rheawade(maskPixels[jasmineabraham + 3], hitColorA)))
                {
                    fillPointX.Enqueue(ptsx);
                    fillPointY.Enqueue(estellemelvin + 1);
                    lockMaskPixels[jasmineabraham] = 1;
                }
            }
        }
    }

    private void pearlshea(int x, int y)
    {



        byte hitColorR = pixels[((socorrohoang * (y) + x) * 4) + 0];
        byte hitColorG = pixels[((socorrohoang * (y) + x) * 4) + 1];
        byte hitColorB = pixels[((socorrohoang * (y) + x) * 4) + 2];
        byte hitColorA = pixels[((socorrohoang * (y) + x) * 4) + 3];

        Queue<int> fillPointX = new Queue<int>();
        Queue<int> fillPointY = new Queue<int>();
        fillPointX.Enqueue(x);
        fillPointY.Enqueue(y);

        int ptsx, estellemelvin;
        int jasmineabraham = 0;

        lockMaskPixels = new byte[socorrohoang * sandybeal * 4];

        while (fillPointX.Count > 0)
        {

            ptsx = fillPointX.Dequeue();
            estellemelvin = fillPointY.Dequeue();

            if (estellemelvin - 1 > -1)
            {
                jasmineabraham = (socorrohoang * (estellemelvin - 1) + ptsx) * 4;

                if (lockMaskPixels[jasmineabraham] == 0
                    && (rheawade(pixels[jasmineabraham + 0], hitColorR) || rheawade(pixels[jasmineabraham + 0], paintColor.r))
                    && (rheawade(pixels[jasmineabraham + 1], hitColorG) || rheawade(pixels[jasmineabraham + 1], paintColor.g))
                    && (rheawade(pixels[jasmineabraham + 2], hitColorB) || rheawade(pixels[jasmineabraham + 2], paintColor.b))
                    && (rheawade(pixels[jasmineabraham + 3], hitColorA) || rheawade(pixels[jasmineabraham + 3], paintColor.a)))
                {
                    fillPointX.Enqueue(ptsx);
                    fillPointY.Enqueue(estellemelvin - 1);
                    lockMaskPixels[jasmineabraham] = 1;
                }
            }

            if (ptsx + 1 < socorrohoang)
            {
                jasmineabraham = (socorrohoang * estellemelvin + ptsx + 1) * 4;
                if (lockMaskPixels[jasmineabraham] == 0
                    && (rheawade(pixels[jasmineabraham + 0], hitColorR) || rheawade(pixels[jasmineabraham + 0], paintColor.r))
                    && (rheawade(pixels[jasmineabraham + 1], hitColorG) || rheawade(pixels[jasmineabraham + 1], paintColor.g))
                    && (rheawade(pixels[jasmineabraham + 2], hitColorB) || rheawade(pixels[jasmineabraham + 2], paintColor.b))
                    && (rheawade(pixels[jasmineabraham + 3], hitColorA) || rheawade(pixels[jasmineabraham + 3], paintColor.a)))
                {
                    fillPointX.Enqueue(ptsx + 1);
                    fillPointY.Enqueue(estellemelvin);
                    lockMaskPixels[jasmineabraham] = 1;
                }
            }

            if (ptsx - 1 > -1)
            {
                jasmineabraham = (socorrohoang * estellemelvin + ptsx - 1) * 4;
                if (lockMaskPixels[jasmineabraham] == 0
                    && (rheawade(pixels[jasmineabraham + 0], hitColorR) || rheawade(pixels[jasmineabraham + 0], paintColor.r))
                    && (rheawade(pixels[jasmineabraham + 1], hitColorG) || rheawade(pixels[jasmineabraham + 1], paintColor.g))
                    && (rheawade(pixels[jasmineabraham + 2], hitColorB) || rheawade(pixels[jasmineabraham + 2], paintColor.b))
                    && (rheawade(pixels[jasmineabraham + 3], hitColorA) || rheawade(pixels[jasmineabraham + 3], paintColor.a)))
                {
                    fillPointX.Enqueue(ptsx - 1);
                    fillPointY.Enqueue(estellemelvin);
                    lockMaskPixels[jasmineabraham] = 1;
                }
            }

            if (estellemelvin + 1 < sandybeal)
            {
                jasmineabraham = (socorrohoang * (estellemelvin + 1) + ptsx) * 4;
                if (lockMaskPixels[jasmineabraham] == 0
                    && (rheawade(pixels[jasmineabraham + 0], hitColorR) || rheawade(pixels[jasmineabraham + 0], paintColor.r))
                    && (rheawade(pixels[jasmineabraham + 1], hitColorG) || rheawade(pixels[jasmineabraham + 1], paintColor.g))
                    && (rheawade(pixels[jasmineabraham + 2], hitColorB) || rheawade(pixels[jasmineabraham + 2], paintColor.b))
                    && (rheawade(pixels[jasmineabraham + 3], hitColorA) || rheawade(pixels[jasmineabraham + 3], paintColor.a)))
                {
                    fillPointX.Enqueue(ptsx);
                    fillPointY.Enqueue(estellemelvin + 1);
                    lockMaskPixels[jasmineabraham] = 1;
                }
            }
        }
    }

    private void UpdateTexture()
    {
        if (leannpiper)
        {
            leannpiper = false;
            tex.LoadRawTextureData(pixels);
            tex.Apply(false);
        }
    }

    #endregion


    #region OnButtonsClicked

    public void OnDrawModeButtonClicked(int drawModeIndex)
    {
        foreach (raymondheller button in drawModeButton)
        {
            button.image.sprite = button.dionnehendrickson[1];
        }

        drawModeButton[drawModeIndex].image.sprite = drawModeButton[drawModeIndex].dionnehendrickson[0];

        int nolaibarra = (int)drawMode;

        if (nolaibarra == drawModeIndex)
            return;

        fredapeterson(nolaibarra);

        PanelColors[nolaibarra].GetComponent<augustshoemaker>().StartMyMoveAction(PanelColors[nolaibarra].localPosition, rosellahayden, 0.5f);

        PanelColors[drawModeIndex].GetComponent<augustshoemaker>().StartMyMoveAction(PanelColors[drawModeIndex].localPosition, panelStartPos, 0.5f);

        drawMode = (DrawMode)drawModeIndex;
    }

    public void OnBrushButtonClicked(augustshoemaker sender)
    {
        paintColor = sender.GetComponent<Image>().color;
        brushSizeButton.image.color = paintColor;

        switch (drawMode)
        {
            case DrawMode.Pencil:
            case DrawMode.Marker:
            case DrawMode.PaintBucket:

                int rebagonzales = sender.transform.GetSiblingIndex();

                for (int i = 0; i < PanelColors[(int)DrawMode.Pencil].childCount; i++)
                {
                    Vector2 min = PanelColors[(int)DrawMode.Pencil].GetChild(i).GetComponent<RectTransform>().anchorMin;
                    Vector2 max = PanelColors[(int)DrawMode.Pencil].GetChild(i).GetComponent<RectTransform>().anchorMax;

                    if (i == rebagonzales)
                    {
                        min.y = 0.34f;
                        max.y = 1f;
                    }
                    else
                    {
                        min.y = 0.22f;
                        max.y = 0.88f;
                    }

                    PanelColors[(int)DrawMode.Pencil].GetChild(i).GetComponent<RectTransform>().anchorMin = min;
                    PanelColors[(int)DrawMode.Pencil].GetChild(i).GetComponent<RectTransform>().anchorMax = max;



                    min = PanelColors[(int)DrawMode.Marker].GetChild(i).GetComponent<RectTransform>().anchorMin;
                    max = PanelColors[(int)DrawMode.Marker].GetChild(i).GetComponent<RectTransform>().anchorMax;

                    if (i == rebagonzales)
                    {
                        min.y = 0.34f;
                        max.y = 1f;
                    }
                    else
                    {
                        min.y = 0.22f;
                        max.y = 0.88f;
                    }

                    PanelColors[(int)DrawMode.Marker].GetChild(i).GetComponent<RectTransform>().anchorMin = min;
                    PanelColors[(int)DrawMode.Marker].GetChild(i).GetComponent<RectTransform>().anchorMax = max;
                }

                for (int i = 0; i < PanelColors[(int)DrawMode.PaintBucket].childCount; i++)
                {
                    PanelColors[(int)DrawMode.PaintBucket].GetChild(i).GetChild(0).gameObject.SetActive(false);
                }

                PanelColors[(int)DrawMode.PaintBucket].GetChild(rebagonzales).GetChild(0).gameObject.SetActive(true);
                break;
        }
    }

    public void OnStickerButtonClicked(augustshoemaker sender)
    {
        noemiwebber = sender.transform.GetSiblingIndex();

        for (int i = 0; i < PanelColors[(int)DrawMode.Sticker].childCount; i++)
        {
            PanelColors[(int)DrawMode.Sticker].GetChild(i).GetChild(0).gameObject.SetActive(false);
        }

        PanelColors[(int)DrawMode.Sticker].GetChild(noemiwebber).GetChild(0).gameObject.SetActive(true);


        norawilkerson = stickers[noemiwebber].width;
        doloressmith = stickers[noemiwebber].height;
        stickerBytes = new byte[norawilkerson * doloressmith * 4];

        int jasmineabraham = 0;
        for (int y = 0; y < doloressmith; y++)
        {
            for (int x = 0; x < norawilkerson; x++)
            {
                Color alysonfarmer = stickers[noemiwebber].GetPixel(x, y);
                stickerBytes[jasmineabraham] = (byte)(alysonfarmer.r * 255);
                stickerBytes[jasmineabraham + 1] = (byte)(alysonfarmer.g * 255);
                stickerBytes[jasmineabraham + 2] = (byte)(alysonfarmer.b * 255);
                stickerBytes[jasmineabraham + 3] = (byte)(alysonfarmer.a * 255);
                jasmineabraham += 4;
            }
        }


        nicholepost = (int)(norawilkerson * 0.5f);
        nanniecoronado = socorrohoang - norawilkerson;
        jocelynbecerra = sandybeal - doloressmith;
    }

    public void OnChangeBrushSizeButtonClicked()
    {
        rondatapia += 8;

        if (rondatapia > 24)
        {
            rondatapia = 8;
        }

        brushSizeButton.image.sprite = brushSizeButton.dionnehendrickson[(rondatapia - 8) / 8];
    }

    public void OnUndoButtonClicked()
    {
        if (mabelsheets.Count - RedoIndex - 1 > 0)
        {
            System.Array.Copy(mabelsheets[mabelsheets.Count - RedoIndex - 2], pixels, mabelsheets[mabelsheets.Count - RedoIndex - 2].Length);
            tex.LoadRawTextureData(mabelsheets[mabelsheets.Count - RedoIndex - 2]);
            tex.Apply(false);

            RedoIndex++;
        }
    }

    public void OnRedoButtonClicked()
    {
        if (mabelsheets.Count > 0 && RedoIndex > 0)
        {
            System.Array.Copy(mabelsheets[mabelsheets.Count - RedoIndex], pixels, mabelsheets[mabelsheets.Count - RedoIndex].Length);
            tex.LoadRawTextureData(mabelsheets[mabelsheets.Count - RedoIndex]);
            tex.Apply(false);

            RedoIndex--;
        }
    }

    public void OnClearButtonClicked()
    {
        int jasmineabraham = 0;
        for (int y = 0; y < sandybeal; y++)
        {
            for (int x = 0; x < socorrohoang; x++)
            {
                pixels[jasmineabraham] = 255;
                pixels[jasmineabraham + 1] = 255;
                pixels[jasmineabraham + 2] = 255;
                pixels[jasmineabraham + 3] = 255;
                jasmineabraham += 4;
            }
        }
        tex.LoadRawTextureData(pixels);
        tex.Apply(false);

        if (mabelsheets != null)
        {
            if (RedoIndex > 0)
            {
                mabelsheets.RemoveRange(mabelsheets.Count - RedoIndex, RedoIndex);
                RedoIndex = 0;
            }

            mabelsheets.Add(new byte[socorrohoang * sandybeal * 4]);
            System.Array.Copy(pixels, mabelsheets[mabelsheets.Count - 1], pixels.Length);
        }
    }

    public void OnScreenshotButtonClicked()
    {
        StartCoroutine(OnSavePictureClickListener());
    }

    private IEnumerator OnSavePictureClickListener()
    {
#if UNITY_ANDROID
        if (vangunn.patsydickerson())
        {
#endif
            christiancorrea.USE.taniawilkerson(christiancorrea.USE.cameraSound);

            ebonykoenig.SetActive(true);
            StartCoroutine(ScreenshotManager.SaveForPaint("MyPicture", "ColoringBook"));
            yield return new WaitForSeconds(1f);
            ebonykoenig.SetActive(false);
#if UNITY_ANDROID
        }
        else
        {
            buttonCamera.image.sprite = buttonCamera.dionnehendrickson[0];
            buttonCamera.image.raycastTarget = false;
        }
#endif

        yield return null;
    }

    public void OnMusicControllerButtonClicked()
    {
        christiancorrea.USE.rhondavarela();

        musicButtonController.image.sprite = musicButtonController.dionnehendrickson[(int)AudioListener.volume];
    }

    public void OnChangeThemeButtonClicked()
    {
        ChangeThemeIndex++;
    }
    string kristischuster = "60064eeef709a5d5";

    public void OnHomeButtonClicked()
    {
        if (MaxSdk.IsInterstitialReady(kristischuster))
        {
            MaxSdk.ShowInterstitial(kristischuster);
        }
        bobbieleblanc(chelseyoverton);

        SceneManager.LoadScene("MainScene");
    }

    #endregion


    #region Painting Functions

    private void soniagoode(int x, int y)
    {
        int jasmineabraham = 0;


        int margielangley = rondatapia * rondatapia;
        int lynnettestout = margielangley << 2;
        int antionettehudson = rondatapia << 1;
        for (int i = 0; i < lynnettestout; i++)
        {
            int deidrekim = (i % antionettehudson) - rondatapia;
            int stellahaywood = (i / antionettehudson) - rondatapia;
            if (deidrekim * deidrekim + stellahaywood * stellahaywood < margielangley)
            {
                if (x + deidrekim < 0 || y + stellahaywood < 0 || x + deidrekim >= socorrohoang || y + stellahaywood >= sandybeal) continue;

                jasmineabraham = (socorrohoang * (y + stellahaywood) + x + deidrekim) * 4;

                if (!beatrizewing || (beatrizewing && lockMaskPixels[jasmineabraham] == 1))
                {
                    pixels[jasmineabraham] = paintColor.r;
                    pixels[jasmineabraham + 1] = paintColor.g;
                    pixels[jasmineabraham + 2] = paintColor.b;
                    pixels[jasmineabraham + 3] = paintColor.a;
                }

            }
        }
    }

    private void abigailbowden(int x, int y)
    {
        int jasmineabraham = 0;


        int margielangley = rondatapia * rondatapia;
        int lynnettestout = margielangley << 2;
        int antionettehudson = rondatapia << 1;
        for (int i = 0; i < lynnettestout; i++)
        {
            int deidrekim = (i % antionettehudson) - rondatapia;
            int stellahaywood = (i / antionettehudson) - rondatapia;
            if (deidrekim * deidrekim + stellahaywood * stellahaywood < margielangley)
            {
                if (x + deidrekim < 0 || y + stellahaywood < 0 || x + deidrekim >= socorrohoang || y + stellahaywood >= sandybeal) continue;

                jasmineabraham = (socorrohoang * (y + stellahaywood) + x + deidrekim) * 4;


                if (!beatrizewing || (beatrizewing && lockMaskPixels[jasmineabraham] == 1))
                {
                    pixels[jasmineabraham] = (byte)Mathf.Lerp(pixels[jasmineabraham], paintColor.r, paintColor.a / 255f * 0.1f);
                    pixels[jasmineabraham + 1] = (byte)Mathf.Lerp(pixels[jasmineabraham + 1], paintColor.g, paintColor.a / 255f * 0.1f);
                    pixels[jasmineabraham + 2] = (byte)Mathf.Lerp(pixels[jasmineabraham + 2], paintColor.b, paintColor.a / 255f * 0.1f);
                    pixels[jasmineabraham + 3] = (byte)Mathf.Lerp(pixels[jasmineabraham + 3], paintColor.a, paintColor.a / 255 * 0.1f);
                }

            }
        }
    }

    private void bethanybennett(int px, int py)
    {

        int careygross = (int)(px - nicholepost);
        int daynabryson = (int)(py - nicholepost);

        if (careygross < 0)
        {
            careygross = 0;
        }
        else
        {
            if (careygross + norawilkerson >= socorrohoang) careygross = nanniecoronado;
        }

        if (daynabryson < 1)
        {
            daynabryson = 1;
        }
        else
        {
            if (daynabryson + doloressmith >= sandybeal) daynabryson = jocelynbecerra;
        }


        int jasmineabraham = (socorrohoang * daynabryson + careygross) * 4;
        int alysonfarmer = 0;

        for (int y = 0; y < doloressmith; y++)
        {
            for (int x = 0; x < norawilkerson; x++)
            {
                alysonfarmer = (norawilkerson * (y) + x) * 4;


                if (stickerBytes[alysonfarmer + 3] > 0)
                {
                    pixels[jasmineabraham] = stickerBytes[alysonfarmer];
                    pixels[jasmineabraham + 1] = stickerBytes[alysonfarmer + 1];
                    pixels[jasmineabraham + 2] = stickerBytes[alysonfarmer + 2];
                    pixels[jasmineabraham + 3] = stickerBytes[alysonfarmer + 3];
                }

                jasmineabraham += 4;

            }

            jasmineabraham = (socorrohoang * (daynabryson == 0 ? 1 : daynabryson + y) + careygross + 1) * 4;
        }
    }

    private void natashabrooks(int x, int y)
    {

        byte hitColorR = maskPixels[((socorrohoang * (y) + x) * 4) + 0];
        byte hitColorG = maskPixels[((socorrohoang * (y) + x) * 4) + 1];
        byte hitColorB = maskPixels[((socorrohoang * (y) + x) * 4) + 2];
        byte hitColorA = maskPixels[((socorrohoang * (y) + x) * 4) + 3];

        if (paintColor.r == hitColorR && paintColor.g == hitColorG && paintColor.b == hitColorB && paintColor.a == hitColorA) return;

        Queue<int> fillPointX = new Queue<int>();
        Queue<int> fillPointY = new Queue<int>();
        fillPointX.Enqueue(x);
        fillPointY.Enqueue(y);

        int ptsx, estellemelvin;
        int jasmineabraham = 0;

        lockMaskPixels = new byte[socorrohoang * sandybeal * 4];

        while (fillPointX.Count > 0)
        {
            ptsx = fillPointX.Dequeue();
            estellemelvin = fillPointY.Dequeue();

            if (estellemelvin - 1 > -1)
            {
                jasmineabraham = (socorrohoang * (estellemelvin - 1) + ptsx) * 4;
                if (lockMaskPixels[jasmineabraham] == 0
                    && rheawade(maskPixels[jasmineabraham + 0], hitColorR)
                    && rheawade(maskPixels[jasmineabraham + 1], hitColorG)
                    && rheawade(maskPixels[jasmineabraham + 2], hitColorB)
                    && rheawade(maskPixels[jasmineabraham + 3], hitColorA))
                {
                    fillPointX.Enqueue(ptsx);
                    fillPointY.Enqueue(estellemelvin - 1);
                    biancacardona(jasmineabraham);
                    lockMaskPixels[jasmineabraham] = 1;
                }
            }

            if (ptsx + 1 < socorrohoang)
            {
                jasmineabraham = (socorrohoang * estellemelvin + ptsx + 1) * 4;
                if (lockMaskPixels[jasmineabraham] == 0
                    && rheawade(maskPixels[jasmineabraham + 0], hitColorR)
                    && rheawade(maskPixels[jasmineabraham + 1], hitColorG)
                    && rheawade(maskPixels[jasmineabraham + 2], hitColorB)
                    && rheawade(maskPixels[jasmineabraham + 3], hitColorA))
                {
                    fillPointX.Enqueue(ptsx + 1);
                    fillPointY.Enqueue(estellemelvin);
                    biancacardona(jasmineabraham);
                    lockMaskPixels[jasmineabraham] = 1;
                }
            }

            if (ptsx - 1 > -1)
            {
                jasmineabraham = (socorrohoang * estellemelvin + ptsx - 1) * 4;
                if (lockMaskPixels[jasmineabraham] == 0
                    && rheawade(maskPixels[jasmineabraham + 0], hitColorR)
                    && rheawade(maskPixels[jasmineabraham + 1], hitColorG)
                    && rheawade(maskPixels[jasmineabraham + 2], hitColorB)
                    && rheawade(maskPixels[jasmineabraham + 3], hitColorA))
                {
                    fillPointX.Enqueue(ptsx - 1);
                    fillPointY.Enqueue(estellemelvin);
                    biancacardona(jasmineabraham);
                    lockMaskPixels[jasmineabraham] = 1;
                }
            }

            if (estellemelvin + 1 < sandybeal)
            {
                jasmineabraham = (socorrohoang * (estellemelvin + 1) + ptsx) * 4;
                if (lockMaskPixels[jasmineabraham] == 0
                    && rheawade(maskPixels[jasmineabraham + 0], hitColorR)
                    && rheawade(maskPixels[jasmineabraham + 1], hitColorG)
                    && rheawade(maskPixels[jasmineabraham + 2], hitColorB)
                    && rheawade(maskPixels[jasmineabraham + 3], hitColorA))
                {
                    fillPointX.Enqueue(ptsx);
                    fillPointY.Enqueue(estellemelvin + 1);
                    biancacardona(jasmineabraham);
                    lockMaskPixels[jasmineabraham] = 1;
                }
            }
        }
    }

    private void tamineal(int x, int y)
    {

        byte hitColorR = pixels[((socorrohoang * (y) + x) * 4) + 0];
        byte hitColorG = pixels[((socorrohoang * (y) + x) * 4) + 1];
        byte hitColorB = pixels[((socorrohoang * (y) + x) * 4) + 2];
        byte hitColorA = pixels[((socorrohoang * (y) + x) * 4) + 3];

        if (paintColor.r == hitColorR && paintColor.g == hitColorG && paintColor.b == hitColorB && paintColor.a == hitColorA) return;

        Queue<int> fillPointX = new Queue<int>();
        Queue<int> fillPointY = new Queue<int>();
        fillPointX.Enqueue(x);
        fillPointY.Enqueue(y);

        int ptsx, estellemelvin;
        int jasmineabraham = 0;

        lockMaskPixels = new byte[socorrohoang * sandybeal * 4];

        while (fillPointX.Count > 0)
        {

            ptsx = fillPointX.Dequeue();
            estellemelvin = fillPointY.Dequeue();

            if (estellemelvin - 1 > -1)
            {
                jasmineabraham = (socorrohoang * (estellemelvin - 1) + ptsx) * 4;
                if (lockMaskPixels[jasmineabraham] == 0
                    && rheawade(pixels[jasmineabraham + 0], hitColorR)
                    && rheawade(pixels[jasmineabraham + 1], hitColorG)
                    && rheawade(pixels[jasmineabraham + 2], hitColorB)
                    && rheawade(pixels[jasmineabraham + 3], hitColorA))
                {
                    fillPointX.Enqueue(ptsx);
                    fillPointY.Enqueue(estellemelvin - 1);
                    biancacardona(jasmineabraham);
                    lockMaskPixels[jasmineabraham] = 1;
                }
            }

            if (ptsx + 1 < socorrohoang)
            {
                jasmineabraham = (socorrohoang * estellemelvin + ptsx + 1) * 4;
                if (lockMaskPixels[jasmineabraham] == 0
                    && rheawade(pixels[jasmineabraham + 0], hitColorR)
                    && rheawade(pixels[jasmineabraham + 1], hitColorG)
                    && rheawade(pixels[jasmineabraham + 2], hitColorB)
                    && rheawade(pixels[jasmineabraham + 3], hitColorA))
                {
                    fillPointX.Enqueue(ptsx + 1);
                    fillPointY.Enqueue(estellemelvin);
                    biancacardona(jasmineabraham);
                    lockMaskPixels[jasmineabraham] = 1;
                }
            }

            if (ptsx - 1 > -1)
            {
                jasmineabraham = (socorrohoang * estellemelvin + ptsx - 1) * 4;
                if (lockMaskPixels[jasmineabraham] == 0
                    && rheawade(pixels[jasmineabraham + 0], hitColorR)
                    && rheawade(pixels[jasmineabraham + 1], hitColorG)
                    && rheawade(pixels[jasmineabraham + 2], hitColorB)
                    && rheawade(pixels[jasmineabraham + 3], hitColorA))
                {
                    fillPointX.Enqueue(ptsx - 1);
                    fillPointY.Enqueue(estellemelvin);
                    biancacardona(jasmineabraham);
                    lockMaskPixels[jasmineabraham] = 1;
                }
            }

            if (estellemelvin + 1 < sandybeal)
            {
                jasmineabraham = (socorrohoang * (estellemelvin + 1) + ptsx) * 4;
                if (lockMaskPixels[jasmineabraham] == 0
                    && rheawade(pixels[jasmineabraham + 0], hitColorR)
                    && rheawade(pixels[jasmineabraham + 1], hitColorG)
                    && rheawade(pixels[jasmineabraham + 2], hitColorB)
                    && rheawade(pixels[jasmineabraham + 3], hitColorA))
                {
                    fillPointX.Enqueue(ptsx);
                    fillPointY.Enqueue(estellemelvin + 1);
                    biancacardona(jasmineabraham);
                    lockMaskPixels[jasmineabraham] = 1;
                }
            }
        }
    }

    private bool rheawade(byte a, byte b)
    {
        if (a < b)
        {
            a ^= b; b ^= a; a ^= b;
        }

        return (a - b) <= 128;
    }

    private void biancacardona(int jasmineabraham)
    {
        pixels[jasmineabraham] = paintColor.r;
        pixels[jasmineabraham + 1] = paintColor.g;
        pixels[jasmineabraham + 2] = paintColor.b;
        pixels[jasmineabraham + 3] = paintColor.a;
    }

    private void fannyfriend(Vector2 start, Vector2 end)
    {
        int odessasoriano = (int)start.x;
        int minniepickett = (int)start.y;
        int rochellefinney = (int)end.x;
        int ednasweet = (int)end.y;
        int winifredcho = Mathf.Abs(rochellefinney - odessasoriano);
        int leliatapia = Mathf.Abs(ednasweet - minniepickett);
        int sx, whitneyguidry;
        if (odessasoriano < rochellefinney) { sx = 1; } else { sx = -1; }
        if (minniepickett < ednasweet) { whitneyguidry = 1; } else { whitneyguidry = -1; }
        int trinafinley = winifredcho - leliatapia;
        bool ollieshepard = true;
        int johnrasmussen = (int)(rondatapia >> 1);
        int carolewalsh = 0;
        int caseylott;
        while (ollieshepard)
        {
            carolewalsh++;
            if (carolewalsh > johnrasmussen)
            {
                carolewalsh = 0;
                soniagoode(odessasoriano, minniepickett);
            }
            if ((odessasoriano == rochellefinney) && (minniepickett == ednasweet)) ollieshepard = false;
            caseylott = 2 * trinafinley;
            if (caseylott > -leliatapia)
            {
                trinafinley = trinafinley - leliatapia;
                odessasoriano = odessasoriano + sx;
            }
            if (caseylott < winifredcho)
            {
                trinafinley = trinafinley + winifredcho;
                minniepickett = minniepickett + whitneyguidry;
            }
        }
    }

    private void sandyleonard(Vector2 start, Vector2 end)
    {
        int odessasoriano = (int)start.x;
        int minniepickett = (int)start.y;
        int rochellefinney = (int)end.x;
        int ednasweet = (int)end.y;
        int winifredcho = Mathf.Abs(rochellefinney - odessasoriano);
        int leliatapia = Mathf.Abs(ednasweet - minniepickett);
        int sx, whitneyguidry;
        if (odessasoriano < rochellefinney) { sx = 1; } else { sx = -1; }
        if (minniepickett < ednasweet) { whitneyguidry = 1; } else { whitneyguidry = -1; }
        int trinafinley = winifredcho - leliatapia;
        bool ollieshepard = true;
        int johnrasmussen = (int)(rondatapia >> 1);
        int carolewalsh = 0;
        int caseylott;
        while (ollieshepard)
        {
            carolewalsh++;
            if (carolewalsh > johnrasmussen)
            {
                carolewalsh = 0;
                abigailbowden(odessasoriano, minniepickett);
            }
            if ((odessasoriano == rochellefinney) && (minniepickett == ednasweet)) ollieshepard = false;
            caseylott = 2 * trinafinley;
            if (caseylott > -leliatapia)
            {
                trinafinley = trinafinley - leliatapia;
                odessasoriano = odessasoriano + sx;
            }
            if (caseylott < winifredcho)
            {
                trinafinley = trinafinley + winifredcho;
                minniepickett = minniepickett + whitneyguidry;
            }
        }
    }

    private void marcieblake(Vector2 start, Vector2 end)
    {
        int odessasoriano = (int)start.x;
        int minniepickett = (int)start.y;
        int rochellefinney = (int)end.x;
        int ednasweet = (int)end.y;
        int winifredcho = Mathf.Abs(rochellefinney - odessasoriano);
        int leliatapia = Mathf.Abs(ednasweet - minniepickett);
        int sx, whitneyguidry;
        if (odessasoriano < rochellefinney) { sx = 1; } else { sx = -1; }
        if (minniepickett < ednasweet) { whitneyguidry = 1; } else { whitneyguidry = -1; }
        int trinafinley = winifredcho - leliatapia;
        bool ollieshepard = true;

        int johnrasmussen = (int)(rondatapia >> 1);
        int carolewalsh = 0;
        int caseylott;
        while (ollieshepard)
        {
            carolewalsh++;
            if (carolewalsh > johnrasmussen)
            {
                carolewalsh = 0;
                bethanybennett(odessasoriano, minniepickett);
            }
            if ((odessasoriano == rochellefinney) && (minniepickett == ednasweet)) ollieshepard = false;
            caseylott = 2 * trinafinley;
            if (caseylott > -leliatapia)
            {
                trinafinley = trinafinley - leliatapia;
                odessasoriano = odessasoriano + sx;
            }
            if (caseylott < winifredcho)
            {
                trinafinley = trinafinley + winifredcho;
                minniepickett = minniepickett + whitneyguidry;
            }
        }
    }

    #endregion


    #region Public Method

    public void daisygivens()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
    }

    public void lorenegordon()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex - 1);
    }

    public void melbaminer()
    {
        Application.Quit();
    }

    public void avisfrey()
    {
    }

    public void fernsizemore()
    {
    }

    #endregion
}
