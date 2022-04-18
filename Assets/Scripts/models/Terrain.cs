using System.Collections;
using System.Collections.Generic;

public class Terrain
{
    public string id;
    public int? x, y;
    public string content;

    public Terrain()
    {
    }


    public Terrain(string id, string x, string y)
    {
        this.id = id;
        this.x = (x == "null") ? null : int.Parse(x);
        this.y = (y == "null") ? null : int.Parse(y);
        this.content = "null";
    }


    public Terrain(string id, int x, int y)
    {
        this.id = id;
        this.x = x;
        this.y = y;
        this.content = "null";
    }

}
