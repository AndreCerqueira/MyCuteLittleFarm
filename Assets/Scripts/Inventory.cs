using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using LootLocker.Requests;
using System;
using UnityEngine.Networking;

public class Inventory
{
    GameManager gameManager;

    public Inventory()
    {
        gameManager = GameObject.FindObjectOfType<GameManager>();

        GetInventory();
        GetGameCoins((coins) => {
            Debug.Log("coins " + coins);
        });

        GetPacks((packs) => {
            Debug.Log("packs " + packs);
        });
    }


    public void GetInventory()
    {
        LootLockerSDKManager.GetInventory((response) =>
        {
            if (response.success)
            {
                gameManager.DisplayInventory(response.inventory);
            }
        });
    }


    public void GetGameCoins(Action<float> callback)
    {
        LootLockerSDKManager.GetSingleKeyPersistentStorage("coins", (response) =>
        {
            if (response.success)
            {
                if (response.payload != null)
                {
                    Debug.Log("Successfully retrieved player storage with value: " + response.payload.value);
                    callback(float.Parse(response.payload.value));
                }
                else
                {
                    Debug.Log("Item with key coins does not exist");
                }
            }
            else
            {
                Debug.Log("Error getting player storage");
            }
        });
    }


    public void UpdateGameCoins(string value)
    {
        LootLockerSDKManager.UpdateOrCreateKeyValue("coins", value, (getPersistentStoragResponse) =>
        {
            if (getPersistentStoragResponse.success)
            {
                Debug.Log("Successfully updated player storage");
            }
            else
            {
                Debug.Log("Error updating player storage");
            }
        });
    }


    public void GetPacks(Action<int> callback)
    {
        LootLockerSDKManager.GetInventory((response) =>
        {
            if (response.success)
            {
                int quantity = 0;
                foreach (var item in response.inventory)
                {
                    if (item.asset.name == "Pack")
                        quantity++;
                }

                callback(quantity);
            }
        });
    }


    public void AddPack(string coins)
    {
        LootLockerSDKManager.TriggeringAnEvent("getPack", (response) =>
        {
            if (response.success)
            {
                Debug.Log("Successfully triggered event");

                // TODO Remove coins from wallet not from game 
                //updateGameCoins(coins);
            }
            else
            {
                Debug.Log("Error triggering event");
            }
        });
    }


    public void OpenPack(Action<LootLockerRewardObject> callback)
    {
        GetPackInstanceID((id) => {
            LootLockerSDKManager.OpenALootBoxForAssetInstances(id, (response) =>
            {
                if (response.success)
                {
                    GetPackReward((reward) => {
                        callback(reward);
                    });
                }
                else
                {
                    Debug.Log("Error opening Loot box");
                }
            });
        });
    }


    private void GetPackInstanceID(Action<int> callback)
    {
        LootLockerSDKManager.GetInventory((response) =>
        {
            if (response.success)
            {
                int id = -1;
                foreach (var item in response.inventory)
                {
                    if (item.asset.name == "Pack")
                        id = item.instance_id;
                }

                callback(id);
            }
        });
    }


    private void GetPackReward(Action<LootLockerRewardObject> callback)
    {
        LootLockerSDKManager.GetAssetNotification((response) =>
        {
            if (response.success && response.objects != null)
            {
                var item = response.objects[0];
                SetAllSeedKeyPairValues(item.instance_id, () =>
                {
                    callback(item);
                });
            }
        });
    }


    private void SetAllSeedKeyPairValues(int id, Action callback)
    {
        LootLockerSDKManager.CreateKeyValuePairForAssetInstances(id, "state", "stored", (response) =>
        {
            if (response.success)
            {
                LootLockerSDKManager.CreateKeyValuePairForAssetInstances(id, "xp", "0", (response) =>
                {
                    if (response.success)
                    {
                        LootLockerSDKManager.CreateKeyValuePairForAssetInstances(id, "level", "1", (response) =>
                        {
                            if (response.success)
                            {
                                callback();
                            }
                        });
                    }
                });
            }
        });
    }


}
