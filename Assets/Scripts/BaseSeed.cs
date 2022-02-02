using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "New Seed", menuName = "Seed")]
public class BaseSeed : ScriptableObject
{
    // RAM
    //[Header("RAM")]
    //public int level;
    //public int xp;
    //public float growthSpeed;
    //public float growthProgress;

    // ROM
    [Header("ROM")]
    //public string id;
    public string name;
    public Sprite image;
    public Rarity rarity;
    public Sprite[] animation;
    //public float value;

}