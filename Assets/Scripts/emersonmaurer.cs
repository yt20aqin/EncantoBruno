using UnityEngine;
using System.Collections;
using UnityEngine.UI;







public class emersonmaurer : MonoBehaviour
{
    Animator anim;

    public double thermometerValue;

    public Text thermometerText;

    public void tabithasalinas()
    {
        if (anim == null) anim = transform.GetComponent<Animator>();
        anim.SetInteger("moveAnimNo", Random.Range(1, 7));
    }
    public void deloriswoodward()
    {
        transform.parent.SendMessage("deloriswoodward");
    }

    public void sheilarutherford()
    {
        if (caseygomes.Instance != null) caseygomes.Instance.jannazhang(caseygomes.Instance.mariannemcfarland);
    }
    public void kaitlyngil()
    {
        if (caseygomes.Instance != null) caseygomes.Instance.kerriholder(caseygomes.Instance.mariannemcfarland);
    }

    public void cecilianapier()
    {
        if (caseygomes.Instance != null) caseygomes.Instance.jannazhang(caseygomes.Instance.Cereal);
    }

    public void suzetteferris()
    {
        if (caseygomes.Instance != null) caseygomes.Instance.kerriholder(caseygomes.Instance.Cereal);
    }

    public void vondacarroll()
    {

    }

    public void beatricestephenson()
    {
        robinspangler.Instance.ActivateShowerButton();
        robinspangler.Instance.RemoveBubbles();
        GameObject.Find("Canvas").transform.Find("FG/Shower").GetComponent<Button>().onClick.RemoveAllListeners();
        GameObject.Find("Canvas").transform.Find("FG/Shower").GetComponent<Button>().onClick.AddListener(robinspangler.Instance.ShowerButtonClickedStopShowering);
    }

    public void charlottehirsch(string name)
    {
        if (caseygomes.Instance != null)
            caseygomes.Instance.charlottehirsch(name);
    }

    public void saundraseymour(string name)
    {
        if (caseygomes.Instance != null)
            caseygomes.Instance.saundraseymour(name);
    }

    public void lawandakerr()
    {

    }

    public void melindamckee()
    {
        GameObject canvas = GameObject.Find("Canvas");
        canvas.GetComponent<lesliedooley>().malindacrain(canvas.transform.Find("PopUps/ToothSelect").gameObject);
        fabianrodriquez.tooth = transform.parent.gameObject;
    }

    public void MouthOpened()
    {
        GameObject.Find("Canvas").transform.Find("MainPanel/CharacterInjuriesHolder").gameObject.SetActive(true);
    }

    public void AddValueToThemometer()
    {
        thermometerValue += 0.2;

        thermometerText.text = System.Math.Round((thermometerValue + 0.2), 1).ToString();
    }

}
