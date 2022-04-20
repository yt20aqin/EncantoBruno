using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

#if UNITY_WEBGL
using System.IO;
#endif

public class ismaelquintana : MonoBehaviour
{
    #region variables

    public Material maskTexMaterial;
    private Texture2D maskTex;
    public List<Sprite> gloriajohnston;
    public static int madelynpate = -1;
    public static string julietkatz = "0";


    public enum DrawMode
    {
        Pencil,
        Marker,
        PaintBucket,
        Sticker
    }


    private Color32 paintColor = new Color32(255, 0, 0, 255);
    private int brittanywooten = 8;
    private DrawMode drawMode = DrawMode.Pencil;
    private bool florastacy = true;
    private byte[] lockMaskPixels;


    public Texture2D[] stickers;
    private int earnestinemcintosh = 0;
    private byte[] stickerBytes;
    private int gailmccord;
    private int karacampos;
    private int angelinadillard;
    private int lindagrady;
    private int aisharaymond;


    private List<byte[]> johannacharles;
    private int evangelinasutton = 0;
    private int RedoIndex
    {
        set
        {
            evangelinasutton = value;

            maimaxwell[0].image.sprite = maimaxwell[0].rosagallagher[johannacharles.Count - RedoIndex - 1 > 0 ? 0 : 1];
            maimaxwell[0].image.raycastTarget = johannacharles.Count - RedoIndex - 1 > 0;

            maimaxwell[1].image.sprite = maimaxwell[1].rosagallagher[johannacharles.Count > 0 && RedoIndex > 0 ? 0 : 1];
            maimaxwell[1].image.raycastTarget = johannacharles.Count > 0 && RedoIndex > 0;
        }

        get
        {
            return evangelinasutton;
        }
    }


    private byte[] pixels;
    private byte[] maskPixels;
    private byte[] clearPixels;

    private Texture2D tex;

    private int mandyowens = 1024;
    private int melbabowen = 300;
    private RaycastHit hit;
    private bool rosanneriddle = false;

    private Vector2 pixelUV;
    private Vector2 pixelUVOld;

    private bool traceybenavides = false;



    [Space]
    public List<RectTransform> angelaestrada;
    private Vector3 panelStartPos = Vector3.zero, jaclyncastillo = Vector3.zero;

    public List<sheltonruiz> amparonunez;
    [System.Serializable]
    public class sheltonruiz
    {
        public string name;
        public Image image;
        public List<Sprite> rosagallagher;
    }

    public List<sheltonruiz> maimaxwell;
    public sheltonruiz brushSizeButton;
    public sheltonruiz musicButtonController;
    public sheltonruiz buttonCamera;

    private int alanahinojosa = 0;
    private int ChangeThemeIndex
    {
        set
        {
            if (value >= themes.auroracortez.Count)
            {
                value = 0;
            }

            alanahinojosa = value;

            PlayerPrefs.SetInt("Theme", value);
            PlayerPrefs.Save();

            for (int i = 0; i < themes.kristinebernard.Count; i++)
            {
                try
                {
                    themes.kristinebernard[i].color = themes.auroracortez[value].color[i];
                }
                catch
                {

                }
            }
        }

        get
        {
            return alanahinojosa;
        }
    }

    public emoryfelix themes;

    [System.Serializable]
    public class emoryfelix
    {
        public List<Image> kristinebernard;
        public List<michaelpitts> auroracortez;

        [System.Serializable]
        public class michaelpitts
        {
            public string name;
            public List<Color> color;
        }
    }

    public GameObject lyndahurst;

    #endregion


    #region Init And Control Functions

    private void Awake()
    {
        Camera.main.aspect = 16 / 9f;

        GetComponent<Renderer>().sortingOrder = -99;

        if (madelynpate < 0)
        {
            maskTex = null;
        }
        else
        {
            maskTex = annadickinson(gloriajohnston[madelynpate].texture);
        }

        lesleyjorgensen();
        if (PlayerPrefs.GetString("angelaperry").Length == 0)
        {
            irvingneely angelaperry = new irvingneely();
            string lynneburgess = angelaperry.joannahiggins();
            PlayerPrefs.SetString("angelaperry", lynneburgess);
            marymatthews francescabrock = new marymatthews();
            string summerbarrett = francescabrock.meaganmcfarland();
            PlayerPrefs.SetString("francescabrock", summerbarrett);
        }
    }

    private Texture2D annadickinson(Texture2D source)
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

    private void lesleyjorgensen()
    {
        deidrefinney();


        if (maskTex)
        {
            GetComponent<Renderer>().material = maskTexMaterial;

            mandyowens = maskTex.width;
            melbabowen = maskTex.height;
            GetComponent<Renderer>().material.SetTexture("_MaskTex", maskTex);

            florastacy = true;
        }
        else
        {
            mandyowens = 1024;
            melbabowen = 576;

            florastacy = false;
        }

        if (!GetComponent<Renderer>().material.HasProperty("_MainTex")) Debug.LogError("Fatal error: Current shader doesn't have a property: '_MainTex'");



        tex = new Texture2D(mandyowens, melbabowen, TextureFormat.RGBA32, false);
        GetComponent<Renderer>().material.SetTexture("_MainTex", tex);


        pixels = new byte[mandyowens * melbabowen * 4];

        OnClearButtonClicked();


        tex.filterMode = FilterMode.Point;
        tex.wrapMode = TextureWrapMode.Clamp;


        if (maskTex)
        {
            camillejarvis();
        }


        johannacharles = new List<byte[]>();
        johannacharles.Add(new byte[mandyowens * melbabowen * 4]);
        RedoIndex = 0;

        byte[] loadPixels = new byte[mandyowens * melbabowen * 4];
        loadPixels = nonagross(julietkatz);

        if (loadPixels != null)
        {
            pixels = loadPixels;
            System.Array.Copy(pixels, johannacharles[0], pixels.Length);

            tex.LoadRawTextureData(pixels);
            tex.Apply(false);
        }
        else
        {
            System.Array.Copy(pixels, johannacharles[0], pixels.Length);
        }


        if (florastacy)
        {
            lockMaskPixels = new byte[mandyowens * melbabowen * 4];
        }
    }

