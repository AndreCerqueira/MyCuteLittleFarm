using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Terrain
{
    public int id;
    public int? x, y;
    public string content;

    public Terrain()
    {
    }


    public Terrain(int id)
    {
        this.id = id;
    }


    public Terrain(int id, string x, string y)
    {
        this.id = id;
        this.x = (x == "null" || x == null) ? null : int.Parse(x);
        this.y = (y == "null" || y == null) ? null : int.Parse(y);
        this.content = "null";
    }

    public Terrain(int id, string x, string y, string content)
    {
        this.id = id;
        this.x = (x == "null" || x == null) ? null : int.Parse(x);
        this.y = (y == "null" || y == null) ? null : int.Parse(y);
        this.content = content;
    }


    public Terrain(int id, int x, int y)
    {
        this.id = id;
        this.x = x;
        this.y = y;
        this.content = "null";
    }


    public bool HasContent()
    {
        return (content != null && content != "null");
    }

    public bool IsPlaced()
    {
        return (x != null && y != null);
    }


    public void UpdatePosition(int? x, int? y)
    {
        this.x = x;
        this.y = y;
    }


    public void RemoveData()
    {
        x = null;
        y = null;
        content = "null";
    }


    public Vector3Int GetPosition()
    {
        return new Vector3Int((int)x, (int)y, 0);
    }

}
