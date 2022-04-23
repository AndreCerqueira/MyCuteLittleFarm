using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.SceneManagement;
using System;
using LootLocker.Requests;

public class BuildSceneManager : GameManager
{
    // Variables
    [SerializeField] private GameObject seedSlotPrefab;

    // Drop Down Player Actions Variables
    GameObject selectedOption;
    [SerializeField] GameObject cursorDropDownList;
    [SerializeField] GameObject mouseCursorOption;
    [SerializeField] GameObject removeCursorOption;
    [SerializeField] GameObject plowCursorOption;
    new CameraController camera;

    // Other UI Variables
    [SerializeField] TextMeshProUGUI terrainCounter;

    // Start is called before the first frame update
    protected override void Awake()
    {
        base.Awake();

        selectedOption = mouseCursorOption;
        camera = FindObjectOfType<CameraController>();

        WaitForUserCreated(() => {
            CreateSeedDisplay(seedSlotPrefab);
            CreatePlants();
            UpdateTerrainCounter();
        });

    }


    public void SetTerrain(Terrain terrain)
    {
        user.terrainsUsed.Add(terrain);
        user.terrainsAvailable.Remove(terrain);

        UpdateTerrainCounter();
    }


    public void SetTerrain(Terrain terrain, Vector3Int newPosition)
    {
        user.terrainsUsed.Add(terrain);
        user.terrainsAvailable.Remove(terrain);
        terrain.UpdatePosition(newPosition.x, newPosition.y);
        UpdateTerrainCounter();
    }


    public void RemoveTerrain(Terrain terrain)
    {
        user.terrainsAvailable.Add(terrain);
        terrain.UpdatePosition(null, null);
        UpdateTerrainCounter();
    }


    public void UpdateTerrainCounter()
    {
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
            SceneManager.LoadScene("MainScene");
        });
    }

    public void RemoveAll()
    {
        user.terrainsAvailable.AddRange(user.terrainsUsed);
        UpdateTerrainCounter();

        gridController.RemoveAllPlants();
        gridController.RemoveAllTiles();
    }

    #endregion

}
