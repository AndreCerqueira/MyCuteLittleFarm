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
    public Inventory inventory;
    public GameManager gameManager;
    public List<Terrain> terrains;

    public User ()
    {

        GetTerrains();

        if (SceneManager.GetActiveScene().name == "MainScene")
            gameManager = GameObject.FindObjectOfType<GameManager>();

        id = "";

    }


    public void LoadUserData()
    {
        GetInventory();
        GetUserDbData();
    }


    private void GetInventory()
    {
        inventory = new Inventory();
    }


    private void GetUserDbData()
    {
        inventory.GetGameCoins((coins) => {
            gameManager.inGameCoins = coins;
        });

        inventory.GetPacks((packs) => {
            gameManager.inGamePacks = packs;
        });

        walletCoins = 0f;
    }


    void GetTerrains() 
    {
        // Default free terrains
        
        terrains = new List<Terrain>();

        // Available Ones
        terrains.Add(new Terrain("1", 9, 11));
        terrains.Add(new Terrain("2", 10, 11));
        terrains.Add(new Terrain("3", 11, 11));
        terrains.Add(new Terrain("4", 9, 10));
        terrains.Add(new Terrain("5", 10, 10));
        terrains.Add(new Terrain("6", 11, 10));
        terrains.Add(new Terrain("7", 9, 9));
        terrains.Add(new Terrain("8", 10, 9));
        terrains.Add(new Terrain("9", 11, 9));

    }

}
