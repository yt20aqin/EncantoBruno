using UnityEngine;
using System.Collections;
using System;
using UnityEngine.UI;
using System.Collections.Generic;

/**
  * Scene:MainScene
  * Object:DailyRewards
  * Description: Skripta koja je zaduzena za DailyRewards, svakog novog dana daje korisniku nagradu, ako dolazi za redom svaki dan nagrada se povecava, cim se prekine niz vraca ga na pravi dan
  **/
public class rigobertostallings : MonoBehaviour
{

    public static int[] DailyRewardAmount = new int[] { 0, 100, 200, 300, 400, 500, 1000 };
    int OneDayTime = 60 * 60 * 24;
    public static int LevelReward;
    bool rewardCompleted = false;
    List<int> availableSixthReward = new List<int>();
    int sixDayCount, typeOfSixReward; 
    Text moneyText;
    System.Globalization.DateTimeFormatInfo format;
    private DateTime quitTime;
    string lastPlayDate, timeQuitString;
    string enterDay, enterMonth, enterYear, quitDay, quitMonth, quitYear;

    
    void Awake()
    {
        if (PlayerPrefs.HasKey("SixDayCount"))
        {
            sixDayCount = PlayerPrefs.GetInt("SixDayCount");
            if (sixDayCount < 4)
            {
                sixDayCount++;
            }
        }
        else
        {
            sixDayCount = 1;
        }
        moneyText = GameObject.Find("DailyReward/AnimationHolder/Body/CoinsHolder/AnimationHolder/Text").GetComponent<Text>();
        moneyText.text = "0"; 
        DateTime currentTime = DateTime.Now;

        enterDay = currentTime.Day.ToString();
        enterMonth = currentTime.Month.ToString();
        enterYear = currentTime.Year.ToString();

        if (PlayerPrefs.HasKey("LevelReward"))
        {
            LevelReward = PlayerPrefs.GetInt("LevelReward");
        }
        else
        {
            LevelReward = 0;
        }

        if (PlayerPrefs.HasKey("VremeQuit"))
        {
            lastPlayDate = PlayerPrefs.GetString("VremeQuit");
            quitTime = DateTime.Parse(lastPlayDate);

            quitDay = quitTime.Day.ToString();
            quitMonth = quitTime.Month.ToString();
            quitYear = quitTime.Year.ToString();
            if ((int.Parse(enterYear) - int.Parse(quitYear)) < 1)
            {

                if ((int.Parse(enterMonth) - int.Parse(quitMonth)) == 0)
                {

                    if ((int.Parse(enterDay) - int.Parse(quitDay)) > 1)
                    {
                        LevelReward = 1;
                        GameObject.Find("DailyReward").GetComponent<Animator>().Play("DailyRewardArrival");
                        SetActiveDay(LevelReward);
                        GameObject.Find("DayOne").GetComponent<Animator>().Play("DailyRewardDay");
                        PlayerPrefs.SetInt("LevelReward", LevelReward);
                        PlayerPrefs.Save();
                        ShowDailyReward(LevelReward);
                    }
                    else if ((int.Parse(enterDay) - int.Parse(quitDay)) > 0)
                    {


                        if (LevelReward < 6)
                        {
                            GameObject.Find("DailyReward").GetComponent<Animator>().Play("DailyRewardArrival");
                            LevelReward++;
                            SetActiveDay(LevelReward);
                            GameObject.Find("Day" + LevelReward).GetComponent<Animator>().Play("DailyRewardDay");
                            PlayerPrefs.SetInt("LevelReward", LevelReward);
                            PlayerPrefs.Save();
                            ShowDailyReward(LevelReward);
                        }
                        else
                        {

                            LevelReward = 1;
                            GameObject.Find("DailyReward").GetComponent<Animator>().Play("DailyRewardArrival");
                            SetActiveDay(LevelReward);
                            GameObject.Find("Day" + LevelReward).GetComponent<Animator>().Play("DailyRewardDay");
                            PlayerPrefs.SetInt("LevelReward", LevelReward);
                            PlayerPrefs.Save();
                            ShowDailyReward(LevelReward);
                        }

                        
                    }
                    else
                    {
                    }
                }
                else
                {

                    if (int.Parse(enterDay) == 1)
                    {
                        if (int.Parse(quitMonth) == 1 || int.Parse(quitMonth) == 3 || int.Parse(quitMonth) == 5 || int.Parse(quitMonth) == 7 || int.Parse(quitMonth) == 8 || int.Parse(quitMonth) == 10 || int.Parse(quitMonth) == 12)
                        {
                            if (int.Parse(quitDay) == 31)
                            {

                                if (LevelReward < 6)
                                {
                                    GameObject.Find("DailyReward").GetComponent<Animator>().Play("DailyRewardArrival");
                                    LevelReward++;
                                    SetActiveDay(LevelReward);
                                    GameObject.Find("Day" + LevelReward).GetComponent<Animator>().Play("DailyRewardDay");
                                    PlayerPrefs.SetInt("LevelReward", LevelReward);
                                    PlayerPrefs.Save();
                                    ShowDailyReward(LevelReward);
                                }
                                else
                                {
                                    LevelReward = 1;
                                    GameObject.Find("DailyReward").GetComponent<Animator>().Play("DailyRewardArrival");
                                    SetActiveDay(LevelReward);
                                    GameObject.Find("Day" + LevelReward).GetComponent<Animator>().Play("DailyRewardDay");
                                    PlayerPrefs.SetInt("LevelReward", LevelReward);
                                    PlayerPrefs.Save();
                                    ShowDailyReward(LevelReward);
                                }

                                
                            }
                            else
                            {
                                LevelReward = 1;
                                GameObject.Find("DailyReward").GetComponent<Animator>().Play("DailyRewardArrival");
                                SetActiveDay(LevelReward);
                                GameObject.Find("Day" + LevelReward).GetComponent<Animator>().Play("DailyRewardDay");
                                PlayerPrefs.SetInt("LevelReward", LevelReward);
                                PlayerPrefs.Save();
                                ShowDailyReward(LevelReward);

                                
                            }
                        }
                        else if (int.Parse(quitMonth) == 4 || int.Parse(quitMonth) == 6 || int.Parse(quitMonth) == 9 || int.Parse(quitMonth) == 11)
                        {
                            if (int.Parse(quitDay) == 30)
                            {

                                if (LevelReward < 6)
                                {
                                    GameObject.Find("DailyReward").GetComponent<Animator>().Play("DailyRewardArrival");
                                    LevelReward++;
                                    SetActiveDay(LevelReward);
                                    GameObject.Find("Day" + LevelReward).GetComponent<Animator>().Play("DailyRewardDay");
                                    PlayerPrefs.SetInt("LevelReward", LevelReward);
                                    PlayerPrefs.Save();
                                    ShowDailyReward(LevelReward);
                                }
                                else
                                {
                                    LevelReward = 1;
                                    GameObject.Find("DailyReward").GetComponent<Animator>().Play("DailyRewardArrival");
                                    GameObject.Find("Day" + LevelReward).GetComponent<Animator>().Play("DailyRewardDay");
                                    PlayerPrefs.SetInt("LevelReward", LevelReward);
                                    PlayerPrefs.Save();
                                    ShowDailyReward(LevelReward);
                                }

                                
                            }
                            else
                            {
                                LevelReward = 1;
                                GameObject.Find("DailyReward").GetComponent<Animator>().Play("DailyRewardArrival");
                                SetActiveDay(LevelReward);
                                GameObject.Find("Day" + LevelReward).GetComponent<Animator>().Play("DailyRewardDay");
                                PlayerPrefs.SetInt("LevelReward", LevelReward);
                                PlayerPrefs.Save();
                                ShowDailyReward(LevelReward);
                                
                            }
                        }
                        else
                        {
                            if (int.Parse(quitDay) > 27)
                            {

                                if (LevelReward < 6)
                                {
                                    GameObject.Find("DailyReward").GetComponent<Animator>().Play("DailyRewardArrival");
                                    LevelReward++;
                                    SetActiveDay(LevelReward);
                                    GameObject.Find("Day" + LevelReward).GetComponent<Animator>().Play("DailyRewardDay");
                                    PlayerPrefs.SetInt("LevelReward", LevelReward);
                                    PlayerPrefs.Save();
                                    ShowDailyReward(LevelReward);
                                }
                                else
                                {
                                    LevelReward = 1;
                                    GameObject.Find("DailyReward").GetComponent<Animator>().Play("DailyRewardArrival");
                                    SetActiveDay(LevelReward);
                                    GameObject.Find("Day" + LevelReward).GetComponent<Animator>().Play("DailyRewardDay");
                                    PlayerPrefs.SetInt("LevelReward", LevelReward);
                                    PlayerPrefs.Save();
                                    ShowDailyReward(LevelReward);
                                }

                                
                            }
                            else
                            {
                                LevelReward = 1;
                                GameObject.Find("DailyReward").GetComponent<Animator>().Play("DailyRewardArrival");
                                SetActiveDay(LevelReward);
                                GameObject.Find("Day" + LevelReward).GetComponent<Animator>().Play("DailyRewardDay");
                                PlayerPrefs.SetInt("LevelReward", LevelReward);
                                PlayerPrefs.Save();
                                ShowDailyReward(LevelReward);
                                
                            }
                        }
                    }
                    else
                    {
                        LevelReward = 1;
                        GameObject.Find("DailyReward").GetComponent<Animator>().Play("DailyRewardArrival");
                        SetActiveDay(LevelReward);
                        GameObject.Find("Day" + LevelReward).GetComponent<Animator>().Play("DailyRewardDay");
                        PlayerPrefs.SetInt("LevelReward", LevelReward);
                        PlayerPrefs.Save();
                        ShowDailyReward(LevelReward);
                        
                    }

                }


            }
            else
            {
                if (int.Parse(quitDay) == 31 && int.Parse(enterDay) == 1)
                {

                    if (LevelReward < 6)
                    {
                        GameObject.Find("DailyReward").GetComponent<Animator>().Play("DailyRewardArrival");
                        LevelReward++;
                        SetActiveDay(LevelReward);
                        GameObject.Find("Day" + LevelReward).GetComponent<Animator>().Play("DailyRewardDay");
                        PlayerPrefs.SetInt("LevelReward", LevelReward);
                        PlayerPrefs.Save();
                        ShowDailyReward(LevelReward);
                    }
                    else
                    {
                        LevelReward = 1;
                        GameObject.Find("DailyReward").GetComponent<Animator>().Play("DailyRewardArrival");
                        SetActiveDay(LevelReward);
                        GameObject.Find("Day" + LevelReward).GetComponent<Animator>().Play("DailyRewardDay");
                        PlayerPrefs.SetInt("LevelReward", LevelReward);
                        PlayerPrefs.Save();
                        ShowDailyReward(LevelReward);
                    }

                    
                }
                else
                {

                    LevelReward = 1;
                    GameObject.Find("DailyReward").GetComponent<Animator>().Play("DailyRewardArrival");
                    SetActiveDay(LevelReward);
                    GameObject.Find("Day" + LevelReward).GetComponent<Animator>().Play("DailyRewardDay");
                    PlayerPrefs.SetInt("LevelReward", LevelReward);
                    PlayerPrefs.Save();
                    ShowDailyReward(LevelReward);
                    
                }
            }


        }
        else
        {
            
            LevelReward = 0;
            PlayerPrefs.SetInt("LevelReward", LevelReward);
            PlayerPrefs.Save();

            
        }


    }

