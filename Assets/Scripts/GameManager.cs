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


    public void AddCoin(float amount)
    {
        inGameCoins += amount;
        user.inventory.UpdateGameCoins(inGameCoins.ToString());
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

            user = new User();

            GetBalance();

        }

    }


    async void GetBalance()
    {
        string balance = await Web3Manager.GetBalance();
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

    public void DisplayInventory(LootLockerInventory[] inventory)
    {
        foreach (LootLockerInventory item in inventory)
        {
            AddSeedToInventory(item);
        }
    }


    private void AddSeedToInventory(LootLockerInventory item)
    {
        Seed seed = GetSeedFromAsset(item.asset, item.instance_id);

        if (seed != null)
            AddRowToInventory(seed);
    }

    private void AddSeedToInventory(LootLockerRewardObject item)
    {
        Seed seed = GetSeedFromAsset(item.asset, item.instance_id);

        if (seed != null)
            AddRowToInventory(seed);
    }


    private Seed GetSeedFromAsset(LootLockerCommonAsset asset, int instanceId)
    {

        BaseSeed baseSeed = Utils.GetBaseSeedById(asset.id);

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


    private void AddRowToInventory(Seed seed)
    {
        GameObject row = Instantiate(seedRowPrefab, new Vector3(0, 0, 0), Quaternion.identity);
        row.GetComponent<SeedRow>().seed = seed;
        row.GetComponent<SeedRow>().SetData();
        row.transform.SetParent(seedListView.transform);
        row.transform.localScale = new Vector3(1, 1, 1);
    }


    public void BuyPack(int price = 10)
    {
        Web3Manager.TransferERC20(()=> {

            user.inventory.AddPack(inGameCoins.ToString());
            inGamePacks++;

        });
    }


    GameObject lastPackOpened;
    public void OpenPack(GameObject obj) 
    {

        if (!packOpened)
        {

            user.inventory.OpenPack((reward) => {

                obj.GetComponent<Animator>().SetTrigger("play");
                lastPackOpened = obj;
                packOpened = true;
                inGamePacks--;

                obj.GetComponent<Pack>().reward = Utils.GetBaseSeedById(reward.asset.id);

                AddSeedToInventory(reward);

            });

        }
        else
        {
            closeOpenPackWindow();
        }

    }


    public void OpenBuildScene()
    {
        SceneManager.LoadScene("BuildScene");
    }


}
