using LootLocker.Requests;
using Newtonsoft.Json;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Seed
{
    // RAM
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

    public string state
    {
        get
        {
            return _state;
        }
        set
        {

            Dictionary<string, string> newState = new Dictionary<string, string>();
            newState.Add("state", value);

            LootLockerSDKManager.UpdateOneOrMoreKeyValuePairForAssetInstances(instanceId, newState, (response) =>
            {
                if (response.success)
                {
                    Debug.Log("Successfully updated key value in " + instanceId);
                }
                else
                {
                    Debug.Log("Error updating key value pairs");
                }
            });

            _state = value;
        }
    }

    public string name
    {
        get
        {
            return baseSeed.name;
        }
    }

    public Sprite image
    {
        get
        {
            return baseSeed.image;
        }
    }

    public Rarity rarity
    {
        get
        {
            return baseSeed.rarity;
        }
    }

    public Sprite[] animation
    {
        get
        {
            return baseSeed.animation;
        }
    }

    public Seed()
    {

    }

    public Seed(int _id, BaseSeed _baseSeed, float _value, float _growthSpeed)
    {
        instanceId = _id;
        baseSeed = _baseSeed;
        value = _value;

        //animation = _animation;
        value = _value;

        level = 1;
        xp = 0;
        maxXp = 100;//Utils.getMaxXP(level, rarity);
        growthSpeed = _growthSpeed;
        growthProgress = 0f;
    }


    public void GetProgressFromLootLocker(Action<int, int> callback)
    {
        LootLockerSDKManager.GetAllKeyValuePairsToAnInstance(instanceId, (response) =>
        {
            if (response.success && response.storage.Length > 0)
            {
                foreach (var item in response.storage)
                {
                    switch (item.key)
                    {
                        case "xp":
                            xp = int.Parse(item.value);
                            break;

                        case "level":
                            level = int.Parse(item.value);
                            break;

                        default:
                            break;
                    }

                    callback(xp, level);
                }
            }
        });
    }


    public void SetProgressIntoLootLocker()
    {
        Dictionary<string, string> multipleTestKeys = new Dictionary<string, string>();

        multipleTestKeys.Add("xp", xp.ToString());
        multipleTestKeys.Add("level", level.ToString());
        LootLockerSDKManager.UpdateOneOrMoreKeyValuePairForAssetInstances(instanceId, multipleTestKeys, (response) =>
        {
            if (response.success)
            {
                Debug.Log("Successfully updated key value pairs");
            }
            else
            {
                Debug.Log("Error updating key value pairs");
            }
        });
    }


    public void levelUp()
    {
        xp = 0;
        level++;
        float newMaxXp = maxXp * 1.5f;
        maxXp = (int)newMaxXp;
        growthSpeed += 1;

        LootLockerHelper.UpdateSeed(this);
    }

}

