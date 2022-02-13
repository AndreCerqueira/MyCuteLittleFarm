using System.Collections;
using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
    // Menus
    GameObject menuShop;
    GameObject menuInventory;
    GameObject menuMyFarm;

    // Windows
    GameObject windowOpenPack;
    GameObject windowPurchaceConfirmation;
    bool packOpened;

    // Other Objects
    public BaseSeed[] baseSeeds;
    GameObject seedListView;
    WorldGenerator worldGenerator;
    Text coinsWalletText;
    Text coinsGameText;

    // Prefabs
    [SerializeField] GameObject seedRowPrefab;
    [SerializeField] GameObject plantPrefab;

    // User variables
    public User user;
    bool plantMode;

    public float gameCoins
    {
        get
        {
            return user.gameCoins;
        }
        set
        {
            user.gameCoins = value;
            coinsGameText.text = user.gameCoins.ToString();
            //Debug.Log(user.gameCoins * Math.Pow(10, 19));
        }
    }

    public float walletCoins
    {
        get
        {
            return user.walletCoins;
        }
        set
        {
            user.walletCoins = value;
            coinsWalletText.text = user.walletCoins.ToString();
        }
    }

    public void addCoin(float amount)
    {
        gameCoins += amount;
    }

    // Start is called before the first frame update
    void Awake()
    {

        user = new User("111111");

        if (SceneManager.GetActiveScene().name == "MainScene")
        {
            menuShop = GameObject.Find("Canvas/ShopMenu");
            menuInventory = GameObject.Find("Canvas/InventoryMenu");
            menuMyFarm = GameObject.Find("Canvas/MyFarmMenu");
            windowOpenPack = GameObject.Find("Canvas/OpenPackWindow");
            windowPurchaceConfirmation = GameObject.Find("Canvas/PurchaceConfirmation");
            seedListView = GameObject.Find("Canvas/MyFarmMenu/Scroll View/Viewport/Content");

            coinsGameText = GameObject.Find("Canvas/InventoryMenu/Balance In Game/Text").GetComponent<Text>();
            coinsGameText.text = gameCoins.ToString();

            worldGenerator = GetComponent<WorldGenerator>();

            loadSeedRows();
        }

        coinsWalletText = GameObject.Find("Canvas/BalanceCounter/Text").GetComponent<Text>();
        coinsWalletText.text = user.walletCoins.ToString();
    }

    void Update()
    {
        if (plantMode)
        {
            if (Input.GetMouseButtonDown(0) && !EventSystem.current.IsPointerOverGameObject())
            {

                // Get selected tile
                Vector3 mouseWorldPos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
                Vector3Int coords = worldGenerator.tileMap.WorldToCell(mouseWorldPos);
                Terrain selectedTile = worldGenerator.map[coords.x, coords.y];

                if (selectedTile.state == TerrainState.empty)
                {
                    // Get coords
                    Vector3Int pos = new Vector3Int(coords.x, coords.y, 0);
                    Vector3 finalPos = worldGenerator.tileMap.GetCellCenterWorld(pos);
                    finalPos.y += 0.5f;

                    // Create plant
                    GameObject temp = Instantiate(plantPrefab, finalPos, Quaternion.identity);
                    temp.GetComponent<Plant>().row = lastRowSeedSelected.GetComponent<SeedRow>();
                    temp.GetComponent<SpriteRenderer>().sortingOrder = coords.y * -1;
                    temp.transform.parent = GameObject.Find("Plants").transform;

                    // Change row
                    lastRowSeedSelected.GetComponent<SeedRow>().seed.planted = true;
                    lastRowSeedSelected.transform.Find("Plant Button").GetComponent<Image>().enabled = false;
                    lastRowSeedSelected.transform.Find("Remove Button").GetComponent<Image>().enabled = true;
                }
                resetCursor();
            }
        }
    }


    public void loadSeedRows()
    {
        foreach (Seed seed in user.seeds) 
        { 

            // Create row
            GameObject row = Instantiate(seedRowPrefab, new Vector3(0, 0, 0), Quaternion.identity);
            row.GetComponent<SeedRow>().seed = seed;
            row.GetComponent<SeedRow>().setData();

            // Place row
            row.transform.parent = seedListView.transform;
            row.transform.localScale = new Vector3(1, 1, 1);

        }
    }


    // Open / Close Menus
    #region Manage Menus

    public void openShopButton() 
    {
        StartCoroutine(Utils.DoFadeIn(menuShop.GetComponent<CanvasGroup>()));
    }

    public void closeShopButton() 
    {
        StartCoroutine(Utils.DoFadeOut(menuShop.GetComponent<CanvasGroup>()));
    }

    public void openInventoryButton() 
    {
        StartCoroutine(Utils.DoFadeIn(menuInventory.GetComponent<CanvasGroup>()));
    }

    public void closeInventoryButton() 
    {
        StartCoroutine(Utils.DoFadeOut(menuInventory.GetComponent<CanvasGroup>()));
    }

    public void openMyFarmButton() 
    {
        StartCoroutine(Utils.DoFadeIn(menuMyFarm.GetComponent<CanvasGroup>()));
    }

    public void closeMyFarmButton() 
    {
        StartCoroutine(Utils.DoFadeOut(menuMyFarm.GetComponent<CanvasGroup>()));
    }

    #endregion


    // Open / Close Windows
    #region Manage Windows

    public void openPurchaceConfirmationWindow()
    {
        StartCoroutine(Utils.DoFadeIn(windowPurchaceConfirmation.GetComponent<CanvasGroup>()));
    }

    public void closePurchaceConfirmationWindow()
    {
        StartCoroutine(Utils.DoFadeOut(windowPurchaceConfirmation.GetComponent<CanvasGroup>()));
    }

    public void openOpenPackWindow() 
    {
        // Confirmation
        //openPurchaceConfirmationWindow();

        StartCoroutine(Utils.DoFadeIn(windowOpenPack.GetComponent<CanvasGroup>()));
    }

    public void openManageFarmScene()
    {
        SceneManager.LoadScene("ManageFarmScene");
    }

    public void openMainScene()
    {
        SceneManager.LoadScene("MainScene");
    }

    public void closeOpenPackWindow() 
    {
        if (packOpened) {
            StartCoroutine(Utils.DoFadeOut(windowOpenPack.GetComponent<CanvasGroup>()));
            packOpened = false;
            lastPackOpened.GetComponent<Animator>().SetTrigger("reset");
            Image image = lastPackOpened.transform.Find("Image").GetComponent<Image>();
            image.enabled = false;
        }
    }

    #endregion


    // Other Functionalities

    GameObject lastPackOpened;
    public void openPack(GameObject obj) 
    {
        if (!packOpened) {
            obj.GetComponent<Animator>().SetTrigger("play");
            lastPackOpened = obj;
            packOpened = true;
        }
        else {
            closeOpenPackWindow();
        }
    }


    GameObject lastRowSeedSelected;
    public void plantSeed(GameObject obj)
    {

        closeMyFarmButton();

        lastRowSeedSelected = obj;

        Sprite sprite = obj.transform.Find("Seed Icon").GetComponent<Image>().sprite;
        Texture2D texture2D = Utils.textureFromSprite(sprite);

        Cursor.SetCursor(texture2D, Vector2.zero, CursorMode.ForceSoftware);
        plantMode = true;
    }



    public void resetCursor()
    {
        Cursor.SetCursor(null, Vector2.zero, CursorMode.Auto);
        plantMode = false;
    }

    public void digSeed(GameObject obj)
    {

        // Remove plant from the game
        string id = obj.GetComponent<SeedRow>().seed.id;
        foreach (Transform child in GameObject.Find("Plants").transform) 
        {
            Plant plant = child.GetComponent<Plant>();
            if (plant.row.seed.id == id) 
            {
                // Remove
                Destroy(child.gameObject);

                obj.GetComponent<SeedRow>().seed.planted = false;
                obj.transform.Find("Plant Button").GetComponent<Image>().enabled = true;
                obj.transform.Find("Remove Button").GetComponent<Image>().enabled = false;

                break;
            }
        }

    }


}