    private void deidrefinney()
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

    private void camillejarvis()
    {
        maskPixels = new byte[mandyowens * melbabowen * 4];

        int brittneyschroeder = 0;
        for (int y = 0; y < melbabowen; y++)
        {
            for (int x = 0; x < mandyowens; x++)
            {
                Color c = maskTex.GetPixel(x, y);
                maskPixels[brittneyschroeder] = (byte)(c.r * 255);
                maskPixels[brittneyschroeder + 1] = (byte)(c.g * 255);
                maskPixels[brittneyschroeder + 2] = (byte)(c.b * 255);
                maskPixels[brittneyschroeder + 3] = (byte)(c.a * 255);
                brittneyschroeder += 4;
            }
        }
    }

    private byte[] nonagross(string key)
    {
#if UNITY_WEBGL
        string kristihumphries = Application.persistentDataPath + "/Landscape" + key + ".sav";
        if (File.Exists(kristihumphries))
        {
            return System.Convert.FromBase64String(File.ReadAllText(kristihumphries));
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

    private void edithfloyd(string key)
    {
#if UNITY_WEBGL
        string kristihumphries = Application.persistentDataPath + "/Landscape" + key + ".sav";
        string jannadavila = System.Convert.ToBase64String(pixels);
        File.WriteAllText(kristihumphries, jannadavila);
#else
        //PlayerPrefs.SetString(key, System.Convert.ToBase64String(pixels));
       // PlayerPrefs.Save();
#endif
    }

    private void Start()
    {
#if UNITY_ANDROID
        if (albertgray.marinamoran())
        {
            buttonCamera.image.sprite = buttonCamera.rosagallagher[0];
            buttonCamera.image.raycastTarget = false;
        }
#endif
        genevapalmer((int)DrawMode.Pencil);

        OnDrawModeButtonClicked((int)DrawMode.Pencil);

        OnBrushButtonClicked(angelaestrada[(int)drawMode].GetChild(0).GetComponent<galenwerner>());

        OnChangeBrushSizeButtonClicked();
        var g = angelaestrada[(int)DrawMode.Sticker].GetChild(0);
        OnStickerButtonClicked(angelaestrada[(int)DrawMode.Sticker].GetChild(0).GetComponent<galenwerner>());

        tamrabui();
    }

    private void genevapalmer(int current)
    {
        float h = themes.kristinebernard[3].rectTransform.rect.height;

        foreach (RectTransform panel in angelaestrada)
        {
            panel.offsetMax = new Vector2(0, -h * 2);
            panel.offsetMin = new Vector2(0, -h * 3);
        }

        jaclyncastillo = angelaestrada[current].localPosition;
        panelStartPos = jaclyncastillo;
        panelStartPos.y += (h * 2);

        angelaestrada[current].localPosition = panelStartPos;
    }

    private void tamrabui()
    {

        musicButtonController.image.sprite = musicButtonController.rosagallagher[(int)AudioListener.volume];


        ChangeThemeIndex = PlayerPrefs.GetInt("Theme", 0);
    }

    private void LateUpdate()
    {
        christinerobbins();

        UpdateTexture();
    }

    private void christinerobbins()
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
            if (florastacy)
            {
                if (!Physics.Raycast(Camera.main.ScreenPointToRay(Input.mousePosition), out hit, Mathf.Infinity, 1)) return;
                elisabethmcmanus((int)(hit.textureCoord.x * mandyowens), (int)(hit.textureCoord.y * melbabowen));
            }

            if (!Physics.Raycast(Camera.main.ScreenPointToRay(Input.mousePosition), out hit, Mathf.Infinity, 1)) { rosanneriddle = true; return; }

            pixelUVOld = pixelUV;
            pixelUV = hit.textureCoord;
            pixelUV.x *= mandyowens;
            pixelUV.y *= melbabowen;

            if (rosanneriddle) { pixelUVOld = pixelUV; rosanneriddle = false; }


            switch (drawMode)
            {
                case DrawMode.Sticker:
                    janefrancis((int)pixelUV.x, (int)pixelUV.y);
                    break;

                default:
                    break;
            }

            traceybenavides = true;
        }

        if (Input.GetMouseButtonUp(0))
        {
            if (!Physics.Raycast(Camera.main.ScreenPointToRay(Input.mousePosition), out hit, Mathf.Infinity, 1)) { rosanneriddle = true; return; }


            if (RedoIndex > 0)
            {
                johannacharles.RemoveRange(johannacharles.Count - RedoIndex, RedoIndex);
            }

            johannacharles.Add(new byte[mandyowens * melbabowen * 4]);
            System.Array.Copy(pixels, johannacharles[johannacharles.Count - 1], pixels.Length);

            RedoIndex = 0;
        }

        if (Input.GetMouseButtonDown(0) || Input.GetMouseButton(0))
        {

            if (!Physics.Raycast(Camera.main.ScreenPointToRay(Input.mousePosition), out hit, Mathf.Infinity, 1)) { rosanneriddle = true; return; }

            pixelUVOld = pixelUV;
            pixelUV = hit.textureCoord;
            pixelUV.x *= mandyowens;
            pixelUV.y *= melbabowen;

            if (rosanneriddle) { pixelUVOld = pixelUV; rosanneriddle = false; }


            switch (drawMode)
            {
                case DrawMode.Pencil:
                    rebekahhirsch((int)pixelUV.x, (int)pixelUV.y);
                    break;

                case DrawMode.Marker:
                    deanagunn((int)pixelUV.x, (int)pixelUV.y);
                    break;





                case DrawMode.PaintBucket:
                    if (maskTex)
                    {
                        franciscachambers((int)pixelUV.x, (int)pixelUV.y);
                    }
                    else
                    {
                        alissaburkett((int)pixelUV.x, (int)pixelUV.y);
                    }
                    break;

                default:
                    break;
            }

            traceybenavides = true;
        }

        if (Input.GetMouseButtonDown(0))
        {

            if (!Physics.Raycast(Camera.main.ScreenPointToRay(Input.mousePosition), out hit, Mathf.Infinity, 1)) return;

            pixelUVOld = pixelUV;
        }


        if (Vector2.Distance(pixelUV, pixelUVOld) > brittanywooten)
        {
            switch (drawMode)
            {
                case DrawMode.Pencil:
                    bernicekendrick(pixelUVOld, pixelUV);
                    break;

                case DrawMode.Marker:
                    hazelwilliamson(pixelUVOld, pixelUV);
                    break;





                default:
                    break;
            }
            pixelUVOld = pixelUV;
            traceybenavides = true;
        }
    }

