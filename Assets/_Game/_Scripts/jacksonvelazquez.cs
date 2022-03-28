using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.Collections.Generic;
using System.Collections;

#if UNITY_WEBGL
using System.IO;
#endif

public class jacksonvelazquez : MonoBehaviour
{
    #region variables

    public Material maskTexMaterial;
    private Texture2D maskTex;
    public List<Sprite> paigeneumann;
    public static int luciaweber = -1;
    public static string cathleensaenz = "0";

    
    public enum DrawMode
    {
        Pencil,
        Marker,
        PaintBucket,
        Sticker
    }

    
    private Color32 paintColor = new Color32(255, 0, 0, 255);
    private int helgasweet = 8; 
    private DrawMode drawMode = DrawMode.Pencil;
    private bool jeanietucker = true;
    private byte[] lockMaskPixels; 

    
    public Texture2D[] stickers;
    private int nellysweeney = 0; 
    private byte[] stickerBytes;
    private int shannonmann;
    private int lavonnegoodman;
    private int gwenburke;
    private int dianamiddleton;
    private int karenwalker;

    
    private List<byte[]> jamiorozco; 
    private int kirstenferrell = 0;
    private int RedoIndex
    {
        set
        {
            kirstenferrell = value;

            UndoRedoButtons[0].image.sprite = UndoRedoButtons[0].matildafinney[jamiorozco.Count - RedoIndex - 1 > 0 ? 0 : 1];
            UndoRedoButtons[0].image.raycastTarget = jamiorozco.Count - RedoIndex - 1 > 0;

            UndoRedoButtons[1].image.sprite = UndoRedoButtons[1].matildafinney[jamiorozco.Count > 0 && RedoIndex > 0 ? 0 : 1];
            UndoRedoButtons[1].image.raycastTarget = jamiorozco.Count > 0 && RedoIndex > 0;
        }

        get
        {
            return kirstenferrell;
        }
    }

    
    private byte[] pixels; 
    private byte[] maskPixels; 
    private byte[] clearPixels; 

    private Texture2D tex; 

    private int patricahernandez = 1024;
    private int hopehernandez = 300;
    private RaycastHit hit;
    private bool jeanieraines = false;

    private Vector2 pixelUV; 
    private Vector2 pixelUVOld; 

    private bool renaesadler = false; 

    

    [Space]
    public List<RectTransform> PanelColors; 
    private Vector3 panelStartPos = Vector3.zero, kristaholland = Vector3.zero;

    public List<terenceburks> drawModeButton; 
    [System.Serializable]
    public class terenceburks
    {
        public string name;
        public Image image;
        public List<Sprite> matildafinney;
    }

    public List<terenceburks> UndoRedoButtons; 
    public terenceburks brushSizeButton;
    public terenceburks musicButtonController; 
    public terenceburks buttonCamera; 

    private int tamekaayers = 0;
    private int ChangeThemeIndex
    {
        set
        {
            if (value >= themes.hildalouis.Count)
            {
                value = 0;
            }

            tamekaayers = value;

            PlayerPrefs.SetInt("Theme", value);
            PlayerPrefs.Save();

            for (int i = 0; i < themes.spList.Count; i++)
            {
                try { 
                themes.spList[i].color = themes.hildalouis[value].color[i];
                }
                catch{

                }
            }
        }

        get
        {
            return tamekaayers;
        }
    }

    public clarencejacobsen themes;

    [System.Serializable]
    public class clarencejacobsen
    {
        public List<Image> spList; 
        public List<cruzmcfadden> hildalouis;

        [System.Serializable]
        public class cruzmcfadden
        {
            public string name;
            public List<Color> color;
        }
    }

    public GameObject natalietruong;

    #endregion


    #region Init And Control Functions

    private void Awake()
    {
        Camera.main.aspect = 16 / 9f;

        GetComponent<Renderer>().sortingOrder = -99;

        if (luciaweber < 0)
        {
            maskTex = null;
        }
        else
        {
            maskTex = esmeraldagustafson(paigeneumann[luciaweber].texture);
        }

        katherinelowery();
    }

    private Texture2D esmeraldagustafson(Texture2D source)
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

    private void katherinelowery()
    {
        thelmapruitt();

        
        if (maskTex)
        {
            GetComponent<Renderer>().material = maskTexMaterial;

            patricahernandez = maskTex.width;
            hopehernandez = maskTex.height;
            GetComponent<Renderer>().material.SetTexture("_MaskTex", maskTex);

            jeanietucker = true;
        }
        else
        {
            patricahernandez = 1024;
            hopehernandez = 576;

            jeanietucker = false;
        }

        if (!GetComponent<Renderer>().material.HasProperty("_MainTex")) Debug.LogError("Fatal error: Current shader doesn't have a property: '_MainTex'");


        
        tex = new Texture2D(patricahernandez, hopehernandez, TextureFormat.RGBA32, false);
        GetComponent<Renderer>().material.SetTexture("_MainTex", tex);

        
        pixels = new byte[patricahernandez * hopehernandez * 4];

        OnClearButtonClicked();

        
        tex.filterMode = FilterMode.Point;
        tex.wrapMode = TextureWrapMode.Clamp;
        

        if (maskTex)
        {
            angelcornell();
        }

        
        jamiorozco = new List<byte[]>();
        jamiorozco.Add(new byte[patricahernandez * hopehernandez * 4]);
        RedoIndex = 0;

        byte[] loadPixels = new byte[patricahernandez * hopehernandez * 4];
        loadPixels = lilywong(cathleensaenz);

        if (loadPixels != null)
        {
            pixels = loadPixels;
            System.Array.Copy(pixels, jamiorozco[0], pixels.Length);

            tex.LoadRawTextureData(pixels);
            tex.Apply(false);
        }
        else
        {
            System.Array.Copy(pixels, jamiorozco[0], pixels.Length);
        }

        
        if (jeanietucker)
        {
            lockMaskPixels = new byte[patricahernandez * hopehernandez * 4];
        }
    }

