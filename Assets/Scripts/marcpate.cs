using UnityEngine;
using System.Collections;
using UnityEngine.UI;







public class marcpate : MonoBehaviour
{
    Animator anim;

    public double thermometerValue;

    public Text thermometerText;

    public void shawnatwood()
    {
        if (anim == null) anim = transform.GetComponent<Animator>();
        anim.SetInteger("moveAnimNo", Random.Range(1, 7));
    }
    public void inesrobison()
    {
        transform.parent.SendMessage("inesrobison");
    }

    public void sheilarutherford()
    {
        if (trevorshort.Instance != null) trevorshort.Instance.tamikatalley(trevorshort.Instance.chrisgillespie);
    }
    public void jerrymott()
    {
        if (trevorshort.Instance != null) trevorshort.Instance.michaelalucero(trevorshort.Instance.chrisgillespie);
    }

    public void marinaguerrero()
    {
        if (trevorshort.Instance != null) trevorshort.Instance.tamikatalley(trevorshort.Instance.Cereal);
    }

    public void leeruiz()
    {
        if (trevorshort.Instance != null) trevorshort.Instance.michaelalucero(trevorshort.Instance.Cereal);
    }

    public void autumnbates()
    {

    }

    public void hollyfarris()
    {
        weldonroth.Instance.ActivateShowerButton();
        weldonroth.Instance.RemoveBubbles();
        GameObject.Find("Canvas").transform.Find("FG/Shower").GetComponent<Button>().onClick.RemoveAllListeners();
        GameObject.Find("Canvas").transform.Find("FG/Shower").GetComponent<Button>().onClick.AddListener(weldonroth.Instance.ShowerButtonClickedStopShowering);
    }

    public void megandavison(string name)
    {
        if (trevorshort.Instance != null)
            trevorshort.Instance.megandavison(name);
    }

    public void essiefrye(string name)
    {
        if (trevorshort.Instance != null)
            trevorshort.Instance.essiefrye(name);
    }

    public void rosabraun()
    {

    }

    public void celiamcdonald()
    {
        GameObject canvas = GameObject.Find("Canvas");
        canvas.GetComponent<dariustovar>().camillewalton(canvas.transform.Find("PopUps/ToothSelect").gameObject);
        eduardokhan.tooth = transform.parent.gameObject;
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
