using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "Data/MiniGamePetsData")]
public class omarsilva : ScriptableObject
{

    [Header("Mini game pets prefabs")]
    public List<GameObject> pets;

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

    public void NextMiniGame()
    {
        if (PlayerPrefs.HasKey("PetOnSelectScene"))
        {
            int petOnSelectScene = PlayerPrefs.GetInt("PetOnSelectScene");
            int petIndex;
            switch (petOnSelectScene)
            {
                case 1:
                    petIndex = PlayerPrefs.GetInt("FirstPetMiniGameIndex");
                    petIndex++;
                    if (petIndex >= 6)
                        petIndex = 0;

                    PlayerPrefs.SetInt("FirstPetMiniGameIndex", petIndex);
                    PlayerPrefs.Save();
                    if (IsMiniGameAleradyEnabled(1, petIndex))
                        NextMiniGame();
                    break;

                case 2:
                    petIndex = PlayerPrefs.GetInt("SecondPetMiniGameIndex");
                    petIndex++;
                    if (petIndex >= 6)
                        petIndex = 0;

                    PlayerPrefs.SetInt("SecondPetMiniGameIndex", petIndex);
                    PlayerPrefs.Save();
                    if (IsMiniGameAleradyEnabled(2, petIndex))
                        NextMiniGame();
                    break;

                case 3:
                    petIndex = PlayerPrefs.GetInt("ThirdPetMiniGameIndex");
                    petIndex++;
                    if (petIndex >= 6)
                        petIndex = 0;

                    PlayerPrefs.SetInt("ThirdPetMiniGameIndex", petIndex);
                    PlayerPrefs.Save();
                    if (IsMiniGameAleradyEnabled(3, petIndex))
                        NextMiniGame();
                    break;
                default:
                    break;
            }
        }
    }

    bool IsMiniGameAleradyEnabled(int petIndex, int miniGameIndex)
    {
        int pet1index, pet2index, pet3index;
        pet1index = PlayerPrefs.GetInt("FirstPetMiniGameIndex");
        pet2index = PlayerPrefs.GetInt("SecondPetMiniGameIndex");
        pet3index = PlayerPrefs.GetInt("ThirdPetMiniGameIndex");

        switch (petIndex)
        {
            case 1:
                if (pet2index == miniGameIndex || miniGameIndex == pet3index)
                    return true;
                break;

            case 2:
                if (miniGameIndex == pet1index || miniGameIndex == pet3index)
                    return true;
                break;

            case 3:
                if (miniGameIndex == pet1index || miniGameIndex == pet2index)
                    return true;

                break;
            default:
                break;
        }
        return false;


    }
}