    private void thelmapruitt()
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

    private void angelcornell()
    {
        maskPixels = new byte[patricahernandez * hopehernandez * 4];

        int danawaldron = 0;
        for (int y = 0; y < hopehernandez; y++)
        {
            for (int x = 0; x < patricahernandez; x++)
            {
                Color c = maskTex.GetPixel(x, y);
                maskPixels[danawaldron] = (byte)(c.r * 255);
                maskPixels[danawaldron + 1] = (byte)(c.g * 255);
                maskPixels[danawaldron + 2] = (byte)(c.b * 255);
                maskPixels[danawaldron + 3] = (byte)(c.a * 255);
                danawaldron += 4;
            }
        }
    }

    private byte[] lilywong(string key)
    {
#if UNITY_WEBGL
        string mariettahaas = Application.persistentDataPath + "/Landscape" + key + ".sav";
        if (File.Exists(mariettahaas))
        {
            return System.Convert.FromBase64String(File.ReadAllText(mariettahaas));
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

    private void stacierichey(string key)
    {
#if UNITY_WEBGL
        string mariettahaas = Application.persistentDataPath + "/Landscape" + key + ".sav";
        string jocelynfields = System.Convert.ToBase64String(pixels);
        File.WriteAllText(mariettahaas, jocelynfields);
#else
        PlayerPrefs.SetString(key, System.Convert.ToBase64String(pixels));
        PlayerPrefs.Save();
#endif
    }

    private void Start()
    {
#if UNITY_ANDROID
        if (nicolassimpson.elbabarnard())
        {
            buttonCamera.image.sprite = buttonCamera.matildafinney[0];
            buttonCamera.image.raycastTarget = false;
        }
#endif
        paulinemichel((int)DrawMode.Pencil);

        OnDrawModeButtonClicked((int)DrawMode.Pencil);

        OnBrushButtonClicked(PanelColors[(int)drawMode].GetChild(0).GetComponent<wesleyroe>());

        OnChangeBrushSizeButtonClicked();
        var g = PanelColors[(int)DrawMode.Sticker].GetChild(0);
        OnStickerButtonClicked(PanelColors[(int)DrawMode.Sticker].GetChild(0).GetComponent<wesleyroe>());

        jillkrause();
    }

    private void paulinemichel(int current)
    {
        float faithkimble = themes.spList[3].rectTransform.rect.height;

        foreach (RectTransform panel in PanelColors)
        {
            panel.offsetMax = new Vector2(0, -faithkimble * 2);
            panel.offsetMin = new Vector2(0, -faithkimble * 3);
        }

        kristaholland = PanelColors[current].localPosition;
        panelStartPos = kristaholland;
        panelStartPos.y += (faithkimble * 2);

        PanelColors[current].localPosition = panelStartPos;
    }

    private void jillkrause()
    {
        
        musicButtonController.image.sprite = musicButtonController.matildafinney[(int)AudioListener.volume];

        
        ChangeThemeIndex = PlayerPrefs.GetInt("Theme", 0);
    }

    private void LateUpdate()
    {
        ursulamarin();

        UpdateTexture();
    }

    private void ursulamarin()
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
            if (jeanietucker)
            {
                if (!Physics.Raycast(Camera.main.ScreenPointToRay(Input.mousePosition), out hit, Mathf.Infinity, 1)) return;
                paigepreston((int)(hit.textureCoord.x * patricahernandez), (int)(hit.textureCoord.y * hopehernandez));
            }

            if (!Physics.Raycast(Camera.main.ScreenPointToRay(Input.mousePosition), out hit, Mathf.Infinity, 1)) { jeanieraines = true; return; }

            pixelUVOld = pixelUV; 
            pixelUV = hit.textureCoord;
            pixelUV.x *= patricahernandez;
            pixelUV.y *= hopehernandez;

            if (jeanieraines) { pixelUVOld = pixelUV; jeanieraines = false; }

            
            switch (drawMode)
            {
                case DrawMode.Sticker: 
                    gertrudemaynard((int)pixelUV.x, (int)pixelUV.y);
                    break;

                default: 
                    break;
            }

            renaesadler = true;
        }

        if (Input.GetMouseButtonUp(0))
        {
            if (!Physics.Raycast(Camera.main.ScreenPointToRay(Input.mousePosition), out hit, Mathf.Infinity, 1)) { jeanieraines = true; return; }

            
            if (RedoIndex > 0)
            {
                jamiorozco.RemoveRange(jamiorozco.Count - RedoIndex, RedoIndex);
            }

            jamiorozco.Add(new byte[patricahernandez * hopehernandez * 4]);
            System.Array.Copy(pixels, jamiorozco[jamiorozco.Count - 1], pixels.Length);

            RedoIndex = 0;
        }

        if (Input.GetMouseButtonDown(0) || Input.GetMouseButton(0))
        {
            
            if (!Physics.Raycast(Camera.main.ScreenPointToRay(Input.mousePosition), out hit, Mathf.Infinity, 1)) { jeanieraines = true; return; }

            pixelUVOld = pixelUV; 
            pixelUV = hit.textureCoord;
            pixelUV.x *= patricahernandez;
            pixelUV.y *= hopehernandez;

            if (jeanieraines) { pixelUVOld = pixelUV; jeanieraines = false; }

            
            switch (drawMode)
            {
                case DrawMode.Pencil: 
                    soniaschumacher((int)pixelUV.x, (int)pixelUV.y);
                    break;

                case DrawMode.Marker: 
                    judimiller((int)pixelUV.x, (int)pixelUV.y);
                    break;

                
                
                

                case DrawMode.PaintBucket: 
                    if (maskTex)
                    {
                        karinsaucedo((int)pixelUV.x, (int)pixelUV.y);
                    }
                    else
                    {
                        maureenferreira((int)pixelUV.x, (int)pixelUV.y);
                    }
                    break;

                default: 
                    break;
            }

            renaesadler = true;
        }

        if (Input.GetMouseButtonDown(0))
        {
            
            if (!Physics.Raycast(Camera.main.ScreenPointToRay(Input.mousePosition), out hit, Mathf.Infinity, 1)) return;

            pixelUVOld = pixelUV;
        }

        
        if (Vector2.Distance(pixelUV, pixelUVOld) > helgasweet)
        {
            switch (drawMode)
            {
                case DrawMode.Pencil: 
                    gingerzhang(pixelUVOld, pixelUV);
                    break;

                case DrawMode.Marker: 
                    germainemunson(pixelUVOld, pixelUV);
                    break;

                
                
                

                default: 
                    break;
            }
            pixelUVOld = pixelUV;
            renaesadler = true;
        }
    }

