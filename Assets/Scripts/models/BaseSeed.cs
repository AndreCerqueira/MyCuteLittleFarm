using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "New Seed", menuName = "Seed")]
public class BaseSeed : ScriptableObject
{

    public int id;
    public string name;
    public Sprite image;
    public Rarity rarity;
    public Sprite[] animation;
    public float value;

}