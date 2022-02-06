using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SeedRow : MonoBehaviour
{
    public Seed seed;

    public int xp
    {
        get
        {
            return seed.xp;
        }
        set
        {
            if (value < seed.maxXp)
                seed.xp = value;
            else { 
                seed.xp = seed.maxXp;
                transform.Find("Upgrade Button").GetComponent<Button>().interactable = true;
            }

            transform.Find("level").GetComponent<Text>().text = "LVL " + seed.level + " - (" + seed.xp + "/" + seed.maxXp + ")";
            transform.Find("Experience Bar").GetComponent<Slider>().value = (seed.xp / (seed.maxXp * 1f));
        }
    }

    void Start()
    {

        GameManager gameManager;
        gameManager = FindObjectOfType<GameManager>();

        Button btnPlant = transform.Find("Plant Button").GetComponent<Button>();
        btnPlant.onClick.AddListener(delegate { gameManager.plantSeed(gameObject); });
        //btnPlant.OnSelect.AddListener(delegate { gameManager.plantSeed(gameObject); });

        Button btnRemove = transform.Find("Remove Button").GetComponent<Button>();
        btnRemove.onClick.AddListener(delegate { gameManager.digSeed(gameObject); });

        Button btnUpgrade = transform.Find("Upgrade Button").GetComponent<Button>();
        btnUpgrade.onClick.AddListener(delegate { upgradeSeed(); });

    }


    public void upgradeSeed()
    {
        if (seed.xp >= seed.maxXp) 
        {
            transform.Find("Upgrade Button").GetComponent<Button>().interactable = false;
            seed.levelUp();
            setData();
        }
    }


    public void setData()
    {
        // Costumize row
        transform.Find("level").GetComponent<Text>().text = "LVL " + seed.level + " - (" + seed.xp + "/" + seed.maxXp + ")";
        transform.Find("Experience Bar").GetComponent<Slider>().value = (seed.xp / (seed.maxXp * 1f));
        transform.Find("Speed/text").GetComponent<Text>().text = seed.growthSpeed.ToString();
        transform.Find("Value/text").GetComponent<Text>().text = seed.value.ToString();
        transform.Find("Seed Icon").GetComponent<Image>().sprite = seed.image;
        setRarityIcon();
    }

    public void setRarityIcon()
    {

        switch (seed.rarity)
        {
            case Rarity.Common:
                transform.Find("Rarity/Common").GetComponent<Image>().enabled = true;
                break;
            case Rarity.Rare:
                transform.Find("Rarity/Rare").GetComponent<Image>().enabled = true;
                break;
            case Rarity.Epic:
                transform.Find("Rarity/Epic").GetComponent<Image>().enabled = true;
                break;
            case Rarity.Legendary:
                transform.Find("Rarity/Legendary").GetComponent<Image>().enabled = true;
                break;
            default:
                break;
        }

    }

}