    private void paigepreston(int x, int y)
    {
        if (maskTex)
        {
            corinabass(x, y);
        }
        else
        {
            kellialbert(x, y);
        }
    }

    private void corinabass(int x, int y)
    {
        

        
        byte hitColorR = maskPixels[((patricahernandez * (y) + x) * 4) + 0];
        byte hitColorG = maskPixels[((patricahernandez * (y) + x) * 4) + 1];
        byte hitColorB = maskPixels[((patricahernandez * (y) + x) * 4) + 2];
        byte hitColorA = maskPixels[((patricahernandez * (y) + x) * 4) + 3];

        Queue<int> fillPointX = new Queue<int>();
        Queue<int> fillPointY = new Queue<int>();
        fillPointX.Enqueue(x);
        fillPointY.Enqueue(y);

        int ptsx, heidistein;
        int danawaldron = 0;

        lockMaskPixels = new byte[patricahernandez * hopehernandez * 4];

        while (fillPointX.Count > 0)
        {

            ptsx = fillPointX.Dequeue();
            heidistein = fillPointY.Dequeue();

            if (heidistein - 1 > -1)
            {
                danawaldron = (patricahernandez * (heidistein - 1) + ptsx) * 4; 

                if (lockMaskPixels[danawaldron] == 0 
                    && (lillianspence(maskPixels[danawaldron + 0], hitColorR)) 
                    && (lillianspence(maskPixels[danawaldron + 1], hitColorG))
                    && (lillianspence(maskPixels[danawaldron + 2], hitColorB))
                    && (lillianspence(maskPixels[danawaldron + 3], hitColorA)))
                {
                    fillPointX.Enqueue(ptsx);
                    fillPointY.Enqueue(heidistein - 1);
                    lockMaskPixels[danawaldron] = 1;
                }
            }

            if (ptsx + 1 < patricahernandez)
            {
                danawaldron = (patricahernandez * heidistein + ptsx + 1) * 4; 
                if (lockMaskPixels[danawaldron] == 0
                    && (lillianspence(maskPixels[danawaldron + 0], hitColorR)) 
                    && (lillianspence(maskPixels[danawaldron + 1], hitColorG))
                    && (lillianspence(maskPixels[danawaldron + 2], hitColorB))
                    && (lillianspence(maskPixels[danawaldron + 3], hitColorA)))
                {
                    fillPointX.Enqueue(ptsx + 1);
                    fillPointY.Enqueue(heidistein);
                    lockMaskPixels[danawaldron] = 1;
                }
            }

            if (ptsx - 1 > -1)
            {
                danawaldron = (patricahernandez * heidistein + ptsx - 1) * 4; 
                if (lockMaskPixels[danawaldron] == 0
                    && (lillianspence(maskPixels[danawaldron + 0], hitColorR)) 
                    && (lillianspence(maskPixels[danawaldron + 1], hitColorG))
                    && (lillianspence(maskPixels[danawaldron + 2], hitColorB))
                    && (lillianspence(maskPixels[danawaldron + 3], hitColorA)))
                {
                    fillPointX.Enqueue(ptsx - 1);
                    fillPointY.Enqueue(heidistein);
                    lockMaskPixels[danawaldron] = 1;
                }
            }

            if (heidistein + 1 < hopehernandez)
            {
                danawaldron = (patricahernandez * (heidistein + 1) + ptsx) * 4; 
                if (lockMaskPixels[danawaldron] == 0
                    && (lillianspence(maskPixels[danawaldron + 0], hitColorR)) 
                    && (lillianspence(maskPixels[danawaldron + 1], hitColorG))
                    && (lillianspence(maskPixels[danawaldron + 2], hitColorB))
                    && (lillianspence(maskPixels[danawaldron + 3], hitColorA)))
                {
                    fillPointX.Enqueue(ptsx);
                    fillPointY.Enqueue(heidistein + 1);
                    lockMaskPixels[danawaldron] = 1;
                }
            }
        }
    }

