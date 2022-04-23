using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.Tilemaps;
using UnityEngine.UIElements;

public class GridController : MonoBehaviour
{
    // Variables
    private Grid grid;
    private User user;
    [SerializeField] private bool interactible;
    [SerializeField] private Tilemap interactiveMap;
    [SerializeField] private Tilemap pathMap;
    [SerializeField] private Tile hoverTile;
    [SerializeField] private RuleTile pathTile;
    [SerializeField] private Sprite plowSprite;
    new CameraController camera;
    BuildManager buildManager;
    [SerializeField] private GameObject plantPrefab;
    [SerializeField] private GameObject plantPreviewPrefab;


    private Vector3Int previousMousePos = new Vector3Int();

    // Start is called before the first frame update
    void Start()
    {
        grid = gameObject.GetComponent<Grid>();
        camera = FindObjectOfType<CameraController>();

        if (SceneManager.GetActiveScene().name == "BuildScene")
            buildManager = FindObjectOfType<BuildManager>();

        user = (SceneManager.GetActiveScene().name == "BuildScene") ? FindObjectOfType<BuildManager>().user : FindObjectOfType<GameManager>().user;

    }

    // Update is called once per frame
    void Update()
    {

        if (SceneManager.GetActiveScene().name == "BuildScene")
        {
            PlayerAction action = camera.action;

            if (action != PlayerAction.mouse) 
            { 
                // Get Position
                Vector3Int mousePos = GetMousePosition();
                if (!mousePos.Equals(previousMousePos))
                {
                    interactiveMap.SetTile(previousMousePos, null);
                    interactiveMap.SetTile(mousePos, hoverTile);
                    previousMousePos = mousePos;
                }

                // Plow
                if (action == PlayerAction.plow)
                    if (Input.GetMouseButton(0))
                        SetTile(mousePos);

                // Remove
                if (action == PlayerAction.remove)
                    if (Input.GetMouseButton(0))
                        RemoveTile(mousePos);

                // Plant
                if(action == PlayerAction.plant)
                    if (Input.GetMouseButton(0))
                        SetPlant(mousePos);
            }

        }
        
    }


    #region Plants

    public SeedDisplay selectedRow;
    private void SetPlant(Vector3Int mousePos)
    {
        if (pathMap.GetTile(mousePos) == pathTile)
        {

            Terrain terrainInTile = Utils.GetTerrainInTile(mousePos, user.terrainsUsed);
            if (!terrainInTile.HasContent()) { 
                
                // Get Final Position
                Vector3 finalPos = pathMap.GetCellCenterWorld(mousePos);
                finalPos.y += 0.4f;

                // Create plant
                GameObject prefab = (SceneManager.GetActiveScene().name == "BuildScene") ? plantPreviewPrefab : plantPrefab;
                GameObject plant = Instantiate(prefab, finalPos, Quaternion.identity);
                plant.GetComponent<TerrainContent>().row = selectedRow;
                plant.GetComponent<SpriteRenderer>().sortingOrder = mousePos.y * -1;
                plant.transform.parent = GameObject.Find("Plants").transform;
                plant.transform.name = "Plant " + plant.GetComponent<TerrainContent>().row.seed.instanceId;
                plant.GetComponent<TerrainContent>().row.seedState = SeedState.planted;

                // Update Terrain in tile
                terrainInTile.content = plant.GetComponent<TerrainContent>().row.seed.instanceId.ToString();
            }
        }

        // Reset States
        camera.action = PlayerAction.mouse;
        RemoveHoverTile();
        ResetHoverTile();
    }

    public void SetPlant(Vector3Int mousePos, SeedDisplay row)
    {
        // Initial Verifications
        if (pathMap.GetTile(mousePos) != pathTile)
            return;

        // Get Final Position
        Vector3 finalPos = pathMap.GetCellCenterWorld(mousePos);
        finalPos.y += 0.4f;

        // Create plant
        GameObject prefab = (SceneManager.GetActiveScene().name == "BuildScene") ? plantPreviewPrefab : plantPrefab;
        GameObject plant = Instantiate(prefab, finalPos, Quaternion.identity);
        plant.GetComponent<TerrainContent>().row = row;
        plant.GetComponent<SpriteRenderer>().sortingOrder = mousePos.y * -1;
        plant.transform.parent = GameObject.Find("Plants").transform;
        plant.transform.name = "Plant " + plant.GetComponent<TerrainContent>().row.seed.instanceId;
        plant.GetComponent<TerrainContent>().row.seedState = SeedState.planted;

        // Update Terrain in tile
        Terrain terrainInTile = Utils.GetTerrainInTile(mousePos, user.terrainsUsed);
        terrainInTile.content = plant.GetComponent<TerrainContent>().row.seed.instanceId.ToString();

    }


    public void RemovePlant(string id)
    {
        GameObject plant = GameObject.Find("Plant " + id);

        if (plant != null) 
        {
            try {
                Utils.GetTerrainById(id, user.terrainsUsed).content = "null";
            }
            catch (System.Exception) {
                throw;
            } 

            Destroy(plant);
        }
    }


    public void RemoveAllPlants()
    {
        GameObject plantHolder = GameObject.Find("Plants");
        foreach (Transform child in plantHolder.transform)
            child.GetComponent<TerrainContent>().row.RemovePlant(this);
    }

    #endregion

    #region Tiles

    public void SetTileFromDb(Terrain terrain)
    {
        
        pathMap.SetTile(terrain.GetPosition(), pathTile);
        buildManager.SetTerrain(terrain);
        
    }


    public void SetTile(Vector3Int mousePos)
    {
        if (user.terrainsAvailable.Count > 0 && pathMap.GetTile(mousePos) == null)
        {
            pathMap.SetTile(mousePos, pathTile);

            Terrain terrain = GetAvailableTerrain();
            buildManager.SetTerrain(terrain, mousePos);
        }
    }


    private Terrain GetAvailableTerrain()
    {
        if (user.terrainsAvailable.Count > 0) 
            return user.terrainsAvailable[0];

        return null;
    }


    private void RemoveTile(Vector3Int mousePos)
    {
        if (pathMap.GetTile(mousePos) != null)
        {
            // Remove Terrain
            Terrain terrain = Utils.GetTerrainInTile(mousePos, user.terrainsUsed);
            user.terrainsUsed.Remove(terrain);

            // Remove Plant in Terrain
            RemovePlant(terrain.content);
            terrain.RemoveData();

            // Remove Tile
            pathMap.SetTile(mousePos, null);
            buildManager.RemoveTerrain(terrain);
        }
    }


    public void RemoveAllTiles()
    {
        foreach (Terrain terrain in user.terrainsUsed)
            terrain.RemoveData();

        user.terrainsUsed.Clear();
        pathMap.ClearAllTiles();
    }


    public void RemoveHoverTile()
    {
        if (previousMousePos != null)
            interactiveMap.SetTile(previousMousePos, null);
    }


    public void ResetHoverTile()
    {
        hoverTile.sprite = plowSprite;
    }


    public void ChangeHoverTile(Sprite sprite)
    {
        hoverTile.sprite = sprite;
    }

    #endregion


    Vector3Int GetMousePosition()
    {
        Vector3 mouseWorldPos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
        return grid.WorldToCell(mouseWorldPos);
    }
}