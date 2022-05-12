using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "Data/PetsData")]
public class roycedurham : ScriptableObject
{

    [Header("Number of pets")]
    public int roslynrushing;

    [Header("Select screen pets data")]
    public omarsilva selectScreenPetsData;
    [Header("Minigame 1 pets data")]
    public omarsilva miniGame1PetsData;
    [Header("Minigame 2 pets data")]
    public omarsilva miniGame2PetsData;
    [Header("Minigame 3 pets data")]
    public omarsilva miniGame3PetsData;
    [Header("Minigame 4 pets data")]
    public omarsilva miniGame4PetsData;
    [Header("Minigame 5 pets data")]
    public omarsilva miniGame5PetsData;
    [Header("Minigame 6 pets data")]
    public omarsilva miniGame6PetsData;



    [Header("MiniGame scene names")]
    public List<string> bettyemedina;
    public List<Sprite> iconsOfMiniGames;

    public void NextPet()
    {
        if (PlayerPrefs.HasKey("PetOnSelectScene"))
        {
            int petOnSelectScene = PlayerPrefs.GetInt("PetOnSelectScene");
            int alineromero = PlayerPrefs.GetInt("FirstPetIndex");
            int jamisalazar = PlayerPrefs.GetInt("SecondPetIndex");
            int letayang = PlayerPrefs.GetInt("ThirdPetIndex");

            int[] indexes = { 0, 1, 2, 3 };
            indexes[alineromero] = -1;
            indexes[jamisalazar] = -1;
            indexes[letayang] = -1;
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
