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
    void Awake()
    {
        user = GetComponent<GameManager>().user;
        width = 20;
        height = 20;

        Generate();
    }


    void Generate()
    {

        tileMap.ClearAllTiles();
        generateArray(width, height);
        terrainGeneration();
        renderMap();
        user.loadUserData();

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
                if (map[x, y].type != TerrainType.grass)
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
            case TerrainType.bottom:
                return 2;
            case TerrainType.top:
                return 3;
            case TerrainType.left:
                return 4;
            case TerrainType.right:
                return 5;
            case TerrainType.bottomLeftCorner:
                return 6;
            case TerrainType.bottomRightCorner:
                return 7;
            case TerrainType.topLeftCorner:
                return 8;
            case TerrainType.topRightCorner:
                return 9;
            case TerrainType.bottomWithBorders:
                return 10;
            case TerrainType.topWithBorders:
                return 11;
            case TerrainType.leftWithBorders:
                return 12;
            case TerrainType.rightWithBorders:
                return 13;
            case TerrainType.soilWithFullBorders:
                return 14;
            default:
                return 404;

        }
    }

}
