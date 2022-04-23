using LootLocker.Requests;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LootLockerHelper : MonoBehaviour
{
    #region Terrains

    /*
        Get All Terrains from Player Inventory, returning a list with the placed ones and the amount of the remaining
     */
    public static void GetTerrains(Action<List<Terrain>> callback)
    {
        LootLockerSDKManager.GetInventory((response) =>
        {
            if (response.success)
            {
                List<Terrain> terrains = new List<Terrain>(); 

                // Get Terrains
                foreach (var item in response.inventory)
                {
                    if (item.asset.name == "Terrain") 
                    {
                        terrains.Add(new Terrain(item.instance_id));
                    }
                }

                // Get Terrain Properties
                int count = 0;
                foreach (Terrain terrain in terrains)
                {
                    GetTerrainProperties(terrain.id, (x, y, content) => {
                        count++;

                        terrain.x = (x != "null") ? int.Parse(x) : null;
                        terrain.y = (y != "null") ? int.Parse(y) : null;
                        terrain.content = content;

                        // Return after the last one
                        if (count == terrains.Count)
                        {
                            callback(terrains);
                        }
                    });
                }

            }
            else
            {
                Debug.Log("ERROR " + response.Error);
            }
        });
    }


    private static void GetTerrainProperties(int id, Action<string, string, string> callback)
    {
        LootLockerSDKManager.GetAllKeyValuePairsToAnInstance(id, (response) =>
        {
            if (response.success)
            {
                if (response.storage.Length > 0)
                {
                    Debug.Log("Successfully retrieved " + response.storage.Length + " key value pairs");

                    string x = "null", y = "null", content = "null";

                    foreach (var item in response.storage)
                    {

                        if (item.key == "x")
                            x = item.value;

                        if (item.key == "y")
                            y = item.value;

                        if (item.key == "content")
                            content = item.value;
                    }

                    x = (x == null || x == "") ? "null" : x;
                    y = (y == null || y == "") ? "null" : y;
                    content = (content == null || content == "") ? "null" : content;

                    callback(x, y, content);
                }
                else
                {
                    Debug.Log("No key value pairs for asset instance");
                }
            }
            else
            {
                Debug.Log("Error retrieving assets");
            }
        });
    }


    public static void AddTerrain(string coins)
    {
        LootLockerSDKManager.TriggeringAnEvent("getTerrain", (response) =>
        {
            if (response.success)
            {
                Debug.Log("Successfully triggered event");
                WaitForTerrainReward();

                // TODO Remove coins from wallet not from game 
                //updateGameCoins(coins);
            }
            else
            {
                Debug.Log("Error triggering event");
            }
        });
    }


    private static void WaitForTerrainReward()
    {
        LootLockerSDKManager.GetAssetNotification((response) =>
        {
            if (response.success && response.objects != null)
            {
                var item = response.objects[0];
                SetAllTerrainKeyPairValues(item.instance_id);
            }
        });
    }


    private static void SetAllTerrainKeyPairValues(int id)
    {
        LootLockerSDKManager.CreateKeyValuePairForAssetInstances(id, "x", "null", (response) =>
        {
            if (response.success)
            {
                LootLockerSDKManager.CreateKeyValuePairForAssetInstances(id, "y", "null", (response) =>
                {
                    if (response.success)
                    {
                        LootLockerSDKManager.CreateKeyValuePairForAssetInstances(id, "content", "null", (response) =>
                        {
                            if (response.success)
                            {
                                Debug.Log("All Terrain Keys have been created");
                            }
                        });
                    }
                });
            }
        });
    }


    public static void UpdateTerrainList(List<Terrain> terrains, Action onComplete)
    {
        int count = 0;
        foreach (Terrain terrain in terrains)
        {

            Dictionary<string, string> newStates = new Dictionary<string, string>();
            newStates.Add("x", terrain.x.ToString());
            newStates.Add("y", terrain.y.ToString());
            newStates.Add("content", terrain.content);
            

            LootLockerSDKManager.UpdateOneOrMoreKeyValuePairForAssetInstances(terrain.id, newStates, (response) =>
            {
                if (response.success)
                {
                   Debug.Log("Terrain Successfully updated key value in " + terrain.id + " with "+ terrain.x + " | "+ terrain.y + " | "+ terrain.content);
                }
                else
                {
                    Debug.Log("Error updating key value pairs");
                }

                count++;
                if (count == terrains.Count)
                    onComplete();

            });
        }
    }

    #endregion

    #region Seeds

    /*
        Get All Terrains from Player Inventory, returning a list with the placed ones and the amount of the remaining
     */
    public static void GetSeeds(Action<List<Seed>> callback)
    {
        LootLockerSDKManager.GetInventory((response) =>
        {
            if (response.success)
            {
                List<Seed> seeds = new List<Seed>();
                foreach (var item in response.inventory)
                {

                    if (item.asset.context == "Feature Unlocks") 
                    {

                        int instanceId = item.instance_id;
                        BaseSeed baseSeed = null;
                        string value = "";

                        foreach (var storageItem in item.asset.storage)
                        {
                            if (storageItem.key == "value")
                                value = storageItem.value;
                        }

                        BaseSeed[] baseSeeds = (SceneManager.GetActiveScene().name == "MainScene") ? GameObject.FindObjectOfType<GameManager>().baseSeeds : GameObject.FindObjectOfType<BuildSceneManager>().baseSeeds;

                        foreach (var _baseSeed in baseSeeds)
                        {
                            if (_baseSeed.id == item.asset.id)
                            {
                                baseSeed = _baseSeed;
                                break;
                            }
                        }

                        seeds.Add(new Seed(instanceId, baseSeed, baseSeed.value, 0)); // <---------- TO DO
                    }

                    //});

                    // value vem de asset storage, state nao sei
                    // level, xp, maxXp vem de player instance variables
                    // growthSpeed, progress nao contar pra ja

                    /*
                        public int level;
                        public int xp;
                        public int maxXp;
                        public float growthSpeed;
                        public float growthProgress;
                        
                        // ROM
                        public int instanceId;
                        public BaseSeed baseSeed;
                        public float value;
                        private string _state;
                     */


                }

                callback(seeds);
            }
        });
    }


    private static void GetSeedProgressProperties(int id, Action<string, string, string> callback)
    {
        LootLockerSDKManager.GetAllKeyValuePairsToAnInstance(id, (response) =>
        {
            if (response.success)
            {
                if (response.storage.Length > 0)
                {
                    Debug.Log("Successfully retrieved " + response.storage.Length + " key value pairs");

                    string xp = "null", maxXp = "null", level = "null";

                    foreach (var item in response.storage)
                    {
                        if (item.key == "xp")
                            xp = item.value;

                        if (item.key == "maxXp")
                            maxXp = item.value;

                        if (item.key == "level")
                            level = item.value;
                    }

                    callback(xp, maxXp, level);
                }
                else
                {
                    Debug.Log("No key value pairs for asset instance");
                }
            }
            else
            {
                Debug.Log("Error retrieving assets");
            }
        });
    }


    public static void UpdateSeed(Seed seed)
    {

        Dictionary<string, string> newState = new Dictionary<string, string>();
        newState.Add("xp", seed.xp.ToString());
        newState.Add("maxXp", seed.maxXp.ToString());
        newState.Add("level", seed.level.ToString());

        LootLockerSDKManager.UpdateOneOrMoreKeyValuePairForAssetInstances(seed.instanceId, newState, (response) =>
        {
            if (response.success)
            {
                Debug.Log("Successfully updated key value in " + seed.instanceId);
            }
            else
            {
                Debug.Log("Error updating key value pairs");
            }
        });
    }


    public static void UpdateSeedList(List<Seed> seeds, Action onComplete)
    {
        int count = 0;
        foreach (Seed seed in seeds)
        {
            Dictionary<string, string> newState = new Dictionary<string, string>();
            newState.Add("xp", seed.xp.ToString());
            newState.Add("maxXp", seed.maxXp.ToString());
            newState.Add("level", seed.level.ToString());

            LootLockerSDKManager.UpdateOneOrMoreKeyValuePairForAssetInstances(seed.instanceId, newState, (response) =>
            {
                if (response.success)
                {
                    Debug.Log("Successfully updated key value in " + seed.instanceId);
                }
                else
                {
                    Debug.Log("Error updating key value pairs");
                }

                count++;
                if (count == seeds.Count)
                    onComplete();

            });
        }
    }


    private static void SetAllSeedKeyPairValues(int id, Action callback)
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


    #endregion

    #region Packs

    public static void GetPacks(Action<int> callback)
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


    public static void AddPack(string coins)
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


    public static void OpenPack(Action<LootLockerRewardObject> callback)
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


    private static void GetPackInstanceID(Action<int> callback)
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


    private static void GetPackReward(Action<LootLockerRewardObject> callback)
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

    #endregion

    #region Player Storage

    public static void GetGameCoins(Action<float> callback)
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


    public static void UpdateGameCoins(string value)
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

    #endregion
}
