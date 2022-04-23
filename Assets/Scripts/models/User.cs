using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class User
{
    // Variables
    string id;
    public int inGamePacks;
    public float inGameCoins;
    public float walletCoins;
    public GameManager gameManager;
    public List<Terrain> terrainsUsed;
    public List<Terrain> terrainsAvailable;
    public List<Seed> seeds;
    public bool loading = true;

    public User ()
    {

        GetTerrains(() => {

            GetSeeds(() => {

                loading = false;

            });
        
        });

        if (SceneManager.GetActiveScene().name == "MainScene") 
        { 
            gameManager = GameObject.FindObjectOfType<GameManager>();

            LoadUserData();
        }

        id = "";

    }


    public void LoadUserData()
    {
        GetUserDbData();
    }


    private void GetUserDbData()
    {
        LootLockerHelper.GetGameCoins((coins) => {
            gameManager.inGameCoins = coins;
        });

        LootLockerHelper.GetPacks((packs) => {
            gameManager.inGamePacks = packs;
        });

        walletCoins = 0f;
    }


    private void GetTerrains(Action onComplete) 
    {

        GridController gridController = GameObject.FindObjectOfType<GridController>();
        terrainsUsed = new List<Terrain>();
        terrainsAvailable = new List<Terrain>();

        LootLockerHelper.GetTerrains((terrains) => {

            foreach (Terrain terrain in terrains)
            {
                terrainsAvailable.Add(terrain);
            }

            // Set Using Terrains
            foreach (Terrain terrain in terrains)
            {
                if (terrain.IsPlaced())
                {
                    Vector3Int pos = new Vector3Int((int)terrain.x, (int)terrain.y, 0);
                    gridController.SetTileFromDb(terrain);
                }
            }

            onComplete();

        });

    }


    private void GetSeeds(Action onComplete)
    {

        LootLockerHelper.GetSeeds((seeds) => {

            this.seeds = seeds;

            onComplete();

        });

    }

}
