using System.Collections;
using System.Collections.Generic;

public class Terrain
{
    public int id;
    public int x, y;
    public TerrainType type;
    public TerrainState state;

    public Terrain(int _id, int _x, int _y, TerrainType _type, TerrainState _state)
    {
        id = _id;
        x = _x;
        y = _y;
        type = _type;
        state = _state;
    }
}

public enum TerrainState
{
    wild,
    empty,
    full
}

public enum TerrainType
{
    grass,
    soil,

    bottom,
    top,

    left,
    right,

    bottomLeftCorner,
    bottomRightCorner,

    topLeftCorner,
    topRightCorner,

    bottomWithBorders,
    topWithBorders,

    leftWithBorders,
    rightWithBorders,

    soilWithFullBorders
}
