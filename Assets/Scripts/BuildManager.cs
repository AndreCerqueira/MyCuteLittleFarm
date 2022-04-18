using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.SceneManagement;

public class BuildManager : MonoBehaviour
{
    // Variables
    public User user;
    public int terrainsAvailable;
    [SerializeField] private GameObject seedSlotPrefab;
    [SerializeField] private GameObject seedListView;

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

        terrainsAvailable = 0;
        terrainCounter.text = terrainsAvailable.ToString();

        SetSeedSlots();
    }


    [Header("Temp")]
    [SerializeField] private BaseSeed tempBaseSeed;

    private void SetSeedSlots()
    {
        Seed seed = new Seed(1, tempBaseSeed, 1, 1);
        // Create seed slot
        GameObject row = Instantiate(seedSlotPrefab, new Vector3(0, 0, 0), Quaternion.identity);
        row.GetComponent<SeedSlot>().seed = seed;
        row.GetComponent<SeedSlot>().SetData();
        row.transform.SetParent(seedListView.transform);
        row.transform.localScale = new Vector3(1, 1, 1);
    }

    
    public void SetTerrain()
    {
        terrainsAvailable--;
        terrainCounter.text = terrainsAvailable.ToString();
    }

    
    public void RemoveTerrain()
    {
        terrainsAvailable++;
        terrainCounter.text = terrainsAvailable.ToString();
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
        SceneManager.LoadScene("MainScene");
    }

    public void RemoveAll()
    {
        int amount = gridController.GetTileAmount();
        terrainsAvailable += amount;
        terrainCounter.text = terrainsAvailable.ToString();

        gridController.RemoveAllPlants();
        gridController.RemoveAllTiles();
    }

    #endregion

}
