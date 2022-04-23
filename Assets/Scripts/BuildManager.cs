using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.SceneManagement;
using System;
using LootLocker.Requests;

public class BuildManager : MonoBehaviour
{
    // Variables
    public User user;
    public BaseSeed[] baseSeeds;
    [SerializeField] private GameObject seedSlotPrefab;
    [SerializeField] private GameObject seedListView;
    [SerializeField] private List<SeedDisplay> seedSlots;

    // Drop Down Player Actions Variables
    GameObject selectedOption;
    [SerializeField] GameObject cursorDropDownList;
    [SerializeField] GameObject mouseCursorOption;
    [SerializeField] GameObject removeCursorOption;
    [SerializeField] GameObject plowCursorOption;
    new CameraController camera;
    GridController gridController;

    // Other UI Variables
    [SerializeField] TextMeshProUGUI terrainCounter;

    // Start is called before the first frame update
    void Awake()
    {
        user = new User();

        selectedOption = mouseCursorOption;
        camera = FindObjectOfType<CameraController>();
        gridController = FindObjectOfType<GridController>();

        user.terrainsAvailable = new List<Terrain>();
        terrainCounter.text = user.terrainsAvailable.Count.ToString();

        WaitForUserCreated(() => {
            CreateSeedSlots();
            CreatePlants();
        });

    }


    private void CreatePlants()            
    {
        foreach (Terrain terrain in user.terrainsUsed)
        {
            if (terrain.HasContent())
            {
                int content = int.Parse(terrain.content);
                SeedDisplay slot = Utils.GetSeedDisplayInTerrain(content, seedSlots);
                gridController.SetPlant(terrain.GetPosition(), slot);
            }

        }
    }


    private void CreateSeedSlots()
    {

        // Create all seed slots
        foreach (Seed seed in user.seeds)
        {
            GameObject row = Instantiate(seedSlotPrefab, new Vector3(0, 0, 0), Quaternion.identity);
            row.GetComponent<SeedSlot>().seed = seed;
            row.GetComponent<SeedSlot>().SetData();
            row.transform.SetParent(seedListView.transform);
            row.transform.localScale = new Vector3(1, 1, 1);
            seedSlots.Add(row.GetComponent<SeedSlot>());
        }

    }


    public void WaitForUserCreated(Action onComplete) => StartCoroutine(_WaitForUserCreated(onComplete));
    IEnumerator _WaitForUserCreated(Action onComplete)
    {
        while (user.loading)
            yield return new WaitForFixedUpdate();

        onComplete();
    }

    
    public void SetTerrain(Terrain terrain)
    {
        user.terrainsAvailable.Remove(terrain);

        user.terrainsUsed.Add(terrain);
        terrainCounter.text = user.terrainsAvailable.Count.ToString();
    }

    public void SetTerrain(Terrain terrain, Vector3Int newPosition)
    {
        user.terrainsAvailable.Remove(terrain);
        user.terrainsUsed.Add(terrain);
        terrain.UpdatePosition(newPosition.x, newPosition.y);
        terrainCounter.text = user.terrainsAvailable.Count.ToString();
    }


    public void RemoveTerrain(Terrain terrain)
    {
        user.terrainsAvailable.Add(terrain);
        terrain.UpdatePosition(null, null);
        terrainCounter.text = user.terrainsAvailable.Count.ToString();
    }


    #region UI Events

    public void OpenCursorOptionDropDown()
    {
        cursorDropDownList.SetActive(!cursorDropDownList.activeSelf);
    }

    public void MouseSelected()
    {
        cursorDropDownList.SetActive(false);
        ChangeCursorOption(selectedOption, mouseCursorOption);
        camera.action = PlayerAction.mouse;
        gridController.RemoveHoverTile();
    }

    public void RemoveSelected()
    {
        cursorDropDownList.SetActive(false);
        ChangeCursorOption(selectedOption, removeCursorOption);
        camera.action = PlayerAction.remove;
    }

    public void PlowSelected()
    {
        cursorDropDownList.SetActive(false);
        ChangeCursorOption(selectedOption, plowCursorOption);
        camera.action = PlayerAction.plow;
    }

    private void ChangeCursorOption(GameObject current, GameObject newCursor)
    {
        Vector3 temp = current.transform.position;
        Transform parentTemp = current.transform.parent;

        current.transform.position = newCursor.transform.position;
        newCursor.transform.position = temp;

        current.transform.parent = newCursor.transform.parent;
        newCursor.transform.parent = parentTemp;

        selectedOption = newCursor;
    }

    #endregion

    #region Button Events

    public void Cancel()
    {
        SceneManager.LoadScene("MainScene");
    }

    public void Save()
    {
        List<Terrain> allTerrains = user.terrainsUsed;
        allTerrains.AddRange(user.terrainsAvailable);

        LootLockerHelper.UpdateTerrainList(allTerrains, ()=> {
            SceneManager.LoadScene("BuildScene");
        });
    }

    public void RemoveAll()
    {
        user.terrainsAvailable.AddRange(user.terrainsUsed);
        terrainCounter.text = user.terrainsAvailable.Count.ToString();

        gridController.RemoveAllPlants();
        gridController.RemoveAllTiles();
    }

    #endregion

}
