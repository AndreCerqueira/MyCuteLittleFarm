using System.Collections;
using System.Collections.Generic;
using UnityEngine.Tilemaps;
using UnityEngine;

public class WorldGenerator : MonoBehaviour
{
    // Variables
    User user;
    int width, height;
    public TileBase[] tiles;
    public Tilemap tileMap;
    public Terrain[,] map;

    // Start is called before the first frame update
    void Start()
    {
        user = GetComponent<GameManager>().user;
        width = 20;
        height = 20;

        Generate();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void Generate()
    {

        tileMap.ClearAllTiles();
        generateArray(width, height);
        terrainGeneration();
        renderMap();

    }

    public void generateArray(int width, int height)
    {

        map = new Terrain[width, height];
        for (int x = 0; x < width; x++)
        {
            for (int y = 0; y < height; y++)
            {
                map[x, y] = new Terrain(0, x, y, TerrainType.grass, TerrainState.wild);
            }
        }

    }

    public void terrainGeneration()
    {

        // Add the user terrains to the world
        foreach (Terrain t in user.terrains)
        {
            map[t.x, t.y] = new Terrain(0, t.x, t.y, t.type, t.state);
        }
    }

    public void renderMap()
    {
        for (int x = 0; x < width; x++)
        {
            for (int y = 0; y < height; y++)
            {
                tileMap.SetTile(new Vector3Int(x, y, 0), tiles[getTileByType(map[x, y].type)]);
            }
        }
    }

    int getTileByType(TerrainType type)
    {
        switch (type)
        {
            case TerrainType.grass:
                return 0;
            case TerrainType.soil:
                return 1;
            case TerrainType.soilBottom:
                return 2;
            case TerrainType.grassTopSoil:
                return 3;
            case TerrainType.grassLeftCornerSoil:
                return 4;
            case TerrainType.grassRightCornerSoil:
                return 5;
            case TerrainType.grassLeftSideSoil:
                return 6;
            case TerrainType.grassRightSideSoil:
                return 7;
            case TerrainType.grassLeftCountinuousSideSoil:
                return 8;
            case TerrainType.grassRighCountinuoustSideSoil:
                return 9;
            default:
                return 404;
        }
    }

}
