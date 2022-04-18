using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TerrainContent : MonoBehaviour
{
    // Variables
    public SeedDisplay row;
    protected SpriteRenderer spriteRenderer;
    protected Sprite[] fases;


    // Start is called before the first frame update
    protected virtual void Start()
    {
        // Set data
        spriteRenderer = GetComponent<SpriteRenderer>();
        fases = row.seed.animation;
    }


}
