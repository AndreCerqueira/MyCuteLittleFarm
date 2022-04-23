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
    // Variables
    public User user;
    public BaseSeed[] baseSeeds;
    protected GridController gridController;
    [SerializeField] protected GameObject seedListView;
    [SerializeField] protected List<SeedDisplay> seedDisplays;

    protected virtual void Awake()
    {
        user = new User();

        gridController = FindObjectOfType<GridController>();

    }


    protected void CreateSeedDisplay(GameObject prefab)
    {

        // Create all seed slots
        foreach (Seed seed in user.seeds)
        {
            GameObject row = Instantiate(prefab, new Vector3(0, 0, 0), Quaternion.identity);
            row.GetComponent<SeedDisplay>().seed = seed;
            row.GetComponent<SeedDisplay>().SetData();
            row.transform.SetParent(seedListView.transform);
            row.transform.localScale = new Vector3(1, 1, 1);
            seedDisplays.Add(row.GetComponent<SeedDisplay>());
        }

    }


    protected void CreatePlants()
    {
        foreach (Terrain terrain in user.terrainsUsed)
        {
            if (terrain.HasContent())
            {
                int content = int.Parse(terrain.content);
                SeedDisplay slot = Utils.GetSeedDisplayInTerrain(content, seedDisplays);
                gridController.SetPlant(terrain.GetPosition(), slot);
            }

        }
    }


    protected void WaitForUserCreated(Action onComplete) => StartCoroutine(_WaitForUserCreated(onComplete));
    IEnumerator _WaitForUserCreated(Action onComplete)
    {
        while (user.loading)
            yield return new WaitForFixedUpdate();

        onComplete();
    }

}
