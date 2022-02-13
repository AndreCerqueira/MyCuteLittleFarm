using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class User
{

    // Variables
    string id;
    public float gameCoins;
    public float walletCoins;
    public List<Seed> seeds;
    public List<Terrain> terrains;

    public User (string _id)
    {

        GameManager gameManager = GameObject.FindObjectOfType<GameManager>();

        id = _id;
        gameCoins = 0f;
        walletCoins = 0f;
        seeds = new List<Seed>();
        seeds.Add(new Seed("1", gameManager.baseSeeds[3], 0.1f, 1));
        seeds.Add(new Seed("2", gameManager.baseSeeds[0], 0.025f, 1));
        seeds.Add(new Seed("3", gameManager.baseSeeds[2], 0.05f, 1));
        seeds.Add(new Seed("4", gameManager.baseSeeds[1], 0.05f, 1));

        getTerrains();
    }


    void getTerrains() 
    {
        // Default free terrains
        terrains = new List<Terrain>();
        terrains.Add(new Terrain(1, 8, 12, TerrainType.grassLeftCornerSoil, TerrainState.wild));
        terrains.Add(new Terrain(1, 12, 12, TerrainType.grassRightCornerSoil, TerrainState.wild));
        terrains.Add(new Terrain(1, 9, 12, TerrainType.grassTopSoil, TerrainState.wild));
        terrains.Add(new Terrain(1, 10, 12, TerrainType.grassTopSoil, TerrainState.wild));
        terrains.Add(new Terrain(1, 11, 12, TerrainType.grassTopSoil, TerrainState.wild));

        // Available Ones
        terrains.Add(new Terrain(1, 9, 11, TerrainType.soil, TerrainState.empty));
        terrains.Add(new Terrain(1, 10, 11, TerrainType.soil, TerrainState.empty));
        terrains.Add(new Terrain(1, 11, 11, TerrainType.soil, TerrainState.empty));
        terrains.Add(new Terrain(1, 9, 10, TerrainType.soil, TerrainState.empty));
        terrains.Add(new Terrain(1, 10, 10, TerrainType.soil, TerrainState.empty));
        terrains.Add(new Terrain(1, 11, 10, TerrainType.soil, TerrainState.empty));
        terrains.Add(new Terrain(1, 9, 9, TerrainType.soilBottom, TerrainState.empty));
        terrains.Add(new Terrain(1, 10, 9, TerrainType.soilBottom, TerrainState.empty));
        terrains.Add(new Terrain(1, 11, 9, TerrainType.soilBottom, TerrainState.empty));

        terrains.Add(new Terrain(1, 8, 9, TerrainType.grassLeftSideSoil, TerrainState.wild));
        terrains.Add(new Terrain(1, 12, 9, TerrainType.grassRightSideSoil, TerrainState.wild));
        terrains.Add(new Terrain(1, 8, 11, TerrainType.grassLeftCountinuousSideSoil, TerrainState.wild));
        terrains.Add(new Terrain(1, 12, 11, TerrainType.grassRighCountinuoustSideSoil, TerrainState.wild));
        terrains.Add(new Terrain(1, 8, 10, TerrainType.grassLeftCountinuousSideSoil, TerrainState.wild));
        terrains.Add(new Terrain(1, 12, 10, TerrainType.grassRighCountinuoustSideSoil, TerrainState.wild));

    }

}