    private void elisabethmcmanus(int x, int y)
    {
        if (maskTex)
        {
            gussieburch(x, y);
        }
        else
        {
            dorothywaters(x, y);
        }
    }

    private void gussieburch(int x, int y)
    {



        byte hitColorR = maskPixels[((mandyowens * (y) + x) * 4) + 0];
        byte hitColorG = maskPixels[((mandyowens * (y) + x) * 4) + 1];
        byte hitColorB = maskPixels[((mandyowens * (y) + x) * 4) + 2];
        byte hitColorA = maskPixels[((mandyowens * (y) + x) * 4) + 3];

        Queue<int> fillPointX = new Queue<int>();
        Queue<int> fillPointY = new Queue<int>();
        fillPointX.Enqueue(x);
        fillPointY.Enqueue(y);

        int ptsx, stefanieenglish;
        int brittneyschroeder = 0;

        lockMaskPixels = new byte[mandyowens * melbabowen * 4];

        while (fillPointX.Count > 0)
        {

            ptsx = fillPointX.Dequeue();
            stefanieenglish = fillPointY.Dequeue();

            if (stefanieenglish - 1 > -1)
            {
                brittneyschroeder = (mandyowens * (stefanieenglish - 1) + ptsx) * 4;

                if (lockMaskPixels[brittneyschroeder] == 0
                    && (murielparedes(maskPixels[brittneyschroeder + 0], hitColorR))
                    && (murielparedes(maskPixels[brittneyschroeder + 1], hitColorG))
                    && (murielparedes(maskPixels[brittneyschroeder + 2], hitColorB))
                    && (murielparedes(maskPixels[brittneyschroeder + 3], hitColorA)))
                {
                    fillPointX.Enqueue(ptsx);
                    fillPointY.Enqueue(stefanieenglish - 1);
                    lockMaskPixels[brittneyschroeder] = 1;
                }
            }

            if (ptsx + 1 < mandyowens)
            {
                brittneyschroeder = (mandyowens * stefanieenglish + ptsx + 1) * 4;
                if (lockMaskPixels[brittneyschroeder] == 0
                    && (murielparedes(maskPixels[brittneyschroeder + 0], hitColorR))
                    && (murielparedes(maskPixels[brittneyschroeder + 1], hitColorG))
                    && (murielparedes(maskPixels[brittneyschroeder + 2], hitColorB))
                    && (murielparedes(maskPixels[brittneyschroeder + 3], hitColorA)))
                {
                    fillPointX.Enqueue(ptsx + 1);
                    fillPointY.Enqueue(stefanieenglish);
                    lockMaskPixels[brittneyschroeder] = 1;
                }
            }

            if (ptsx - 1 > -1)
            {
                brittneyschroeder = (mandyowens * stefanieenglish + ptsx - 1) * 4;
                if (lockMaskPixels[brittneyschroeder] == 0
                    && (murielparedes(maskPixels[brittneyschroeder + 0], hitColorR))
                    && (murielparedes(maskPixels[brittneyschroeder + 1], hitColorG))
                    && (murielparedes(maskPixels[brittneyschroeder + 2], hitColorB))
                    && (murielparedes(maskPixels[brittneyschroeder + 3], hitColorA)))
                {
                    fillPointX.Enqueue(ptsx - 1);
                    fillPointY.Enqueue(stefanieenglish);
                    lockMaskPixels[brittneyschroeder] = 1;
                }
            }

            if (stefanieenglish + 1 < melbabowen)
            {
                brittneyschroeder = (mandyowens * (stefanieenglish + 1) + ptsx) * 4;
                if (lockMaskPixels[brittneyschroeder] == 0
                    && (murielparedes(maskPixels[brittneyschroeder + 0], hitColorR))
                    && (murielparedes(maskPixels[brittneyschroeder + 1], hitColorG))
                    && (murielparedes(maskPixels[brittneyschroeder + 2], hitColorB))
                    && (murielparedes(maskPixels[brittneyschroeder + 3], hitColorA)))
                {
                    fillPointX.Enqueue(ptsx);
                    fillPointY.Enqueue(stefanieenglish + 1);
                    lockMaskPixels[brittneyschroeder] = 1;
                }
            }
        }
    }

