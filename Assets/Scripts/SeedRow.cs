using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SeedRow : MonoBehaviour
{
    public Seed seed;

    void Start()
    {

        GameManager gameManager;
        gameManager = FindObjectOfType<GameManager>();

        Button btnPlant = transform.Find("Plant Button").GetComponent<Button>();
        btnPlant.onClick.AddListener(delegate { gameManager.plantSeed(gameObject); });

        Button btnRemove = transform.Find("Remove Button").GetComponent<Button>();
        btnRemove.onClick.AddListener(delegate { gameManager.digSeed(gameObject); });

    }

}
