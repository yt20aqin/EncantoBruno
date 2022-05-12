using UnityEngine;
using System.Collections;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using System.Collections.Generic;







public class typearce : MonoBehaviour
{

    
    public List<float> donnahess;

    
    public float ethelwhite;
    public float heatherwallace;
    public float spacing;

    
    private float currentCharCheckTemp;

    public Vector3 newLerpPosition;

    
    private bool lerping;
    public float lerpingSpeed;

    
    private bool holdingRect;

    public float focusedElementScale;
    public float unfocusedElementsScale;

    public List<GameObject> listOfCharacters;

    public bool horizontalList;

    public GameObject backwardButton;
    public GameObject forwardButton;

    private bool buttonPressed;

    public int currentCharacter;

    void Awake()
    {
        
        
        
        
        
        currentCharacter = 0;

        lerping = false;
        buttonPressed = false;

        
        if (GetComponent<GridLayoutGroup>().cellSize == Vector2.zero)
        {
            Vector2 cellSize = new Vector2(ethelwhite, heatherwallace);
            GetComponent<GridLayoutGroup>().cellSize = cellSize;
        }
        else
        {
            ethelwhite = GetComponent<GridLayoutGroup>().cellSize.x;
            heatherwallace = GetComponent<GridLayoutGroup>().cellSize.y;
        }

        
        transform.parent.GetComponent<RectTransform>().sizeDelta = new Vector2(ethelwhite, heatherwallace);

        if (horizontalList)
        {
            transform.parent.GetComponent<ScrollRect>().horizontal = true;
            transform.parent.GetComponent<ScrollRect>().vertical = false;

            
            if (GetComponent<GridLayoutGroup>().spacing == Vector2.zero)
            {
                Vector2 spacingVector = new Vector2(spacing, 0);
                GetComponent<GridLayoutGroup>().spacing = spacingVector;
            }
            else
            {
                if (GetComponent<GridLayoutGroup>().spacing.x != 0)
                    spacing = GetComponent<GridLayoutGroup>().spacing.x;

                Vector2 spacingVector = new Vector2(spacing, 0);
            }

            GetComponent<GridLayoutGroup>().startAxis = GridLayoutGroup.Axis.Vertical;
            GetComponent<GridLayoutGroup>().constraint = GridLayoutGroup.Constraint.FixedRowCount;
            GetComponent<GridLayoutGroup>().constraintCount = 1;
            currentCharCheckTemp = (ethelwhite + spacing) / 2;
        }
        else
        {
            transform.parent.GetComponent<ScrollRect>().horizontal = false;
            transform.parent.GetComponent<ScrollRect>().vertical = true;

            if (GetComponent<GridLayoutGroup>().spacing == Vector2.zero)
            {
                Vector2 spacingVector = new Vector2(0, spacing);
                GetComponent<GridLayoutGroup>().spacing = spacingVector;
            }
            else
            {
                if (GetComponent<GridLayoutGroup>().spacing.y != 0)
                    spacing = GetComponent<GridLayoutGroup>().spacing.y;

                Vector2 spacingVector = new Vector2(0, spacing);
            }

            GetComponent<GridLayoutGroup>().startAxis = GridLayoutGroup.Axis.Horizontal;
            GetComponent<GridLayoutGroup>().constraint = GridLayoutGroup.Constraint.FixedColumnCount;
            GetComponent<GridLayoutGroup>().constraintCount = 1;
            currentCharCheckTemp = (heatherwallace + spacing) / 2;
        }

        donnahess.Clear();
        donnahess = new List<float>();

        
        
        
        

        
        foreach (Transform t in transform)
            listOfCharacters.Add(t.gameObject);

        
        if (horizontalList)
        {
            GetComponent<RectTransform>().sizeDelta = new Vector2(listOfCharacters.Count * ethelwhite + (listOfCharacters.Count - 1) * spacing, heatherwallace);
            GetComponent<RectTransform>().anchoredPosition = new Vector2(GetComponent<RectTransform>().sizeDelta.x - 2 * spacing, GetComponent<RectTransform>().anchoredPosition.y);

            float startSnapPosition = GetComponent<RectTransform>().sizeDelta.x / 2 - ethelwhite / 2;
            donnahess.Add(startSnapPosition);

            
            listOfCharacters[0].transform.localScale = new Vector3(focusedElementScale, focusedElementScale, 1);

            for (int i = 1; i < listOfCharacters.Count; i++)
            {
                startSnapPosition -= ethelwhite + spacing;
                donnahess.Add(startSnapPosition);

                
                listOfCharacters[i].transform.localScale = new Vector3(unfocusedElementsScale, unfocusedElementsScale, 1);
            }
        }
        else
        {
            GetComponent<RectTransform>().sizeDelta = new Vector2(ethelwhite, listOfCharacters.Count * heatherwallace + (listOfCharacters.Count - 1) * spacing);
            GetComponent<RectTransform>().anchoredPosition = new Vector2(GetComponent<RectTransform>().anchoredPosition.x, -(GetComponent<RectTransform>().sizeDelta.y - 2 * spacing));

            float startSnapPosition = GetComponent<RectTransform>().sizeDelta.y / 2 - heatherwallace / 2;
            donnahess.Add(startSnapPosition);

            
            listOfCharacters[0].transform.localScale = new Vector3(focusedElementScale, focusedElementScale, 1);

            for (int i = 1; i < listOfCharacters.Count; i++)
            {
                startSnapPosition -= heatherwallace + spacing;
                donnahess.Add(startSnapPosition);

                
                listOfCharacters[i].transform.localScale = new Vector3(unfocusedElementsScale, unfocusedElementsScale, 1);
            }
        }
    }

    
    void SetLerpPositionToClosestSnapPoint()
    {
        for (int i = 0; i < donnahess.Count; i++)
        {
            if (horizontalList)
            {
                if (transform.localPosition.x > donnahess[i] - currentCharCheckTemp - 1 && transform.localPosition.x <= donnahess[i] + currentCharCheckTemp)
                {
                    newLerpPosition = new Vector3(donnahess[i], 0, 0);
                    lerping = true;
                    currentCharacter = i;
                    break;
                }
            }
            else
            {
                if (transform.localPosition.y > donnahess[i] - currentCharCheckTemp - 1 && transform.localPosition.y <= donnahess[i] + currentCharCheckTemp)
                {
                    newLerpPosition = new Vector3(0, donnahess[i], 0);
                    lerping = true;
                    currentCharacter = listOfCharacters.Count - i - 1;
                    break;
                }
            }
        }
    }