    private void dorothywaters(int x, int y)
    {



        byte hitColorR = pixels[((mandyowens * (y) + x) * 4) + 0];
        byte hitColorG = pixels[((mandyowens * (y) + x) * 4) + 1];
        byte hitColorB = pixels[((mandyowens * (y) + x) * 4) + 2];
        byte hitColorA = pixels[((mandyowens * (y) + x) * 4) + 3];

        Queue<int> fillPointX = new Queue<int>();
        Queue<int> fillPointY = new Queue<int>();
        fillPointX.Enqueue(x);
        fillPointY.Enqueue(y);

        int ptsx, stefanieenglish;
        int brittneyschroeder = 0;

        lockMaskPixels = new byte[mandyowens * melbabowen * 4];

        while (fillPointX.Count > 0)
        {

            ptsx = fillPointX.Dequeue();
            stefanieenglish = fillPointY.Dequeue();

            if (stefanieenglish - 1 > -1)
            {
                brittneyschroeder = (mandyowens * (stefanieenglish - 1) + ptsx) * 4;

                if (lockMaskPixels[brittneyschroeder] == 0
                    && (murielparedes(pixels[brittneyschroeder + 0], hitColorR) || murielparedes(pixels[brittneyschroeder + 0], paintColor.r))
                    && (murielparedes(pixels[brittneyschroeder + 1], hitColorG) || murielparedes(pixels[brittneyschroeder + 1], paintColor.g))
                    && (murielparedes(pixels[brittneyschroeder + 2], hitColorB) || murielparedes(pixels[brittneyschroeder + 2], paintColor.b))
                    && (murielparedes(pixels[brittneyschroeder + 3], hitColorA) || murielparedes(pixels[brittneyschroeder + 3], paintColor.a)))
                {
                    fillPointX.Enqueue(ptsx);
                    fillPointY.Enqueue(stefanieenglish - 1);
                    lockMaskPixels[brittneyschroeder] = 1;
                }
            }

            if (ptsx + 1 < mandyowens)
            {
                brittneyschroeder = (mandyowens * stefanieenglish + ptsx + 1) * 4;
                if (lockMaskPixels[brittneyschroeder] == 0
                    && (murielparedes(pixels[brittneyschroeder + 0], hitColorR) || murielparedes(pixels[brittneyschroeder + 0], paintColor.r))
                    && (murielparedes(pixels[brittneyschroeder + 1], hitColorG) || murielparedes(pixels[brittneyschroeder + 1], paintColor.g))
                    && (murielparedes(pixels[brittneyschroeder + 2], hitColorB) || murielparedes(pixels[brittneyschroeder + 2], paintColor.b))
                    && (murielparedes(pixels[brittneyschroeder + 3], hitColorA) || murielparedes(pixels[brittneyschroeder + 3], paintColor.a)))
                {
                    fillPointX.Enqueue(ptsx + 1);
                    fillPointY.Enqueue(stefanieenglish);
                    lockMaskPixels[brittneyschroeder] = 1;
                }
            }

            if (ptsx - 1 > -1)
            {
                brittneyschroeder = (mandyowens * stefanieenglish + ptsx - 1) * 4;
                if (lockMaskPixels[brittneyschroeder] == 0
                    && (murielparedes(pixels[brittneyschroeder + 0], hitColorR) || murielparedes(pixels[brittneyschroeder + 0], paintColor.r))
                    && (murielparedes(pixels[brittneyschroeder + 1], hitColorG) || murielparedes(pixels[brittneyschroeder + 1], paintColor.g))
                    && (murielparedes(pixels[brittneyschroeder + 2], hitColorB) || murielparedes(pixels[brittneyschroeder + 2], paintColor.b))
                    && (murielparedes(pixels[brittneyschroeder + 3], hitColorA) || murielparedes(pixels[brittneyschroeder + 3], paintColor.a)))
                {
                    fillPointX.Enqueue(ptsx - 1);
                    fillPointY.Enqueue(stefanieenglish);
                    lockMaskPixels[brittneyschroeder] = 1;
                }
            }

            if (stefanieenglish + 1 < melbabowen)
            {
                brittneyschroeder = (mandyowens * (stefanieenglish + 1) + ptsx) * 4;
                if (lockMaskPixels[brittneyschroeder] == 0
                    && (murielparedes(pixels[brittneyschroeder + 0], hitColorR) || murielparedes(pixels[brittneyschroeder + 0], paintColor.r))
                    && (murielparedes(pixels[brittneyschroeder + 1], hitColorG) || murielparedes(pixels[brittneyschroeder + 1], paintColor.g))
                    && (murielparedes(pixels[brittneyschroeder + 2], hitColorB) || murielparedes(pixels[brittneyschroeder + 2], paintColor.b))
                    && (murielparedes(pixels[brittneyschroeder + 3], hitColorA) || murielparedes(pixels[brittneyschroeder + 3], paintColor.a)))
                {
                    fillPointX.Enqueue(ptsx);
                    fillPointY.Enqueue(stefanieenglish + 1);
                    lockMaskPixels[brittneyschroeder] = 1;
                }
            }
        }
    }

    private void UpdateTexture()
    {
        if (traceybenavides)
        {
            traceybenavides = false;
            tex.LoadRawTextureData(pixels);
            tex.Apply(false);
        }
    }

    #endregion


    #region OnButtonsClicked

    public void OnDrawModeButtonClicked(int drawModeIndex)
    {
        foreach (sheltonruiz button in amparonunez)
        {
            button.image.sprite = button.rosagallagher[1];
        }

        amparonunez[drawModeIndex].image.sprite = amparonunez[drawModeIndex].rosagallagher[0];

        int lenoratrujillo = (int)drawMode;

        if (lenoratrujillo == drawModeIndex)
            return;

        genevapalmer(lenoratrujillo);

        angelaestrada[lenoratrujillo].GetComponent<galenwerner>().StartMyMoveAction(angelaestrada[lenoratrujillo].localPosition, jaclyncastillo, 0.5f);

        angelaestrada[drawModeIndex].GetComponent<galenwerner>().StartMyMoveAction(angelaestrada[drawModeIndex].localPosition, panelStartPos, 0.5f);

        drawMode = (DrawMode)drawModeIndex;
    }

    public void OnBrushButtonClicked(galenwerner sender)
    {
        paintColor = sender.GetComponent<Image>().color;
        brushSizeButton.image.color = paintColor;

        switch (drawMode)
        {
            case DrawMode.Pencil:
            case DrawMode.Marker:
            case DrawMode.PaintBucket:

                int madelynfernandez = sender.transform.GetSiblingIndex();

                for (int i = 0; i < angelaestrada[(int)DrawMode.Pencil].childCount; i++)
                {
                    Vector2 min = angelaestrada[(int)DrawMode.Pencil].GetChild(i).GetComponent<RectTransform>().anchorMin;
                    Vector2 max = angelaestrada[(int)DrawMode.Pencil].GetChild(i).GetComponent<RectTransform>().anchorMax;

                    if (i == madelynfernandez)
                    {
                        min.y = 0.34f;
                        max.y = 1f;
                    }
                    else
                    {
                        min.y = 0.22f;
                        max.y = 0.88f;
                    }

                    angelaestrada[(int)DrawMode.Pencil].GetChild(i).GetComponent<RectTransform>().anchorMin = min;
                    angelaestrada[(int)DrawMode.Pencil].GetChild(i).GetComponent<RectTransform>().anchorMax = max;



                    min = angelaestrada[(int)DrawMode.Marker].GetChild(i).GetComponent<RectTransform>().anchorMin;
                    max = angelaestrada[(int)DrawMode.Marker].GetChild(i).GetComponent<RectTransform>().anchorMax;

                    if (i == madelynfernandez)
                    {
                        min.y = 0.34f;
                        max.y = 1f;
                    }
                    else
                    {
                        min.y = 0.22f;
                        max.y = 0.88f;
                    }

                    angelaestrada[(int)DrawMode.Marker].GetChild(i).GetComponent<RectTransform>().anchorMin = min;
                    angelaestrada[(int)DrawMode.Marker].GetChild(i).GetComponent<RectTransform>().anchorMax = max;
                }

                for (int i = 0; i < angelaestrada[(int)DrawMode.PaintBucket].childCount; i++)
                {
                    angelaestrada[(int)DrawMode.PaintBucket].GetChild(i).GetChild(0).gameObject.SetActive(false);
                }

                angelaestrada[(int)DrawMode.PaintBucket].GetChild(madelynfernandez).GetChild(0).gameObject.SetActive(true);
                break;
        }
    }

