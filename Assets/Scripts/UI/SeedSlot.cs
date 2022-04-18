using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SeedSlot : SeedDisplay
{
    // Variables
    private new CameraController camera;
    //private BuildManager buildManager;
    private GridController gridController;


    protected override void Start()
    {
        base.Start();

        camera = FindObjectOfType<CameraController>();
        gridController = FindObjectOfType<GridController>();

        GetComponent<Button>().onClick.AddListener(delegate { PickSeed(camera, gridController); });
    }


}
