using System.Collections;
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
    bool packOpened;

    // Other Objects
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

    // Cursors
    public Texture2D plantCursor;

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
        }
    }

    public void addCoin(int amount)
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
        if (Input.GetMouseButtonDown(0) && !EventSystem.current.IsPointerOverGameObject())
        {
            if (plantMode) {

                // Get selected tile
                Vector3 mouseWorldPos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
                Vector3Int coords = worldGenerator.tileMap.WorldToCell(mouseWorldPos);
                Terrain selectedTile = worldGenerator.map[coords.x, coords.y];

                if (selectedTile.state == TerrainState.empty)
                {

                    Vector3Int pos = new Vector3Int(coords.x, coords.y, 0);
                    Vector3 finalPos = worldGenerator.tileMap.GetCellCenterWorld(pos);
                    finalPos.y += 0.5f;

                    GameObject temp = Instantiate(plantPrefab, finalPos, Quaternion.identity);
                    temp.GetComponent<Plant>().seed = lastRowSeedSelected.GetComponent<SeedRow>().seed;
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
        foreach (Seed seed in user.seeds) { 

            GameObject row = Instantiate(seedRowPrefab, new Vector3(0, 0, 0), Quaternion.identity);

            // Costumize row
            row.transform.Find("level").GetComponent<Text>().text = "LVL " + seed.level + " - (" + seed.xp + "/100)";
            row.transform.Find("Experience Bar").GetComponent<Slider>().value = (seed.xp / 100);
            row.transform.Find("Speed/text").GetComponent<Text>().text = seed.growthSpeed.ToString();
            row.transform.Find("Value/text").GetComponent<Text>().text = seed.value.ToString();

            row.GetComponent<SeedRow>().seed = seed;

            // Place row
            row.transform.parent = seedListView.transform;
            row.transform.localScale = new Vector3(1, 1, 1);

        }
    }


    // Open / Close Menus
    #region Manage Menus

    public void openShopButton() 
    {
        StartCoroutine(DoFadeIn(menuShop.GetComponent<CanvasGroup>()));
    }

    public void closeShopButton() 
    {
        StartCoroutine(DoFadeOut(menuShop.GetComponent<CanvasGroup>()));
    }

    public void openInventoryButton() 
    {
        StartCoroutine(DoFadeIn(menuInventory.GetComponent<CanvasGroup>()));
    }

    public void closeInventoryButton() 
    {
        StartCoroutine(DoFadeOut(menuInventory.GetComponent<CanvasGroup>()));
    }

    public void openMyFarmButton() 
    {
        StartCoroutine(DoFadeIn(menuMyFarm.GetComponent<CanvasGroup>()));
    }

    public void closeMyFarmButton() 
    {
        StartCoroutine(DoFadeOut(menuMyFarm.GetComponent<CanvasGroup>()));
    }

    #endregion


    // Open / Close Windows
    #region Manage Windows

    public void openOpenPackWindow() 
    {

        // Verify pack quantity
        StartCoroutine(DoFadeIn(windowOpenPack.GetComponent<CanvasGroup>()));
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
            StartCoroutine(DoFadeOut(windowOpenPack.GetComponent<CanvasGroup>()));
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

        Cursor.SetCursor(plantCursor, Vector2.zero, CursorMode.ForceSoftware);
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
            if (plant.seed.id == id) 
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

    #region Effects

    static public IEnumerator DoFadeOut(CanvasGroup canvasG)
    {
        while (canvasG.alpha > 0) {
            canvasG.alpha -= Time.deltaTime * 2;
            yield return null;
        }

        canvasG.interactable = false;
        canvasG.blocksRaycasts = false;
    }

    static public IEnumerator DoFadeIn(CanvasGroup canvasG)
    {
        canvasG.interactable = true;
        canvasG.blocksRaycasts = true;

        while (canvasG.alpha < 1) {
            canvasG.alpha += Time.deltaTime * 2;
            yield return null;
        }
    }

    #endregion
}