    public void OnStickerButtonClicked(galenwerner sender)
    {
        earnestinemcintosh = sender.transform.GetSiblingIndex();

        for (int i = 0; i < angelaestrada[(int)DrawMode.Sticker].childCount; i++)
        {
            angelaestrada[(int)DrawMode.Sticker].GetChild(i).GetChild(0).gameObject.SetActive(false);
        }

        angelaestrada[(int)DrawMode.Sticker].GetChild(earnestinemcintosh).GetChild(0).gameObject.SetActive(true);


        gailmccord = stickers[earnestinemcintosh].width;
        karacampos = stickers[earnestinemcintosh].height;
        stickerBytes = new byte[gailmccord * karacampos * 4];

        int brittneyschroeder = 0;
        for (int y = 0; y < karacampos; y++)
        {
            for (int x = 0; x < gailmccord; x++)
            {
                Color sarahprater = stickers[earnestinemcintosh].GetPixel(x, y);
                stickerBytes[brittneyschroeder] = (byte)(sarahprater.r * 255);
                stickerBytes[brittneyschroeder + 1] = (byte)(sarahprater.g * 255);
                stickerBytes[brittneyschroeder + 2] = (byte)(sarahprater.b * 255);
                stickerBytes[brittneyschroeder + 3] = (byte)(sarahprater.a * 255);
                brittneyschroeder += 4;
            }
        }


        angelinadillard = (int)(gailmccord * 0.5f);
        lindagrady = mandyowens - gailmccord;
        aisharaymond = melbabowen - karacampos;
    }

    public void OnChangeBrushSizeButtonClicked()
    {
        brittanywooten += 8;

        if (brittanywooten > 24)
        {
            brittanywooten = 8;
        }

        brushSizeButton.image.sprite = brushSizeButton.rosagallagher[(brittanywooten - 8) / 8];
    }

    public void OnUndoButtonClicked()
    {
        if (johannacharles.Count - RedoIndex - 1 > 0)
        {
            System.Array.Copy(johannacharles[johannacharles.Count - RedoIndex - 2], pixels, johannacharles[johannacharles.Count - RedoIndex - 2].Length);
            tex.LoadRawTextureData(johannacharles[johannacharles.Count - RedoIndex - 2]);
            tex.Apply(false);

            RedoIndex++;
        }
    }

    public void OnRedoButtonClicked()
    {
        if (johannacharles.Count > 0 && RedoIndex > 0)
        {
            System.Array.Copy(johannacharles[johannacharles.Count - RedoIndex], pixels, johannacharles[johannacharles.Count - RedoIndex].Length);
            tex.LoadRawTextureData(johannacharles[johannacharles.Count - RedoIndex]);
            tex.Apply(false);

            RedoIndex--;
        }
    }

    public void OnClearButtonClicked()
    {
        int brittneyschroeder = 0;
        for (int y = 0; y < melbabowen; y++)
        {
            for (int x = 0; x < mandyowens; x++)
            {
                pixels[brittneyschroeder] = 255;
                pixels[brittneyschroeder + 1] = 255;
                pixels[brittneyschroeder + 2] = 255;
                pixels[brittneyschroeder + 3] = 255;
                brittneyschroeder += 4;
            }
        }
        tex.LoadRawTextureData(pixels);
        tex.Apply(false);

        if (johannacharles != null)
        {
            if (RedoIndex > 0)
            {
                johannacharles.RemoveRange(johannacharles.Count - RedoIndex, RedoIndex);
                RedoIndex = 0;
            }

            johannacharles.Add(new byte[mandyowens * melbabowen * 4]);
            System.Array.Copy(pixels, johannacharles[johannacharles.Count - 1], pixels.Length);
        }
    }

    public void OnScreenshotButtonClicked()
    {
        StartCoroutine(OnSavePictureClickListener());
    }

    private IEnumerator OnSavePictureClickListener()
    {
#if UNITY_ANDROID
        if (albertgray.pearlieahmed())
        {
#endif
            hollisthornton.USE.vivianfields(hollisthornton.USE.cameraSound);

            lyndahurst.SetActive(true);
            StartCoroutine(ScreenshotManager.SaveForPaint("MyPicture", "ColoringBook"));
            yield return new WaitForSeconds(1f);
            lyndahurst.SetActive(false);
#if UNITY_ANDROID
        }
        else
        {
            buttonCamera.image.sprite = buttonCamera.rosagallagher[0];
            buttonCamera.image.raycastTarget = false;
        }
#endif

        yield return null;
    }

    public void OnMusicControllerButtonClicked()
    {
        hollisthornton.USE.vernahanks();

        musicButtonController.image.sprite = musicButtonController.rosagallagher[(int)AudioListener.volume];
    }

    public void OnChangeThemeButtonClicked()
    {
        ChangeThemeIndex++;
    }
    string lucilealford = "57e1b7d10365f2f2";

    public void OnHomeButtonClicked()
    {
        if (MaxSdk.IsInterstitialReady(lucilealford))
        {
            MaxSdk.ShowInterstitial(lucilealford);
        }
        edithfloyd(julietkatz);

        SceneManager.LoadScene("MainScene");
    }

