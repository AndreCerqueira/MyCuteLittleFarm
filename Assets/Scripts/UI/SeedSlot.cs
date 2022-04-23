using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SeedSlot : SeedDisplay
{

    protected override void Start()
    {
        base.Start();

        GetComponent<Button>().onClick.AddListener(delegate { PickSeed(camera, gridController); });
    }


}
