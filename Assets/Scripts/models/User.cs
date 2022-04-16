using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class User
{

    // Variables
    string id;
    public int inGamePacks;
    public float inGameCoins;
    public float walletCoins;
    public Inventory inventory;
    public GameManager gameManager;
    public List<Terrain> terrains;

    public User ()
    {

        getTerrains();

        gameManager = GameObject.FindObjectOfType<GameManager>();

        id = "";

    }


    public void loadUserData()
    {
        getInventory();
        getUserDbData();
    }


    private void getInventory()
    {
        inventory = new Inventory();
    }


    private void getUserDbData()
    {
        inventory.getGameCoins((coins) => {
            gameManager.inGameCoins = coins;
        });

        inventory.getPacks((packs) => {
            gameManager.inGamePacks = packs;
        });

        walletCoins = 0f;
    }


    void getTerrains() 
    {
        // Default free terrains
        
        terrains = new List<Terrain>();/*
        terrains.Add(new Terrain(1, 8, 12, TerrainType.grassLeftCornerSoil, TerrainState.wild));
        terrains.Add(new Terrain(1, 12, 12, TerrainType.grassRightCornerSoil, TerrainState.wild));
        terrains.Add(new Terrain(1, 9, 12, TerrainType.grassTopSoil, TerrainState.wild));
        terrains.Add(new Terrain(1, 10, 12, TerrainType.grassTopSoil, TerrainState.wild));
        terrains.Add(new Terrain(1, 11, 12, TerrainType.grassTopSoil, TerrainState.wild));*/

        // Available Ones
        terrains.Add(new Terrain(1, 9, 11, TerrainType.topLeftCorner, TerrainState.empty));
        terrains.Add(new Terrain(1, 10, 11, TerrainType.top, TerrainState.empty));
        terrains.Add(new Terrain(1, 11, 11, TerrainType.topRightCorner, TerrainState.empty));
        terrains.Add(new Terrain(1, 9, 10, TerrainType.left, TerrainState.empty));
        terrains.Add(new Terrain(1, 10, 10, TerrainType.soil, TerrainState.empty));
        terrains.Add(new Terrain(1, 11, 10, TerrainType.right, TerrainState.empty));
        terrains.Add(new Terrain(1, 9, 9, TerrainType.bottomLeftCorner, TerrainState.empty));
        terrains.Add(new Terrain(1, 10, 9, TerrainType.bottom, TerrainState.empty));
        terrains.Add(new Terrain(1, 11, 9, TerrainType.bottomRightCorner, TerrainState.empty));
        /*
        terrains.Add(new Terrain(1, 9, 9, TerrainType.soilBottom, TerrainState.empty));
        terrains.Add(new Terrain(1, 10, 9, TerrainType.soilBottom, TerrainState.empty));
        terrains.Add(new Terrain(1, 11, 9, TerrainType.soilBottom, TerrainState.empty));

        
        terrains.Add(new Terrain(1, 8, 9, TerrainType.grassLeftSideSoil, TerrainState.wild));
        terrains.Add(new Terrain(1, 12, 9, TerrainType.grassRightSideSoil, TerrainState.wild));
        terrains.Add(new Terrain(1, 8, 11, TerrainType.grassLeftCountinuousSideSoil, TerrainState.wild));
        terrains.Add(new Terrain(1, 12, 11, TerrainType.grassRighCountinuoustSideSoil, TerrainState.wild));
        terrains.Add(new Terrain(1, 8, 10, TerrainType.grassLeftCountinuousSideSoil, TerrainState.wild));
        terrains.Add(new Terrain(1, 12, 10, TerrainType.grassRighCountinuoustSideSoil, TerrainState.wild));*/

    }

}