    void SetCurrentCharacter()
    {
        for (int i = 0; i < donnahess.Count; i++)
        {
            if (horizontalList)
            {
                if (transform.localPosition.x > donnahess[i] - currentCharCheckTemp - 1 && transform.localPosition.x <= donnahess[i] + currentCharCheckTemp)
                {
                    currentCharacter = i;
                    break;
                }
            }
            else
            {
                if (transform.localPosition.y > donnahess[i] - currentCharCheckTemp - 1 && transform.localPosition.y <= donnahess[i] + currentCharCheckTemp)
                {
                    currentCharacter = listOfCharacters.Count - i - 1;
                    break;
                }
            }
        }

        
    }

    
    IEnumerator ButtonPressed()
    {
        yield return new WaitForSeconds(0.4f);
        buttonPressed = false;
    }

    public void BackwardButtonPressed()
    {
        if (horizontalList)
        {
            if (currentCharacter > 0 && !buttonPressed)
            {
                
                buttonPressed = true;

                currentCharacter -= 1;
                newLerpPosition = new Vector3(donnahess[currentCharacter], transform.localPosition.y, 0);
                lerping = true;

                StartCoroutine(ButtonPressed());
            }
        }
        else
        {
            if (currentCharacter > 0 && !buttonPressed)
            {
                
                buttonPressed = true;

                currentCharacter -= 1;
                newLerpPosition = new Vector3(transform.localPosition.x, donnahess[listOfCharacters.Count - currentCharacter - 1], 0);
                lerping = true;

                StartCoroutine(ButtonPressed());
            }
        }
    }

    public void ForwardButtonPressed()
    {
        if (horizontalList)
        {
            if (currentCharacter < donnahess.Count - 1 && !buttonPressed)
            {
                
                buttonPressed = true;

                currentCharacter += 1;
                newLerpPosition = new Vector3(donnahess[currentCharacter], transform.localPosition.y, 0);
                lerping = true;

                StartCoroutine(ButtonPressed());
            }
        }
        else
        {
            if (currentCharacter < listOfCharacters.Count - 1 && !buttonPressed)
            {
                
                buttonPressed = true;

                currentCharacter += 2;
                newLerpPosition = new Vector3(transform.localPosition.x, donnahess[listOfCharacters.Count - currentCharacter], 0);
                lerping = true;

                StartCoroutine(ButtonPressed());
            }
        }
    }

    public void SetButtonActive(GameObject button)
    {
        Color c = button.GetComponent<Image>().color;
        c = new Color(1, 1, 1, 1);
        button.GetComponent<Image>().color = c;

        button.GetComponent<Button>().interactable = true;

    }

    public void SetButtonInactive(GameObject button)
    {
        Color c = button.GetComponent<Image>().color;
        c = new Color(1, 1, 1, 0.3f);
        button.GetComponent<Image>().color = c;

        button.GetComponent<Button>().interactable = false;
    }

