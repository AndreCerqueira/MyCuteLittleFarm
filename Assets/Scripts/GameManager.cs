using System.Collections;
using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using LootLocker.Requests;
using UnityEngine.Networking;

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
    public WorldGenerator worldGenerator;
    public BaseSeed[] baseSeeds;
    Text coinsWalletText;
    Text coinsGameText;
    Text packsGameText;
    [SerializeField] Button openPackButton;
    [SerializeField] GameObject seedListView;
    [SerializeField] GameObject seedRowPrefab;

    // Prefabs
    [SerializeField] GameObject plantPrefab;

    // User variables
    public User user;
    bool plantMode;

    public int inGamePacks
    {
        get
        {
            return user.inGamePacks;
        }
        set
        {
            user.inGamePacks = value;
            packsGameText.text = user.inGamePacks.ToString();
            openPackButton.interactable = (inGamePacks != 0);

        }
    }

    public float inGameCoins
    {
        get
        {
            return user.inGameCoins;
        }
        set
        {
            user.inGameCoins = value;
            coinsGameText.text = user.inGameCoins.ToString();
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
        inGameCoins += amount;
        user.inventory.updateGameCoins(inGameCoins.ToString());
    }


    // Start is called before the first frame update
    void Awake()
    {

        if (SceneManager.GetActiveScene().name == "MainScene")
        {
            menuShop = GameObject.Find("Canvas/ShopMenu");
            menuInventory = GameObject.Find("Canvas/InventoryMenu");
            menuMyFarm = GameObject.Find("Canvas/MyFarmMenu");
            windowOpenPack = GameObject.Find("Canvas/OpenPackWindow");
            windowPurchaceConfirmation = GameObject.Find("Canvas/PurchaceConfirmation");
            coinsGameText = GameObject.Find("Canvas/InventoryMenu/Balance In Game/Text").GetComponent<Text>();
            packsGameText = GameObject.Find("Canvas/InventoryMenu/Packs  In Game/Background/Text").GetComponent<Text>();
            coinsWalletText = GameObject.Find("Canvas/BalanceCounter/Text").GetComponent<Text>();
            worldGenerator = GetComponent<WorldGenerator>();

            user = new User();

            getBalance();

        }

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
                    lastRowSeedSelected.transform.Find("Plant Button").GetComponent<Image>().enabled = false;
                    lastRowSeedSelected.transform.Find("Remove Button").GetComponent<Image>().enabled = true;

                    // Update States
                    lastRowSeedSelected.GetComponent<SeedRow>().seed.state = "{x:" + coords.x + ",y:" + coords.y + ",sOrder:" + coords.y * -1 + "}";
                    selectedTile.state = TerrainState.full;
                }
                resetCursor();
            }
        }
    }


    public void placePreviousPlantedSeeds(SeedRow selectedRow, int x, int y, int sortingOrder)
    {

        // Get selected tile
        Vector3Int coords = new Vector3Int(x, y, 0);
        Terrain selectedTile = worldGenerator.map[coords.x, coords.y];

        if (selectedTile.state == TerrainState.empty)
        {
            // Get coords
            Vector3Int pos = new Vector3Int(coords.x, coords.y, 0);
            Vector3 finalPos = worldGenerator.tileMap.GetCellCenterWorld(pos);
            finalPos.y += 0.5f;

            // Create plant
            GameObject temp = Instantiate(plantPrefab, finalPos, Quaternion.identity);
            temp.GetComponent<Plant>().row = selectedRow;
            temp.GetComponent<SpriteRenderer>().sortingOrder = sortingOrder;
            temp.transform.parent = GameObject.Find("Plants").transform;

            // Change row
            selectedRow.transform.Find("Plant Button").GetComponent<Image>().enabled = false;
            selectedRow.transform.Find("Remove Button").GetComponent<Image>().enabled = true;

            // Update States
            // lastRowSeedSelected.GetComponent<SeedRow>().seed.state = "";
            selectedTile.state = TerrainState.full;
        }
    }


    async void getBalance()
    {
        string balance = await Web3Manager.getBalance();
        walletCoins = float.Parse(balance);
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

    public void displayInventory(LootLockerInventory[] inventory)
    {
        foreach (LootLockerInventory item in inventory)
        {
            addSeedToInventory(item);
        }
    }


    private void addSeedToInventory(LootLockerInventory item)
    {
        Seed seed = getSeedFromAsset(item.asset, item.instance_id);

        if (seed != null)
            addRowToInventory(seed);
    }

    private void addSeedToInventory(LootLockerRewardObject item)
    {
        Seed seed = getSeedFromAsset(item.asset, item.instance_id);

        if (seed != null)
            addRowToInventory(seed);
    }


    private Seed getSeedFromAsset(LootLockerCommonAsset asset, int instanceId)
    {

        BaseSeed baseSeed = Utils.getBaseSeedById(asset.id);

        if (baseSeed == null)
            return null;

        float value = 1;
        float speed = 1;

        foreach (var data in asset.storage)
        {
            if (data.key == "speed")
                speed = float.Parse(data.value);

            if (data.key == "value")
                value = float.Parse(data.value);
        }

        Seed seed = new Seed(instanceId, baseSeed, value, speed);
        return seed;
    }


    private void addRowToInventory(Seed seed)
    {
        GameObject row = Instantiate(seedRowPrefab, new Vector3(0, 0, 0), Quaternion.identity);
        row.GetComponent<SeedRow>().seed = seed;
        row.GetComponent<SeedRow>().setData();
        row.transform.SetParent(seedListView.transform);
        row.transform.localScale = new Vector3(1, 1, 1);
    }


    public void buyPack(int price = 10)
    {
        Web3Manager.TransferERC20(()=> {

            user.inventory.addPack(inGameCoins.ToString());
            inGamePacks++;

        });
    }


    GameObject lastPackOpened;
    public void openPack(GameObject obj) 
    {

        if (!packOpened)
        {

            user.inventory.openPack((reward) => {

                obj.GetComponent<Animator>().SetTrigger("play");
                lastPackOpened = obj;
                packOpened = true;
                inGamePacks--;

                obj.GetComponent<Pack>().reward = Utils.getBaseSeedById(reward.asset.id);

                addSeedToInventory(reward);

            });

        }
        else
        {
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
        int id = obj.GetComponent<SeedRow>().seed.instanceId;
        foreach (Transform child in GameObject.Find("Plants").transform) 
        {
            Plant plant = child.GetComponent<Plant>();
            if (plant.row.seed.instanceId == id) 
            {
                // Remove
                Destroy(child.gameObject);

                obj.GetComponent<SeedRow>().seed.state = "stored";
                obj.transform.Find("Plant Button").GetComponent<Image>().enabled = true;
                obj.transform.Find("Remove Button").GetComponent<Image>().enabled = false;

                break;
            }
        }

    }


}
