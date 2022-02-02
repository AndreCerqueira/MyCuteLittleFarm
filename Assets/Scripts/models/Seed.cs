using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Seed
{
    // RAM
    public int level;
    public int xp;
    public int maxXp;
    public float growthSpeed;
    public float growthProgress;
    public bool planted;

    // ROM
    public string id;
    public BaseSeed baseSeed;
    public float value;

    public string name { 
        get {
            return baseSeed.name;
        }
    }

    public Sprite image {
        get {
            return baseSeed.image;
        }
    }

    public Rarity rarity {
        get {
            return baseSeed.rarity;
        }
    }

    public Sprite[] animation {
        get {
            return baseSeed.animation;
        }
    }

    public Seed(string _id, BaseSeed _baseSeed, float _value, float _growthSpeed)
    {
        id = "1";
        baseSeed = _baseSeed;
        value = _value;
        
        level = 1;
        xp = 0;
        maxXp = Utils.getMaxXP(level, rarity);
        growthSpeed = _growthSpeed; 
        growthProgress = 0f;
    }


    public void levelUp()
    {
        xp = 0;
        level++;
        maxXp = Utils.getMaxXP(level, rarity);
        growthSpeed += 1;
    }
}

public enum Rarity
{
    Common,
    Rare,
    Epic,
    Legendary
}