using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public enum SeedState
{
    planted,
    stored
}

public class SeedDisplay : MonoBehaviour
{
    // Variables
    public Seed seed;
    private SeedState _seedState;

    public SeedState seedState
    {
        get
        {
            return _seedState;
        }
        set
        {
            if (value == SeedState.planted)
            {
                transform.Find("Image/Plant Button").GetComponent<Image>().enabled = false;
                transform.Find("Image/Remove Button").GetComponent<Image>().enabled = true;
            }
            else
            {
                transform.Find("Image/Plant Button").GetComponent<Image>().enabled = true;
                transform.Find("Image/Remove Button").GetComponent<Image>().enabled = false;
            }
            _seedState = value;
        }
    }

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
            else
            {
                seed.xp = seed.maxXp;
                transform.Find("Upgrade Button").GetComponent<Button>().interactable = true;
            }

            transform.Find("level").GetComponent<Text>().text = "LVL " + seed.level + " - (" + seed.xp + "/" + seed.maxXp + ")";
            transform.Find("Experience Bar").GetComponent<Slider>().value = (seed.xp / (seed.maxXp * 1f));
        }
    }

    protected virtual void Start()
    {
        seedState = SeedState.stored;
    }


    public virtual void SetData()
    {
        // Costumize row
        transform.Find("Seed Icon").GetComponent<Image>().sprite = seed.image;
        SetRarityIcon();
    }


    public void SetRarityIcon()
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


    protected void PickSeed(CameraController camera, GridController gridController)
    {
        if (seedState == SeedState.stored)
        {
            camera.action = PlayerAction.plant;

            gridController.ChangeHoverTile(seed.image);
            gridController.selectedRow = this;
        }
        else
        {
            RemovePlant(gridController);
        }

    }


    public void RemovePlant(GridController gridController)
    {
        gridController.RemovePlant(seed.instanceId.ToString());
        seedState = SeedState.stored;
    }

}
