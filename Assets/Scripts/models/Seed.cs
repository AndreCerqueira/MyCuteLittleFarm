using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Seed
{
    // RAM
    public int level;
    public int xp;
    public float growthSpeed;
    public float growthProgress;
    public bool planted;

    // ROM
    public string id;
    public string name;
    public Sprite image;
    public Rarity rarity;
    public float value;
    
    public Seed()
    {
        id = "1";
        name = "Tormatilho";
        rarity = Rarity.Common;
        value = 0.1f;

        level = 1;
        xp = 0;
        growthSpeed = 0.2f;
        growthProgress = 0f;

    }
}

public enum Rarity
{
    Common,
    Rare,
    Epic,
    Legendary
}