using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Pack : MonoBehaviour
{

    public void getSeed()
    {

        BaseSeed[] baseSeeds = GameObject.FindObjectOfType<GameManager>().baseSeeds;
        Image image = transform.Find("Image").GetComponent<Image>();
        image.enabled = true;

        // Get the rarity
        int chance = Random.Range(0, 101);
        Rarity rarity;
        switch (chance)
        {
            case int n when (n < 65): // 65% Common
                rarity = Rarity.Common;
                break;
            case int n when (n < 85): // 20% Rare
                rarity = Rarity.Rare;
                break;
            case int n when (n < 95): // 10% Epic
                rarity = Rarity.Epic;
                break;
            default:
                rarity = Rarity.Legendary;  // 5% Legendary
                break;
        }

        // Give a random seed based on the rarity
        switch (rarity) 
        {
            case Rarity.Common:
                image.sprite = baseSeeds[0].image;
                break;
            case Rarity.Rare:
                image.sprite = baseSeeds[1].image;
                break;
            case Rarity.Epic:
                image.sprite = baseSeeds[2].image;
                break;
            case Rarity.Legendary:
                image.sprite = baseSeeds[3].image;
                break;
            default:
                break;
        }

        // Add given seed to collection
    
    }

}