    private void kellialbert(int x, int y)
    {
        

        
        byte hitColorR = pixels[((patricahernandez * (y) + x) * 4) + 0];
        byte hitColorG = pixels[((patricahernandez * (y) + x) * 4) + 1];
        byte hitColorB = pixels[((patricahernandez * (y) + x) * 4) + 2];
        byte hitColorA = pixels[((patricahernandez * (y) + x) * 4) + 3];

        Queue<int> fillPointX = new Queue<int>();
        Queue<int> fillPointY = new Queue<int>();
        fillPointX.Enqueue(x);
        fillPointY.Enqueue(y);

        int ptsx, heidistein;
        int danawaldron = 0;

        lockMaskPixels = new byte[patricahernandez * hopehernandez * 4];

        while (fillPointX.Count > 0)
        {

            ptsx = fillPointX.Dequeue();
            heidistein = fillPointY.Dequeue();

            if (heidistein - 1 > -1)
            {
                danawaldron = (patricahernandez * (heidistein - 1) + ptsx) * 4; 

                if (lockMaskPixels[danawaldron] == 0 
                    && (lillianspence(pixels[danawaldron + 0], hitColorR) || lillianspence(pixels[danawaldron + 0], paintColor.r)) 
                    && (lillianspence(pixels[danawaldron + 1], hitColorG) || lillianspence(pixels[danawaldron + 1], paintColor.g))
                    && (lillianspence(pixels[danawaldron + 2], hitColorB) || lillianspence(pixels[danawaldron + 2], paintColor.b))
                    && (lillianspence(pixels[danawaldron + 3], hitColorA) || lillianspence(pixels[danawaldron + 3], paintColor.a)))
                {
                    fillPointX.Enqueue(ptsx);
                    fillPointY.Enqueue(heidistein - 1);
                    lockMaskPixels[danawaldron] = 1;
                }
            }

            if (ptsx + 1 < patricahernandez)
            {
                danawaldron = (patricahernandez * heidistein + ptsx + 1) * 4; 
                if (lockMaskPixels[danawaldron] == 0
                    && (lillianspence(pixels[danawaldron + 0], hitColorR) || lillianspence(pixels[danawaldron + 0], paintColor.r)) 
                    && (lillianspence(pixels[danawaldron + 1], hitColorG) || lillianspence(pixels[danawaldron + 1], paintColor.g))
                    && (lillianspence(pixels[danawaldron + 2], hitColorB) || lillianspence(pixels[danawaldron + 2], paintColor.b))
                    && (lillianspence(pixels[danawaldron + 3], hitColorA) || lillianspence(pixels[danawaldron + 3], paintColor.a)))
                {
                    fillPointX.Enqueue(ptsx + 1);
                    fillPointY.Enqueue(heidistein);
                    lockMaskPixels[danawaldron] = 1;
                }
            }

            if (ptsx - 1 > -1)
            {
                danawaldron = (patricahernandez * heidistein + ptsx - 1) * 4; 
                if (lockMaskPixels[danawaldron] == 0
                    && (lillianspence(pixels[danawaldron + 0], hitColorR) || lillianspence(pixels[danawaldron + 0], paintColor.r)) 
                    && (lillianspence(pixels[danawaldron + 1], hitColorG) || lillianspence(pixels[danawaldron + 1], paintColor.g))
                    && (lillianspence(pixels[danawaldron + 2], hitColorB) || lillianspence(pixels[danawaldron + 2], paintColor.b))
                    && (lillianspence(pixels[danawaldron + 3], hitColorA) || lillianspence(pixels[danawaldron + 3], paintColor.a)))
                {
                    fillPointX.Enqueue(ptsx - 1);
                    fillPointY.Enqueue(heidistein);
                    lockMaskPixels[danawaldron] = 1;
                }
            }

            if (heidistein + 1 < hopehernandez)
            {
                danawaldron = (patricahernandez * (heidistein + 1) + ptsx) * 4; 
                if (lockMaskPixels[danawaldron] == 0
                    && (lillianspence(pixels[danawaldron + 0], hitColorR) || lillianspence(pixels[danawaldron + 0], paintColor.r)) 
                    && (lillianspence(pixels[danawaldron + 1], hitColorG) || lillianspence(pixels[danawaldron + 1], paintColor.g))
                    && (lillianspence(pixels[danawaldron + 2], hitColorB) || lillianspence(pixels[danawaldron + 2], paintColor.b))
                    && (lillianspence(pixels[danawaldron + 3], hitColorA) || lillianspence(pixels[danawaldron + 3], paintColor.a)))
                {
                    fillPointX.Enqueue(ptsx);
                    fillPointY.Enqueue(heidistein + 1);
                    lockMaskPixels[danawaldron] = 1;
                }
            }
        }
    }

    private void UpdateTexture()
    {
        if (renaesadler)
        {
            renaesadler = false;
            tex.LoadRawTextureData(pixels);
            tex.Apply(false);
        }
    }

    #endregion


    #region OnButtonsClicked

    public void OnDrawModeButtonClicked(int drawModeIndex)
    {
        foreach (terenceburks button in drawModeButton)
        {
            button.image.sprite = button.matildafinney[1];
        }

        drawModeButton[drawModeIndex].image.sprite = drawModeButton[drawModeIndex].matildafinney[0];

        int jillmerrill = (int)drawMode;

        if (jillmerrill == drawModeIndex)
            return;

        paulinemichel(jillmerrill);

        PanelColors[jillmerrill].GetComponent<wesleyroe>().StartMyMoveAction(PanelColors[jillmerrill].localPosition, kristaholland, 0.5f);

        PanelColors[drawModeIndex].GetComponent<wesleyroe>().StartMyMoveAction(PanelColors[drawModeIndex].localPosition, panelStartPos, 0.5f);

        drawMode = (DrawMode)drawModeIndex;
    }