    void OnApplicationPause(bool pauseStatus)
    { 
        if (pauseStatus)
        {
            
            timeQuitString = DateTime.Now.ToString();
            PlayerPrefs.SetString("VremeQuit", timeQuitString);
            PlayerPrefs.Save();
        }
        else
        {
            
        }
    }

    void ShowDailyReward(int currentDayReward)
    {
        
        GameObject currentDay;
        currentDay = GameObject.Find("Day " + currentDayReward.ToString());

        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }

    
    
    
    public IEnumerator moneyCounter(int kolicina)
    {


        int current = int.Parse(moneyText.text);
        int suma = current + kolicina;
        int korak = (suma - current) / 10;
        while (current != suma)
        {
            current += korak;
            moneyText.text = current.ToString();
            yield return new WaitForSeconds(0.07f);
        }
        timeQuitString = DateTime.Now.ToString();
        PlayerPrefs.SetString("VremeQuit", timeQuitString);
        PlayerPrefs.Save();
        yield return new WaitForSeconds(0.2f);
        GameObject.Find("DailyReward").GetComponent<Animator>().Play("DailyRewardDeparting");
    }

    
    
    
    
    void SetActiveDay(int dayNumber)
    {
        GameObject.Find("Day" + dayNumber + "/Image").GetComponent<Image>().color = new Color(255, 255, 255, 1);
    }

    void OnApplicationQuit()
    {
        timeQuitString = DateTime.Now.ToString();
        PlayerPrefs.SetString("VremeQuit", timeQuitString);
        PlayerPrefs.Save();

        
    }

    
    
    
    public void TakeReward()
    {
        if (!rewardCompleted)
        {
            if (LevelReward != 6)
            {
                StartCoroutine("moneyCounter", DailyRewardAmount[LevelReward]);
            }
            rewardCompleted = true;
        }

    }

    
    
    
    public void TakeSixthReward()
    {
        if (!rewardCompleted)
        {
            rewardCompleted = true;

            ;

        }

    }

    
    
    
    public void Collect()
    {
        if (LevelReward < 6)
        {
            TakeReward();
        }
        else
        {
            TakeSixthReward();
        }
    }

    
    
    
    void HideAfterSixtDay()
    {
        GameObject.Find("DailyReward").GetComponent<Animator>().Play("DailyRewardDeparting");
    }

}
