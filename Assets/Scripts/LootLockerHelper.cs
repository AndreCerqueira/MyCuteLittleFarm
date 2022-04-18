using LootLocker.Requests;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LootLockerHelper : MonoBehaviour
{
    #region Terrains

    /*
        Get All Terrains from Player Inventory, returning a list with the placed ones and the amount of the remaining
     */
    public void GetTerrains(Action<List<Terrain>, int> callback)
    {
        LootLockerSDKManager.GetInventory((response) =>
        {
            if (response.success)
            {
                int storedTerrains = 0;
                List<Terrain> terrains = new List<Terrain>(); 
                foreach (var item in response.inventory)
                {
                    if (item.asset.name == "Terrain")
                        terrains.Add(new Terrain()); // <---------- TO DO
                }

                callback(terrains, storedTerrains);
            }
        });
    }


    public void AddTerrain()
    {
        LootLockerSDKManager.TriggeringAnEvent("getTerrain", (response) =>
        {
            if (response.success)
            {
                Debug.Log("Successfully triggered event");
            }
            else
            {
                Debug.Log("Error triggering event");
            }
        });
    }


    private void SetAllTerrainKeyPairValues(int id, Action callback)
    {
        LootLockerSDKManager.CreateKeyValuePairForAssetInstances(id, "x", "null", (response) =>
        {
            if (response.success)
            {
                LootLockerSDKManager.CreateKeyValuePairForAssetInstances(id, "y", "null", (response) =>
                {
                    if (response.success)
                    {
                        LootLockerSDKManager.CreateKeyValuePairForAssetInstances(id, "content", "1", (response) =>
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


    public void UpdateTerrainPosition(Terrain terrain)
    {
        Dictionary<string, string> newStates = new Dictionary<string, string>();
        newStates.Add("x", terrain.x.ToString());
        newStates.Add("y", terrain.y.ToString());

        LootLockerSDKManager.UpdateOneOrMoreKeyValuePairForAssetInstances(int.Parse(terrain.id), newStates, (response) =>
        {
            if (response.success)
            {
                Debug.Log("Successfully updated key value in " + terrain.id);
            }
            else
            {
                Debug.Log("Error updating key value pairs");
            }
        });
    }


    public void UpdateTerrainContent(Terrain terrain)
    {
        Dictionary<string, string> newStates = new Dictionary<string, string>();
        newStates.Add("content", terrain.content.ToString());

        LootLockerSDKManager.UpdateOneOrMoreKeyValuePairForAssetInstances(int.Parse(terrain.id), newStates, (response) =>
        {
            if (response.success)
            {
                Debug.Log("Successfully updated key value in " + terrain.id);
            }
            else
            {
                Debug.Log("Error updating key value pairs");
            }
        });
    }

    #endregion

    #region Seeds

    /*
        Get All Terrains from Player Inventory, returning a list with the placed ones and the amount of the remaining
     */
    public void GetSeeds(Action<List<Seed>> callback)
    {
        LootLockerSDKManager.GetInventory((response) =>
        {
            if (response.success)
            {
                List<Seed> seeds = new List<Seed>();
                foreach (var item in response.inventory)
                {
                    if (item.asset.context == "Feature Unlocks")
                        seeds.Add(new Seed()); // <---------- TO DO
                }

                callback(seeds);
            }
        });
    }


    public void UpdateSeed(Seed seed)
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

    #endregion

    #region Packs

    #endregion

    #region Player Storage

    #endregion
}