    public void OnBrushButtonClicked(wesleyroe sender)
    {
        paintColor = sender.GetComponent<Image>().color;
        brushSizeButton.image.color = paintColor; 

        switch (drawMode)
        {
            case DrawMode.Pencil:
            case DrawMode.Marker:
            case DrawMode.PaintBucket:

                int kathimahoney = sender.transform.GetSiblingIndex();

                for (int i = 0; i < PanelColors[(int)DrawMode.Pencil].childCount; i++)
                {
                    Vector2 min = PanelColors[(int)DrawMode.Pencil].GetChild(i).GetComponent<RectTransform>().anchorMin;
                    Vector2 max = PanelColors[(int)DrawMode.Pencil].GetChild(i).GetComponent<RectTransform>().anchorMax;

                    if (i == kathimahoney)
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

                    if (i == kathimahoney)
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

                PanelColors[(int)DrawMode.PaintBucket].GetChild(kathimahoney).GetChild(0).gameObject.SetActive(true);
                break;
        }
    }

    public void OnStickerButtonClicked(wesleyroe sender)
    {
        nellysweeney = sender.transform.GetSiblingIndex();

        for (int i = 0; i < PanelColors[(int)DrawMode.Sticker].childCount; i++)
        {
            PanelColors[(int)DrawMode.Sticker].GetChild(i).GetChild(0).gameObject.SetActive(false);
        }

        PanelColors[(int)DrawMode.Sticker].GetChild(nellysweeney).GetChild(0).gameObject.SetActive(true);

        
        shannonmann = stickers[nellysweeney].width;
        lavonnegoodman = stickers[nellysweeney].height;
        stickerBytes = new byte[shannonmann * lavonnegoodman * 4];

        int danawaldron = 0;
        for (int y = 0; y < lavonnegoodman; y++)
        {
            for (int x = 0; x < shannonmann; x++)
            {
                Color pansylucero = stickers[nellysweeney].GetPixel(x, y);
                stickerBytes[danawaldron] = (byte)(pansylucero.r * 255);
                stickerBytes[danawaldron + 1] = (byte)(pansylucero.g * 255);
                stickerBytes[danawaldron + 2] = (byte)(pansylucero.b * 255);
                stickerBytes[danawaldron + 3] = (byte)(pansylucero.a * 255);
                danawaldron += 4;
            }
        }

        
        gwenburke = (int)(shannonmann * 0.5f);
        dianamiddleton = patricahernandez - shannonmann;
        karenwalker = hopehernandez - lavonnegoodman;
    }

    public void OnChangeBrushSizeButtonClicked()
    {
        helgasweet += 8;

        if (helgasweet > 24)
        {
            helgasweet = 8;
        }

        brushSizeButton.image.sprite = brushSizeButton.matildafinney[(helgasweet - 8) / 8];
    }

    public void OnUndoButtonClicked()
    {
        if (jamiorozco.Count - RedoIndex - 1 > 0)
        {
            System.Array.Copy(jamiorozco[jamiorozco.Count - RedoIndex - 2], pixels, jamiorozco[jamiorozco.Count - RedoIndex - 2].Length);
            tex.LoadRawTextureData(jamiorozco[jamiorozco.Count - RedoIndex - 2]);
            tex.Apply(false);

            RedoIndex++;
        }
    }

    public void OnRedoButtonClicked()
    {
        if (jamiorozco.Count > 0 && RedoIndex > 0)
        {
            System.Array.Copy(jamiorozco[jamiorozco.Count - RedoIndex], pixels, jamiorozco[jamiorozco.Count - RedoIndex].Length);
            tex.LoadRawTextureData(jamiorozco[jamiorozco.Count - RedoIndex]);
            tex.Apply(false);

            RedoIndex--;
        }
    }

    public void OnClearButtonClicked()
    {
        int danawaldron = 0;
        for (int y = 0; y < hopehernandez; y++)
        {
            for (int x = 0; x < patricahernandez; x++)
            {
                pixels[danawaldron] = 255;
                pixels[danawaldron + 1] = 255;
                pixels[danawaldron + 2] = 255;
                pixels[danawaldron + 3] = 255;
                danawaldron += 4;
            }
        }
        tex.LoadRawTextureData(pixels);
        tex.Apply(false);

        if (jamiorozco != null)
        {
            if (RedoIndex > 0)
            {
                jamiorozco.RemoveRange(jamiorozco.Count - RedoIndex, RedoIndex);
                RedoIndex = 0;
            }

            jamiorozco.Add(new byte[patricahernandez * hopehernandez * 4]);
            System.Array.Copy(pixels, jamiorozco[jamiorozco.Count - 1], pixels.Length);
        }
    }

    public void OnScreenshotButtonClicked()
    {
        StartCoroutine(OnSavePictureClickListener());
    }

    private IEnumerator OnSavePictureClickListener()
    {
#if UNITY_ANDROID
        if (nicolassimpson.meganelias())
        {
#endif
        //kimcoates.USE.leonormadison(kimcoates.USE.cameraSound);

        //natalietruong.SetActive(true);
        StartCoroutine(ScreenshotManager.SaveForPaint("MyPicture", "ColoringBook"));
        yield return new WaitForSeconds(1f);
        //natalietruong.SetActive(false);
#if UNITY_ANDROID
        }
        else
        {
            buttonCamera.image.sprite = buttonCamera.matildafinney[0];
            buttonCamera.image.raycastTarget = false;
        }
#endif

        yield return null;
    }

    public void OnMusicControllerButtonClicked()
    {
        kimcoates.USE.maricelanorth();

        musicButtonController.image.sprite = musicButtonController.matildafinney[(int)AudioListener.volume];
    }

    public void OnChangeThemeButtonClicked()
    {
        ChangeThemeIndex++;
    }

    public void OnHomeButtonClicked()
    {
        stacierichey(cathleensaenz);

        SceneManager.LoadScene("MyMainScene");
    }

    #endregion


    #region Painting Functions

    private void soniaschumacher(int x, int y)
    {
        int danawaldron = 0;

        
        int suzettecassidy = helgasweet * helgasweet;
        int jeanlau = suzettecassidy << 2;
        int lolatran = helgasweet << 1;
        for (int i = 0; i < jeanlau; i++)
        {
            int lilianholliday = (i % lolatran) - helgasweet;
            int joydixon = (i / lolatran) - helgasweet;
            if (lilianholliday * lilianholliday + joydixon * joydixon < suzettecassidy)
            {
                if (x + lilianholliday < 0 || y + joydixon < 0 || x + lilianholliday >= patricahernandez || y + joydixon >= hopehernandez) continue;

                danawaldron = (patricahernandez * (y + joydixon) + x + lilianholliday) * 4;

                if (!jeanietucker || (jeanietucker && lockMaskPixels[danawaldron] == 1))
                {
                    pixels[danawaldron] = paintColor.r;
                    pixels[danawaldron + 1] = paintColor.g;
                    pixels[danawaldron + 2] = paintColor.b;
                    pixels[danawaldron + 3] = paintColor.a;
                }

            }
        }
    }

    private void judimiller(int x, int y)
    {
        int danawaldron = 0;

        
        int suzettecassidy = helgasweet * helgasweet;
        int jeanlau = suzettecassidy << 2;
        int lolatran = helgasweet << 1;
        for (int i = 0; i < jeanlau; i++)
        {
            int lilianholliday = (i % lolatran) - helgasweet;
            int joydixon = (i / lolatran) - helgasweet;
            if (lilianholliday * lilianholliday + joydixon * joydixon < suzettecassidy)
            {
                if (x + lilianholliday < 0 || y + joydixon < 0 || x + lilianholliday >= patricahernandez || y + joydixon >= hopehernandez) continue;

                danawaldron = (patricahernandez * (y + joydixon) + x + lilianholliday) * 4;

                
                if (!jeanietucker || (jeanietucker && lockMaskPixels[danawaldron] == 1))
                {
                    pixels[danawaldron] = (byte)Mathf.Lerp(pixels[danawaldron], paintColor.r, paintColor.a / 255f * 0.1f);
                    pixels[danawaldron + 1] = (byte)Mathf.Lerp(pixels[danawaldron + 1], paintColor.g, paintColor.a / 255f * 0.1f);
                    pixels[danawaldron + 2] = (byte)Mathf.Lerp(pixels[danawaldron + 2], paintColor.b, paintColor.a / 255f * 0.1f);
                    pixels[danawaldron + 3] = (byte)Mathf.Lerp(pixels[danawaldron + 3], paintColor.a, paintColor.a / 255 * 0.1f);
                }

            }
        }
    }

    private void gertrudemaynard(int px, int py)
    {
        
        int janelleking = (int)(px - gwenburke);
        int bridgettlay = (int)(py - gwenburke);

        if (janelleking < 0)
        {
            janelleking = 0;
        }
        else {
            if (janelleking + shannonmann >= patricahernandez) janelleking = dianamiddleton;
        }

        if (bridgettlay < 1)
        {
            bridgettlay = 1;
        }
        else {
            if (bridgettlay + lavonnegoodman >= hopehernandez) bridgettlay = karenwalker;
        }


        int danawaldron = (patricahernandez * bridgettlay + janelleking) * 4;
        int pansylucero = 0;

        for (int y = 0; y < lavonnegoodman; y++)
        {
            for (int x = 0; x < shannonmann; x++)
            {
                pansylucero = (shannonmann * (y) + x) * 4;

                
                if (stickerBytes[pansylucero + 3] > 0)
                {
                    pixels[danawaldron] = stickerBytes[pansylucero];
                    pixels[danawaldron + 1] = stickerBytes[pansylucero + 1];
                    pixels[danawaldron + 2] = stickerBytes[pansylucero + 2];
                    pixels[danawaldron + 3] = stickerBytes[pansylucero + 3];
                }

                danawaldron += 4;

            } 

            danawaldron = (patricahernandez * (bridgettlay == 0 ? 1 : bridgettlay + y) + janelleking + 1) * 4;
        } 
    }

    private void karinsaucedo(int x, int y)
    {
        
        byte hitColorR = maskPixels[((patricahernandez * (y) + x) * 4) + 0];
        byte hitColorG = maskPixels[((patricahernandez * (y) + x) * 4) + 1];
        byte hitColorB = maskPixels[((patricahernandez * (y) + x) * 4) + 2];
        byte hitColorA = maskPixels[((patricahernandez * (y) + x) * 4) + 3];

        if (paintColor.r == hitColorR && paintColor.g == hitColorG && paintColor.b == hitColorB && paintColor.a == hitColorA) return;

        Queue<int> fillPointX = new Queue<int>();
        Queue<int> fillPointY = new Queue<int>();
        fillPointX.Enqueue(x);
        fillPointY.Enqueue(y);

        int ptsx, heidistein;
        int danawaldron = 0;

        lockMaskPixels = new byte[patricahernandez * hopehernandez * 4];

        while (fillPointX.Count > 0)
        {
            ptsx = fillPointX.Dequeue();
            heidistein = fillPointY.Dequeue();

            if (heidistein - 1 > -1)
            {
                danawaldron = (patricahernandez * (heidistein - 1) + ptsx) * 4; 
                if (lockMaskPixels[danawaldron] == 0
                    && lillianspence(maskPixels[danawaldron + 0], hitColorR)
                    && lillianspence(maskPixels[danawaldron + 1], hitColorG)
                    && lillianspence(maskPixels[danawaldron + 2], hitColorB)
                    && lillianspence(maskPixels[danawaldron + 3], hitColorA))
                {
                    fillPointX.Enqueue(ptsx);
                    fillPointY.Enqueue(heidistein - 1);
                    estelabrowne(danawaldron);
                    lockMaskPixels[danawaldron] = 1;
                }
            }

            if (ptsx + 1 < patricahernandez)
            {
                danawaldron = (patricahernandez * heidistein + ptsx + 1) * 4; 
                if (lockMaskPixels[danawaldron] == 0
                    && lillianspence(maskPixels[danawaldron + 0], hitColorR)
                    && lillianspence(maskPixels[danawaldron + 1], hitColorG)
                    && lillianspence(maskPixels[danawaldron + 2], hitColorB)
                    && lillianspence(maskPixels[danawaldron + 3], hitColorA))
                {
                    fillPointX.Enqueue(ptsx + 1);
                    fillPointY.Enqueue(heidistein);
                    estelabrowne(danawaldron);
                    lockMaskPixels[danawaldron] = 1;
                }
            }

            if (ptsx - 1 > -1)
            {
                danawaldron = (patricahernandez * heidistein + ptsx - 1) * 4; 
                if (lockMaskPixels[danawaldron] == 0
                    && lillianspence(maskPixels[danawaldron + 0], hitColorR)
                    && lillianspence(maskPixels[danawaldron + 1], hitColorG)
                    && lillianspence(maskPixels[danawaldron + 2], hitColorB)
                    && lillianspence(maskPixels[danawaldron + 3], hitColorA))
                {
                    fillPointX.Enqueue(ptsx - 1);
                    fillPointY.Enqueue(heidistein);
                    estelabrowne(danawaldron);
                    lockMaskPixels[danawaldron] = 1;
                }
            }

            if (heidistein + 1 < hopehernandez)
            {
                danawaldron = (patricahernandez * (heidistein + 1) + ptsx) * 4; 
                if (lockMaskPixels[danawaldron] == 0
                    && lillianspence(maskPixels[danawaldron + 0], hitColorR)
                    && lillianspence(maskPixels[danawaldron + 1], hitColorG)
                    && lillianspence(maskPixels[danawaldron + 2], hitColorB)
                    && lillianspence(maskPixels[danawaldron + 3], hitColorA))
                {
                    fillPointX.Enqueue(ptsx);
                    fillPointY.Enqueue(heidistein + 1);
                    estelabrowne(danawaldron);
                    lockMaskPixels[danawaldron] = 1;
                }
            }
        }
    }

    private void maureenferreira(int x, int y)
    {
        
        byte hitColorR = pixels[((patricahernandez * (y) + x) * 4) + 0];
        byte hitColorG = pixels[((patricahernandez * (y) + x) * 4) + 1];
        byte hitColorB = pixels[((patricahernandez * (y) + x) * 4) + 2];
        byte hitColorA = pixels[((patricahernandez * (y) + x) * 4) + 3];

        if (paintColor.r == hitColorR && paintColor.g == hitColorG && paintColor.b == hitColorB && paintColor.a == hitColorA) return;

        Queue<int> fillPointX = new Queue<int>();
        Queue<int> fillPointY = new Queue<int>();
        fillPointX.Enqueue(x);
        fillPointY.Enqueue(y);

        int ptsx, heidistein;
        int danawaldron = 0;

        lockMaskPixels = new byte[patricahernandez * hopehernandez * 4];

        while (fillPointX.Count > 0)
        {

            ptsx = fillPointX.Dequeue();
            heidistein = fillPointY.Dequeue();

            if (heidistein - 1 > -1)
            {
                danawaldron = (patricahernandez * (heidistein - 1) + ptsx) * 4; 
                if (lockMaskPixels[danawaldron] == 0
                    && lillianspence(pixels[danawaldron + 0], hitColorR)
                    && lillianspence(pixels[danawaldron + 1], hitColorG)
                    && lillianspence(pixels[danawaldron + 2], hitColorB)
                    && lillianspence(pixels[danawaldron + 3], hitColorA))
                {
                    fillPointX.Enqueue(ptsx);
                    fillPointY.Enqueue(heidistein - 1);
                    estelabrowne(danawaldron);
                    lockMaskPixels[danawaldron] = 1;
                }
            }

            if (ptsx + 1 < patricahernandez)
            {
                danawaldron = (patricahernandez * heidistein + ptsx + 1) * 4; 
                if (lockMaskPixels[danawaldron] == 0
                    && lillianspence(pixels[danawaldron + 0], hitColorR)
                    && lillianspence(pixels[danawaldron + 1], hitColorG)
                    && lillianspence(pixels[danawaldron + 2], hitColorB)
                    && lillianspence(pixels[danawaldron + 3], hitColorA))
                {
                    fillPointX.Enqueue(ptsx + 1);
                    fillPointY.Enqueue(heidistein);
                    estelabrowne(danawaldron);
                    lockMaskPixels[danawaldron] = 1;
                }
            }

            if (ptsx - 1 > -1)
            {
                danawaldron = (patricahernandez * heidistein + ptsx - 1) * 4; 
                if (lockMaskPixels[danawaldron] == 0
                    && lillianspence(pixels[danawaldron + 0], hitColorR)
                    && lillianspence(pixels[danawaldron + 1], hitColorG)
                    && lillianspence(pixels[danawaldron + 2], hitColorB)
                    && lillianspence(pixels[danawaldron + 3], hitColorA))
                {
                    fillPointX.Enqueue(ptsx - 1);
                    fillPointY.Enqueue(heidistein);
                    estelabrowne(danawaldron);
                    lockMaskPixels[danawaldron] = 1;
                }
            }

            if (heidistein + 1 < hopehernandez)
            {
                danawaldron = (patricahernandez * (heidistein + 1) + ptsx) * 4; 
                if (lockMaskPixels[danawaldron] == 0
                    && lillianspence(pixels[danawaldron + 0], hitColorR)
                    && lillianspence(pixels[danawaldron + 1], hitColorG)
                    && lillianspence(pixels[danawaldron + 2], hitColorB)
                    && lillianspence(pixels[danawaldron + 3], hitColorA))
                {
                    fillPointX.Enqueue(ptsx);
                    fillPointY.Enqueue(heidistein + 1);
                    estelabrowne(danawaldron);
                    lockMaskPixels[danawaldron] = 1;
                }
            }
        }
    }

    private bool lillianspence(byte a, byte b)
    {
        if (a < b)
        {
            a ^= b; b ^= a; a ^= b;
        }

        return (a - b) <= 128;
    }

    private void estelabrowne(int danawaldron)
    {
        pixels[danawaldron] = paintColor.r;
        pixels[danawaldron + 1] = paintColor.g;
        pixels[danawaldron + 2] = paintColor.b;
        pixels[danawaldron + 3] = paintColor.a;
    }

    private void gingerzhang(Vector2 start, Vector2 end)
    {
        int nataliaphillips = (int)start.x;
        int alyssabentley = (int)start.y;
        int karengee = (int)end.x;
        int laurieguthrie = (int)end.y;
        int staciecasillas = Mathf.Abs(karengee - nataliaphillips);
        int myrnamaxwell = Mathf.Abs(laurieguthrie - alyssabentley);
        int sx, randimohr;
        if (nataliaphillips < karengee) { sx = 1; } else { sx = -1; }
        if (alyssabentley < laurieguthrie) { randimohr = 1; } else { randimohr = -1; }
        int rosannaandrews = staciecasillas - myrnamaxwell;
        bool angeliqueoneill = true;
        int colleenavery = (int)(helgasweet >> 1);
        int kathiebutts = 0;
        int dorahinojosa;
        while (angeliqueoneill)
        {
            kathiebutts++;
            if (kathiebutts > colleenavery)
            {
                kathiebutts = 0;
                soniaschumacher(nataliaphillips, alyssabentley);
            }
            if ((nataliaphillips == karengee) && (alyssabentley == laurieguthrie)) angeliqueoneill = false;
            dorahinojosa = 2 * rosannaandrews;
            if (dorahinojosa > -myrnamaxwell)
            {
                rosannaandrews = rosannaandrews - myrnamaxwell;
                nataliaphillips = nataliaphillips + sx;
            }
            if (dorahinojosa < staciecasillas)
            {
                rosannaandrews = rosannaandrews + staciecasillas;
                alyssabentley = alyssabentley + randimohr;
            }
        }
    }

    private void germainemunson(Vector2 start, Vector2 end)
    {
        int nataliaphillips = (int)start.x;
        int alyssabentley = (int)start.y;
        int karengee = (int)end.x;
        int laurieguthrie = (int)end.y;
        int staciecasillas = Mathf.Abs(karengee - nataliaphillips);
        int myrnamaxwell = Mathf.Abs(laurieguthrie - alyssabentley);
        int sx, randimohr;
        if (nataliaphillips < karengee) { sx = 1; } else { sx = -1; }
        if (alyssabentley < laurieguthrie) { randimohr = 1; } else { randimohr = -1; }
        int rosannaandrews = staciecasillas - myrnamaxwell;
        bool angeliqueoneill = true;
        int colleenavery = (int)(helgasweet >> 1);
        int kathiebutts = 0;
        int dorahinojosa;
        while (angeliqueoneill)
        {
            kathiebutts++;
            if (kathiebutts > colleenavery)
            {
                kathiebutts = 0;
                judimiller(nataliaphillips, alyssabentley);
            }
            if ((nataliaphillips == karengee) && (alyssabentley == laurieguthrie)) angeliqueoneill = false;
            dorahinojosa = 2 * rosannaandrews;
            if (dorahinojosa > -myrnamaxwell)
            {
                rosannaandrews = rosannaandrews - myrnamaxwell;
                nataliaphillips = nataliaphillips + sx;
            }
            if (dorahinojosa < staciecasillas)
            {
                rosannaandrews = rosannaandrews + staciecasillas;
                alyssabentley = alyssabentley + randimohr;
            }
        }
    }

    private void justinele(Vector2 start, Vector2 end)
    {
        int nataliaphillips = (int)start.x;
        int alyssabentley = (int)start.y;
        int karengee = (int)end.x;
        int laurieguthrie = (int)end.y;
        int staciecasillas = Mathf.Abs(karengee - nataliaphillips);
        int myrnamaxwell = Mathf.Abs(laurieguthrie - alyssabentley);
        int sx, randimohr;
        if (nataliaphillips < karengee) { sx = 1; } else { sx = -1; }
        if (alyssabentley < laurieguthrie) { randimohr = 1; } else { randimohr = -1; }
        int rosannaandrews = staciecasillas - myrnamaxwell;
        bool angeliqueoneill = true;
        
        int colleenavery = (int)(helgasweet >> 1); 
        int kathiebutts = 0;
        int dorahinojosa;
        while (angeliqueoneill)
        {
            kathiebutts++;
            if (kathiebutts > colleenavery)
            {
                kathiebutts = 0;
                gertrudemaynard(nataliaphillips, alyssabentley);
            }
            if ((nataliaphillips == karengee) && (alyssabentley == laurieguthrie)) angeliqueoneill = false;
            dorahinojosa = 2 * rosannaandrews;
            if (dorahinojosa > -myrnamaxwell)
            {
                rosannaandrews = rosannaandrews - myrnamaxwell;
                nataliaphillips = nataliaphillips + sx;
            }
            if (dorahinojosa < staciecasillas)
            {
                rosannaandrews = rosannaandrews + staciecasillas;
                alyssabentley = alyssabentley + randimohr;
            }
        }
    }

    #endregion


    #region Public Method

    public void liliakoch()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
    }

    public void beatrizrouse()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex - 1);
    }

    public void dawncash()
    {
        Application.Quit();
    }

    public void lorettasilver()
    {
        //Application.OpenURL("https:
    }

    public void harrietsanders()
    {
      //  Application.OpenURL("https:
    }

    #endregion
}
