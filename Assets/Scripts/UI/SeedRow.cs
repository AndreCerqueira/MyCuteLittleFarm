using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SeedRow : SeedDisplay
{

    protected override void Start()
    {
        base.Start();

        Button btnUpgrade = transform.Find("Upgrade Button").GetComponent<Button>();
        btnUpgrade.onClick.AddListener(delegate { UpgradeSeed(); });

        seed.GetProgressFromLootLocker((_xp, _level) => {
            xp = _xp;
            seed.level = _level;
        });

    }


    public void UpgradeSeed()
    {
        if (seed.xp >= seed.maxXp) 
        {
            transform.Find("Upgrade Button").GetComponent<Button>().interactable = false;
            seed.levelUp();
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
