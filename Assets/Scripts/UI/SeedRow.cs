using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SeedRow : SeedDisplay
{

    protected override void Start()
    {
        base.Start();

        GameManager gameManager;
        gameManager = FindObjectOfType<GameManager>();

        Button btnPlant = transform.Find("Plant Button").GetComponent<Button>();
        //btnPlant.onClick.AddListener(delegate { gameManager.PlantSeed(gameObject); });

        Button btnRemove = transform.Find("Remove Button").GetComponent<Button>();
        //btnRemove.onClick.AddListener(delegate { gameManager.DigSeed(gameObject); });

        Button btnUpgrade = transform.Find("Upgrade Button").GetComponent<Button>();
        btnUpgrade.onClick.AddListener(delegate { UpgradeSeed(); });

        /*
        if (seed.state != "stored")
        {
            seed.PlaceSeed(this);
        }*/

        seed.GetProgressFromLootLocker((_xp, _level) =>
        {
            xp = _xp;
            seed.level = _level;
        });

    }


    public void UpgradeSeed()
    {
        if (seed.xp >= seed.maxXp) 
        {
            transform.Find("Upgrade Button").GetComponent<Button>().interactable = false;
            // TODO seed.levelUp();
            SetData();
        }
    }


    public override void SetData()
    {
        // Costumize row
        transform.Find("level").GetComponent<Text>().text = "LVL " + seed.level + " - (" + seed.xp + "/" + seed.maxXp + ")";
        transform.Find("Experience Bar").GetComponent<Slider>().value = (seed.xp / (seed.maxXp * 1f));
        transform.Find("Speed/text").GetComponent<Text>().text = seed.growthSpeed.ToString();
        transform.Find("Value/text").GetComponent<Text>().text = seed.value.ToString();

        base.SetData();
    }

}