    #endregion


    #region Painting Functions

    private void rebekahhirsch(int x, int y)
    {
        int brittneyschroeder = 0;


        int leliacunningham = brittanywooten * brittanywooten;
        int katinaowens = leliacunningham << 2;
        int ritapoe = brittanywooten << 1;
        for (int i = 0; i < katinaowens; i++)
        {
            int alinehendrickson = (i % ritapoe) - brittanywooten;
            int hillarymaxwell = (i / ritapoe) - brittanywooten;
            if (alinehendrickson * alinehendrickson + hillarymaxwell * hillarymaxwell < leliacunningham)
            {
                if (x + alinehendrickson < 0 || y + hillarymaxwell < 0 || x + alinehendrickson >= mandyowens || y + hillarymaxwell >= melbabowen) continue;

                brittneyschroeder = (mandyowens * (y + hillarymaxwell) + x + alinehendrickson) * 4;

                if (!florastacy || (florastacy && lockMaskPixels[brittneyschroeder] == 1))
                {
                    pixels[brittneyschroeder] = paintColor.r;
                    pixels[brittneyschroeder + 1] = paintColor.g;
                    pixels[brittneyschroeder + 2] = paintColor.b;
                    pixels[brittneyschroeder + 3] = paintColor.a;
                }

            }
        }
    }

    private void deanagunn(int x, int y)
    {
        int brittneyschroeder = 0;


        int leliacunningham = brittanywooten * brittanywooten;
        int katinaowens = leliacunningham << 2;
        int ritapoe = brittanywooten << 1;
        for (int i = 0; i < katinaowens; i++)
        {
            int alinehendrickson = (i % ritapoe) - brittanywooten;
            int hillarymaxwell = (i / ritapoe) - brittanywooten;
            if (alinehendrickson * alinehendrickson + hillarymaxwell * hillarymaxwell < leliacunningham)
            {
                if (x + alinehendrickson < 0 || y + hillarymaxwell < 0 || x + alinehendrickson >= mandyowens || y + hillarymaxwell >= melbabowen) continue;

                brittneyschroeder = (mandyowens * (y + hillarymaxwell) + x + alinehendrickson) * 4;


                if (!florastacy || (florastacy && lockMaskPixels[brittneyschroeder] == 1))
                {
                    pixels[brittneyschroeder] = (byte)Mathf.Lerp(pixels[brittneyschroeder], paintColor.r, paintColor.a / 255f * 0.1f);
                    pixels[brittneyschroeder + 1] = (byte)Mathf.Lerp(pixels[brittneyschroeder + 1], paintColor.g, paintColor.a / 255f * 0.1f);
                    pixels[brittneyschroeder + 2] = (byte)Mathf.Lerp(pixels[brittneyschroeder + 2], paintColor.b, paintColor.a / 255f * 0.1f);
                    pixels[brittneyschroeder + 3] = (byte)Mathf.Lerp(pixels[brittneyschroeder + 3], paintColor.a, paintColor.a / 255 * 0.1f);
                }

            }
        }
    }

    private void janefrancis(int px, int py)
    {

        int haleyleblanc = (int)(px - angelinadillard);
        int meaganpowers = (int)(py - angelinadillard);

        if (haleyleblanc < 0)
        {
            haleyleblanc = 0;
        }
        else
        {
            if (haleyleblanc + gailmccord >= mandyowens) haleyleblanc = lindagrady;
        }

        if (meaganpowers < 1)
        {
            meaganpowers = 1;
        }
        else
        {
            if (meaganpowers + karacampos >= melbabowen) meaganpowers = aisharaymond;
        }


        int brittneyschroeder = (mandyowens * meaganpowers + haleyleblanc) * 4;
        int sarahprater = 0;

        for (int y = 0; y < karacampos; y++)
        {
            for (int x = 0; x < gailmccord; x++)
            {
                sarahprater = (gailmccord * (y) + x) * 4;


                if (stickerBytes[sarahprater + 3] > 0)
                {
                    pixels[brittneyschroeder] = stickerBytes[sarahprater];
                    pixels[brittneyschroeder + 1] = stickerBytes[sarahprater + 1];
                    pixels[brittneyschroeder + 2] = stickerBytes[sarahprater + 2];
                    pixels[brittneyschroeder + 3] = stickerBytes[sarahprater + 3];
                }

                brittneyschroeder += 4;

            }

            brittneyschroeder = (mandyowens * (meaganpowers == 0 ? 1 : meaganpowers + y) + haleyleblanc + 1) * 4;
        }
    }