    void Update()
    {
        
        if ((Input.GetMouseButtonDown(0) || Input.GetMouseButton(0)) && !buttonPressed)
        {
            holdingRect = true;
            SetCurrentCharacter();
            newLerpPosition = transform.localPosition;
        }

        if (Input.GetMouseButtonUp(0))
            holdingRect = false;

        
        if (horizontalList)
        {
            if (!lerping && !holdingRect && Mathf.Abs(transform.parent.GetComponent<ScrollRect>().velocity.x) >= 0f && Mathf.Abs(transform.parent.GetComponent<ScrollRect>().velocity.x) < 100f)
            {
                SetLerpPositionToClosestSnapPoint();
            }
            else
            {
                SetCurrentCharacter();
            }
        }
        else
        {
            if (!lerping && !holdingRect && Mathf.Abs(transform.parent.GetComponent<ScrollRect>().velocity.y) >= 0f && Mathf.Abs(transform.parent.GetComponent<ScrollRect>().velocity.y) < 100f)
            {
                SetLerpPositionToClosestSnapPoint();
            }
            else
            {
                SetCurrentCharacter();
            }
        }

        
        if (horizontalList)
        {
            if (currentCharacter == 0)
            {
                float sb = Mathf.Abs(Mathf.Abs(donnahess[currentCharacter] - transform.localPosition.x - currentCharCheckTemp * 2) * (focusedElementScale - unfocusedElementsScale) / Mathf.Abs(currentCharCheckTemp * 2) - focusedElementScale);
                float s = Mathf.Abs(Mathf.Abs(donnahess[currentCharacter] - transform.localPosition.x) * (focusedElementScale - unfocusedElementsScale) / Mathf.Abs(currentCharCheckTemp * 2) - focusedElementScale);

                if (s <= unfocusedElementsScale)
                    s = unfocusedElementsScale;

                if (sb <= unfocusedElementsScale)
                    sb = unfocusedElementsScale;

                listOfCharacters[currentCharacter].transform.localScale = new Vector3(s, s, 1);

                listOfCharacters[currentCharacter + 1].transform.localScale = new Vector3(sb, sb, 1);
            }
            else if (currentCharacter == listOfCharacters.Count - 1)
            {
                float s = Mathf.Abs(Mathf.Abs(donnahess[currentCharacter] - transform.localPosition.x) * (focusedElementScale - unfocusedElementsScale) / Mathf.Abs(currentCharCheckTemp * 2) - focusedElementScale);
                float sf = Mathf.Abs(Mathf.Abs(donnahess[currentCharacter] - transform.localPosition.x + currentCharCheckTemp * 2) * (focusedElementScale - unfocusedElementsScale) / Mathf.Abs(currentCharCheckTemp * 2) - focusedElementScale);

                if (s <= unfocusedElementsScale)
                    s = unfocusedElementsScale;

                if (sf <= unfocusedElementsScale)
                    sf = unfocusedElementsScale;

                listOfCharacters[currentCharacter - 1].transform.localScale = new Vector3(sf, sf, 1);
                listOfCharacters[currentCharacter].transform.localScale = new Vector3(s, s, 1);
            }
            else
            {
                float sb = Mathf.Abs(Mathf.Abs(donnahess[currentCharacter] - transform.localPosition.x - currentCharCheckTemp * 2) * (focusedElementScale - unfocusedElementsScale) / Mathf.Abs(currentCharCheckTemp * 2) - focusedElementScale);
                float s = Mathf.Abs(Mathf.Abs(donnahess[currentCharacter] - transform.localPosition.x) * (focusedElementScale - unfocusedElementsScale) / Mathf.Abs(currentCharCheckTemp * 2) - focusedElementScale);
                float sf = Mathf.Abs(Mathf.Abs(donnahess[currentCharacter] - transform.localPosition.x + currentCharCheckTemp * 2) * (focusedElementScale - unfocusedElementsScale) / Mathf.Abs(currentCharCheckTemp * 2) - focusedElementScale);

                if (s <= unfocusedElementsScale)
                    s = unfocusedElementsScale;

                if (sb <= unfocusedElementsScale)
                    sb = unfocusedElementsScale;

                if (sf <= unfocusedElementsScale)
                    sf = unfocusedElementsScale;

                listOfCharacters[currentCharacter - 1].transform.localScale = new Vector3(sf, sf, 1);
                listOfCharacters[currentCharacter].transform.localScale = new Vector3(s, s, 1);
                listOfCharacters[currentCharacter + 1].transform.localScale = new Vector3(sb, sb, 1);
            }
        }
        else
        {
            if (currentCharacter == 0)
            {
                float sb = Mathf.Abs(Mathf.Abs(donnahess[currentCharacter] + transform.localPosition.y - currentCharCheckTemp * 2) * (focusedElementScale - unfocusedElementsScale) / Mathf.Abs(currentCharCheckTemp * 2) - focusedElementScale);
                float s = Mathf.Abs(Mathf.Abs(donnahess[currentCharacter] + transform.localPosition.y) * (focusedElementScale - unfocusedElementsScale) / Mathf.Abs(currentCharCheckTemp * 2) - focusedElementScale);

                if (s <= unfocusedElementsScale)
                    s = unfocusedElementsScale;

                if (sb <= unfocusedElementsScale)
                    sb = unfocusedElementsScale;

                listOfCharacters[currentCharacter].transform.localScale = new Vector3(s, s, 1);
                listOfCharacters[currentCharacter + 1].transform.localScale = new Vector3(sb, sb, 1);
            }
            else if (currentCharacter == listOfCharacters.Count - 1)
            {
                float s = Mathf.Abs(Mathf.Abs(donnahess[currentCharacter] + transform.localPosition.y) * (focusedElementScale - unfocusedElementsScale) / Mathf.Abs(currentCharCheckTemp * 2) - focusedElementScale);
                float sf = Mathf.Abs(Mathf.Abs(donnahess[currentCharacter] + transform.localPosition.y + currentCharCheckTemp * 2) * (focusedElementScale - unfocusedElementsScale) / Mathf.Abs(currentCharCheckTemp * 2) - focusedElementScale);

                if (s <= unfocusedElementsScale)
                    s = unfocusedElementsScale;

                if (sf <= unfocusedElementsScale)
                    sf = unfocusedElementsScale;

                listOfCharacters[currentCharacter - 1].transform.localScale = new Vector3(sf, sf, 1);
                listOfCharacters[currentCharacter].transform.localScale = new Vector3(s, s, 1);
            }
            else
            {
                float sb = Mathf.Abs(Mathf.Abs(donnahess[currentCharacter] + transform.localPosition.y - currentCharCheckTemp * 2) * (focusedElementScale - unfocusedElementsScale) / Mathf.Abs(currentCharCheckTemp * 2) - focusedElementScale);
                float s = Mathf.Abs(Mathf.Abs(donnahess[currentCharacter] + transform.localPosition.y) * (focusedElementScale - unfocusedElementsScale) / Mathf.Abs(currentCharCheckTemp * 2) - focusedElementScale);
                float sf = Mathf.Abs(Mathf.Abs(donnahess[currentCharacter] + transform.localPosition.y + currentCharCheckTemp * 2) * (focusedElementScale - unfocusedElementsScale) / Mathf.Abs(currentCharCheckTemp * 2) - focusedElementScale);

                if (s <= unfocusedElementsScale)
                    s = unfocusedElementsScale;

                if (sb <= unfocusedElementsScale)
                    sb = unfocusedElementsScale;

                if (sf <= unfocusedElementsScale)
                    sf = unfocusedElementsScale;

                listOfCharacters[currentCharacter - 1].transform.localScale = new Vector3(sf, sf, 1);
                listOfCharacters[currentCharacter].transform.localScale = new Vector3(s, s, 1);
                listOfCharacters[currentCharacter + 1].transform.localScale = new Vector3(sb, sb, 1);
            }
        }

        
        if (lerping)
        {
            transform.localPosition = Vector3.Lerp(transform.localPosition, newLerpPosition, lerpingSpeed);

            if (Vector3.Distance(transform.localPosition, newLerpPosition) < 1f)
            {
                transform.localPosition = newLerpPosition;
                transform.parent.GetComponent<ScrollRect>().velocity = new Vector3(0, 0, 0);
                lerping = false;

                for (int i = 0; i < listOfCharacters.Count; i++)
                {
                    if (i != currentCharacter)
                        listOfCharacters[i].transform.localScale = new Vector3(unfocusedElementsScale, unfocusedElementsScale, 1);
                }

            }
        }

        if (horizontalList)
        {
            
            if (transform.localPosition.x > donnahess[donnahess.Count - 1] + spacing / 2)
            {
                SetButtonActive(forwardButton);
            }
            else
            {
                SetButtonInactive(forwardButton);
            }

            if (transform.localPosition.x < donnahess[0] - spacing / 2)
            {
                SetButtonActive(backwardButton);
            }
            else
            {
                SetButtonInactive(backwardButton);
            }
        }
        else
        {
            
            if (transform.localPosition.y > donnahess[donnahess.Count - 1] + spacing / 2)
            {
                SetButtonActive(backwardButton);
            }
            else
            {
                SetButtonInactive(backwardButton);
            }

            if (transform.localPosition.y < donnahess[0] - spacing / 2)
            {
                SetButtonActive(forwardButton);
            }
            else
            {
                SetButtonInactive(forwardButton);
            }
        }
    }

}
