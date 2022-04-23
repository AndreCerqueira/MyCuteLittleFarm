using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlantPreview : TerrainContent
{

    // Start is called before the first frame update
    protected override void Start()
    {
        base.Start();

        spriteRenderer.sprite = fases[fases.Length-1];
    }

}
