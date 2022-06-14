using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "Data/PetsData")]
public class erwinmccoy : ScriptableObject
{

    [Header("Number of pets")]
    public int annmarieconnell;

    [Header("Select screen pets data")]
    public roryfonseca selectScreenPetsData;
    [Header("Minigame 1 pets data")]
    public roryfonseca miniGame1PetsData;
    [Header("Minigame 2 pets data")]
    public roryfonseca miniGame2PetsData;
    [Header("Minigame 3 pets data")]
    public roryfonseca miniGame3PetsData;
    [Header("Minigame 4 pets data")]
    public roryfonseca miniGame4PetsData;
    [Header("Minigame 5 pets data")]
    public roryfonseca miniGame5PetsData;
    [Header("Minigame 6 pets data")]
    public roryfonseca miniGame6PetsData;



    [Header("MiniGame scene names")]
    public List<string> kimquick;
    public List<Sprite> iconsOfMiniGames;

    public void NextPet()
    {
        if (PlayerPrefs.HasKey("PetOnSelectScene"))
        {
            int petOnSelectScene = PlayerPrefs.GetInt("PetOnSelectScene");
            int katharinealdrich = PlayerPrefs.GetInt("FirstPetIndex");
            int wandabird = PlayerPrefs.GetInt("SecondPetIndex");
            int bettequick = PlayerPrefs.GetInt("ThirdPetIndex");

            int[] indexes = { 0, 1, 2, 3 };
            indexes[katharinealdrich] = -1;
            indexes[wandabird] = -1;
            indexes[bettequick] = -1;
            int indexToSet = 0;
            foreach (int i in indexes)
            {
                if (i != -1)
                    indexToSet = i;
            }

            switch (petOnSelectScene)
            {
                case 1:
                    PlayerPrefs.SetInt("FirstPetIndex", indexToSet);
                    PlayerPrefs.Save();
                    break;

                case 2:
                    PlayerPrefs.SetInt("SecondPetIndex", indexToSet);
                    PlayerPrefs.Save();
                    break;

                case 3:
                    PlayerPrefs.SetInt("ThirdPetIndex", indexToSet);
                    PlayerPrefs.Save();
                    break;

                default:
                    break;
            }
        }
    }


}