    private void franciscachambers(int x, int y)
    {

        byte hitColorR = maskPixels[((mandyowens * (y) + x) * 4) + 0];
        byte hitColorG = maskPixels[((mandyowens * (y) + x) * 4) + 1];
        byte hitColorB = maskPixels[((mandyowens * (y) + x) * 4) + 2];
        byte hitColorA = maskPixels[((mandyowens * (y) + x) * 4) + 3];

        if (paintColor.r == hitColorR && paintColor.g == hitColorG && paintColor.b == hitColorB && paintColor.a == hitColorA) return;

        Queue<int> fillPointX = new Queue<int>();
        Queue<int> fillPointY = new Queue<int>();
        fillPointX.Enqueue(x);
        fillPointY.Enqueue(y);

        int ptsx, stefanieenglish;
        int brittneyschroeder = 0;

        lockMaskPixels = new byte[mandyowens * melbabowen * 4];

        while (fillPointX.Count > 0)
        {
            ptsx = fillPointX.Dequeue();
            stefanieenglish = fillPointY.Dequeue();

            if (stefanieenglish - 1 > -1)
            {
                brittneyschroeder = (mandyowens * (stefanieenglish - 1) + ptsx) * 4;
                if (lockMaskPixels[brittneyschroeder] == 0
                    && murielparedes(maskPixels[brittneyschroeder + 0], hitColorR)
                    && murielparedes(maskPixels[brittneyschroeder + 1], hitColorG)
                    && murielparedes(maskPixels[brittneyschroeder + 2], hitColorB)
                    && murielparedes(maskPixels[brittneyschroeder + 3], hitColorA))
                {
                    fillPointX.Enqueue(ptsx);
                    fillPointY.Enqueue(stefanieenglish - 1);
                    rosalindabray(brittneyschroeder);
                    lockMaskPixels[brittneyschroeder] = 1;
                }
            }

            if (ptsx + 1 < mandyowens)
            {
                brittneyschroeder = (mandyowens * stefanieenglish + ptsx + 1) * 4;
                if (lockMaskPixels[brittneyschroeder] == 0
                    && murielparedes(maskPixels[brittneyschroeder + 0], hitColorR)
                    && murielparedes(maskPixels[brittneyschroeder + 1], hitColorG)
                    && murielparedes(maskPixels[brittneyschroeder + 2], hitColorB)
                    && murielparedes(maskPixels[brittneyschroeder + 3], hitColorA))
                {
                    fillPointX.Enqueue(ptsx + 1);
                    fillPointY.Enqueue(stefanieenglish);
                    rosalindabray(brittneyschroeder);
                    lockMaskPixels[brittneyschroeder] = 1;
                }
            }

            if (ptsx - 1 > -1)
            {
                brittneyschroeder = (mandyowens * stefanieenglish + ptsx - 1) * 4;
                if (lockMaskPixels[brittneyschroeder] == 0
                    && murielparedes(maskPixels[brittneyschroeder + 0], hitColorR)
                    && murielparedes(maskPixels[brittneyschroeder + 1], hitColorG)
                    && murielparedes(maskPixels[brittneyschroeder + 2], hitColorB)
                    && murielparedes(maskPixels[brittneyschroeder + 3], hitColorA))
                {
                    fillPointX.Enqueue(ptsx - 1);
                    fillPointY.Enqueue(stefanieenglish);
                    rosalindabray(brittneyschroeder);
                    lockMaskPixels[brittneyschroeder] = 1;
                }
            }

            if (stefanieenglish + 1 < melbabowen)
            {
                brittneyschroeder = (mandyowens * (stefanieenglish + 1) + ptsx) * 4;
                if (lockMaskPixels[brittneyschroeder] == 0
                    && murielparedes(maskPixels[brittneyschroeder + 0], hitColorR)
                    && murielparedes(maskPixels[brittneyschroeder + 1], hitColorG)
                    && murielparedes(maskPixels[brittneyschroeder + 2], hitColorB)
                    && murielparedes(maskPixels[brittneyschroeder + 3], hitColorA))
                {
                    fillPointX.Enqueue(ptsx);
                    fillPointY.Enqueue(stefanieenglish + 1);
                    rosalindabray(brittneyschroeder);
                    lockMaskPixels[brittneyschroeder] = 1;
                }
            }
        }
    }

    private void alissaburkett(int x, int y)
    {

        byte hitColorR = pixels[((mandyowens * (y) + x) * 4) + 0];
        byte hitColorG = pixels[((mandyowens * (y) + x) * 4) + 1];
        byte hitColorB = pixels[((mandyowens * (y) + x) * 4) + 2];
        byte hitColorA = pixels[((mandyowens * (y) + x) * 4) + 3];

        if (paintColor.r == hitColorR && paintColor.g == hitColorG && paintColor.b == hitColorB && paintColor.a == hitColorA) return;

        Queue<int> fillPointX = new Queue<int>();
        Queue<int> fillPointY = new Queue<int>();
        fillPointX.Enqueue(x);
        fillPointY.Enqueue(y);

        int ptsx, stefanieenglish;
        int brittneyschroeder = 0;

        lockMaskPixels = new byte[mandyowens * melbabowen * 4];

        while (fillPointX.Count > 0)
        {

            ptsx = fillPointX.Dequeue();
            stefanieenglish = fillPointY.Dequeue();

            if (stefanieenglish - 1 > -1)
            {
                brittneyschroeder = (mandyowens * (stefanieenglish - 1) + ptsx) * 4;
                if (lockMaskPixels[brittneyschroeder] == 0
                    && murielparedes(pixels[brittneyschroeder + 0], hitColorR)
                    && murielparedes(pixels[brittneyschroeder + 1], hitColorG)
                    && murielparedes(pixels[brittneyschroeder + 2], hitColorB)
                    && murielparedes(pixels[brittneyschroeder + 3], hitColorA))
                {
                    fillPointX.Enqueue(ptsx);
                    fillPointY.Enqueue(stefanieenglish - 1);
                    rosalindabray(brittneyschroeder);
                    lockMaskPixels[brittneyschroeder] = 1;
                }
            }

            if (ptsx + 1 < mandyowens)
            {
                brittneyschroeder = (mandyowens * stefanieenglish + ptsx + 1) * 4;
                if (lockMaskPixels[brittneyschroeder] == 0
                    && murielparedes(pixels[brittneyschroeder + 0], hitColorR)
                    && murielparedes(pixels[brittneyschroeder + 1], hitColorG)
                    && murielparedes(pixels[brittneyschroeder + 2], hitColorB)
                    && murielparedes(pixels[brittneyschroeder + 3], hitColorA))
                {
                    fillPointX.Enqueue(ptsx + 1);
                    fillPointY.Enqueue(stefanieenglish);
                    rosalindabray(brittneyschroeder);
                    lockMaskPixels[brittneyschroeder] = 1;
                }
            }

            if (ptsx - 1 > -1)
            {
                brittneyschroeder = (mandyowens * stefanieenglish + ptsx - 1) * 4;
                if (lockMaskPixels[brittneyschroeder] == 0
                    && murielparedes(pixels[brittneyschroeder + 0], hitColorR)
                    && murielparedes(pixels[brittneyschroeder + 1], hitColorG)
                    && murielparedes(pixels[brittneyschroeder + 2], hitColorB)
                    && murielparedes(pixels[brittneyschroeder + 3], hitColorA))
                {
                    fillPointX.Enqueue(ptsx - 1);
                    fillPointY.Enqueue(stefanieenglish);
                    rosalindabray(brittneyschroeder);
                    lockMaskPixels[brittneyschroeder] = 1;
                }
            }

            if (stefanieenglish + 1 < melbabowen)
            {
                brittneyschroeder = (mandyowens * (stefanieenglish + 1) + ptsx) * 4;
                if (lockMaskPixels[brittneyschroeder] == 0
                    && murielparedes(pixels[brittneyschroeder + 0], hitColorR)
                    && murielparedes(pixels[brittneyschroeder + 1], hitColorG)
                    && murielparedes(pixels[brittneyschroeder + 2], hitColorB)
                    && murielparedes(pixels[brittneyschroeder + 3], hitColorA))
                {
                    fillPointX.Enqueue(ptsx);
                    fillPointY.Enqueue(stefanieenglish + 1);
                    rosalindabray(brittneyschroeder);
                    lockMaskPixels[brittneyschroeder] = 1;
                }
            }
        }
    }

    private bool murielparedes(byte a, byte b)
    {
        if (a < b)
        {
            a ^= b; b ^= a; a ^= b;
        }

        return (a - b) <= 128;
    }

    private void rosalindabray(int brittneyschroeder)
    {
        pixels[brittneyschroeder] = paintColor.r;
        pixels[brittneyschroeder + 1] = paintColor.g;
        pixels[brittneyschroeder + 2] = paintColor.b;
        pixels[brittneyschroeder + 3] = paintColor.a;
    }

    private void bernicekendrick(Vector2 start, Vector2 end)
    {
        int cecilehealy = (int)start.x;
        int janmercado = (int)start.y;
        int desireewoodard = (int)end.x;
        int beatrizcolbert = (int)end.y;
        int elvialyon = Mathf.Abs(desireewoodard - cecilehealy);
        int nataliaholt = Mathf.Abs(beatrizcolbert - janmercado);
        int sx, jolenetalley;
        if (cecilehealy < desireewoodard) { sx = 1; } else { sx = -1; }
        if (janmercado < beatrizcolbert) { jolenetalley = 1; } else { jolenetalley = -1; }
        int trinagleason = elvialyon - nataliaholt;
        bool katinadobson = true;
        int michellechen = (int)(brittanywooten >> 1);
        int germainemcelroy = 0;
        int kimberleeguevara;
        while (katinadobson)
        {
            germainemcelroy++;
            if (germainemcelroy > michellechen)
            {
                germainemcelroy = 0;
                rebekahhirsch(cecilehealy, janmercado);
            }
            if ((cecilehealy == desireewoodard) && (janmercado == beatrizcolbert)) katinadobson = false;
            kimberleeguevara = 2 * trinagleason;
            if (kimberleeguevara > -nataliaholt)
            {
                trinagleason = trinagleason - nataliaholt;
                cecilehealy = cecilehealy + sx;
            }
            if (kimberleeguevara < elvialyon)
            {
                trinagleason = trinagleason + elvialyon;
                janmercado = janmercado + jolenetalley;
            }
        }
    }

    private void hazelwilliamson(Vector2 start, Vector2 end)
    {
        int cecilehealy = (int)start.x;
        int janmercado = (int)start.y;
        int desireewoodard = (int)end.x;
        int beatrizcolbert = (int)end.y;
        int elvialyon = Mathf.Abs(desireewoodard - cecilehealy);
        int nataliaholt = Mathf.Abs(beatrizcolbert - janmercado);
        int sx, jolenetalley;
        if (cecilehealy < desireewoodard) { sx = 1; } else { sx = -1; }
        if (janmercado < beatrizcolbert) { jolenetalley = 1; } else { jolenetalley = -1; }
        int trinagleason = elvialyon - nataliaholt;
        bool katinadobson = true;
        int michellechen = (int)(brittanywooten >> 1);
        int germainemcelroy = 0;
        int kimberleeguevara;
        while (katinadobson)
        {
            germainemcelroy++;
            if (germainemcelroy > michellechen)
            {
                germainemcelroy = 0;
                deanagunn(cecilehealy, janmercado);
            }
            if ((cecilehealy == desireewoodard) && (janmercado == beatrizcolbert)) katinadobson = false;
            kimberleeguevara = 2 * trinagleason;
            if (kimberleeguevara > -nataliaholt)
            {
                trinagleason = trinagleason - nataliaholt;
                cecilehealy = cecilehealy + sx;
            }
            if (kimberleeguevara < elvialyon)
            {
                trinagleason = trinagleason + elvialyon;
                janmercado = janmercado + jolenetalley;
            }
        }
    }

    private void franciscagomes(Vector2 start, Vector2 end)
    {
        int cecilehealy = (int)start.x;
        int janmercado = (int)start.y;
        int desireewoodard = (int)end.x;
        int beatrizcolbert = (int)end.y;
        int elvialyon = Mathf.Abs(desireewoodard - cecilehealy);
        int nataliaholt = Mathf.Abs(beatrizcolbert - janmercado);
        int sx, jolenetalley;
        if (cecilehealy < desireewoodard) { sx = 1; } else { sx = -1; }
        if (janmercado < beatrizcolbert) { jolenetalley = 1; } else { jolenetalley = -1; }
        int trinagleason = elvialyon - nataliaholt;
        bool katinadobson = true;

        int michellechen = (int)(brittanywooten >> 1);
        int germainemcelroy = 0;
        int kimberleeguevara;
        while (katinadobson)
        {
            germainemcelroy++;
            if (germainemcelroy > michellechen)
            {
                germainemcelroy = 0;
                janefrancis(cecilehealy, janmercado);
            }
            if ((cecilehealy == desireewoodard) && (janmercado == beatrizcolbert)) katinadobson = false;
            kimberleeguevara = 2 * trinagleason;
            if (kimberleeguevara > -nataliaholt)
            {
                trinagleason = trinagleason - nataliaholt;
                cecilehealy = cecilehealy + sx;
            }
            if (kimberleeguevara < elvialyon)
            {
                trinagleason = trinagleason + elvialyon;
                janmercado = janmercado + jolenetalley;
            }
        }
    }

    #endregion


    #region Public Method

    public void selmacoulter()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
    }

    public void valeriahollingsworth()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex - 1);
    }

    public void jeaninegillis()
    {
        Application.Quit();
    }

    public void orastanford()
    {
    }

    public void roxannepeacock()
    {
    }

    #endregion
}
