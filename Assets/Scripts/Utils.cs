using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Networking;

public enum Rarity
{
    Common,
    Rare,
    Epic,
    Legendary
}

public class Utils : MonoBehaviour
{

    public static Texture2D TextureFromSprite(Sprite sprite)
    {
        if (sprite.rect.width != sprite.texture.width)
        {
            Texture2D newText = new Texture2D((int)sprite.rect.width, (int)sprite.rect.height);
            Color[] newColors = sprite.texture.GetPixels((int)sprite.textureRect.x,
                                                         (int)sprite.textureRect.y,
                                                         (int)sprite.textureRect.width,
                                                         (int)sprite.textureRect.height);
            newText.SetPixels(newColors);
            newText.Apply();
            return newText;
        }
        else
            return sprite.texture;
    }


    public static BaseSeed GetBaseSeedById(int id)
    {
        GameManager gameManager = FindObjectOfType<GameManager>();
        BaseSeed[] seeds = gameManager.baseSeeds;

        foreach (BaseSeed seed in seeds)
        {
            if (seed.id == id)
                return seed;
        }

        return null;
    }


    static public string ConvertEthToWei(float eth)
    {
        float decimals = 1000000000000000000;
        float wei = eth * decimals;
        string value = Convert.ToDecimal(wei).ToString();

        return value;
    }


    static public string ConvertWeiToEth(float wei)
    {
        float decimals = 1000000000000000000; // 18 decimals
        float eth = wei / decimals;

        return Convert.ToDecimal(eth).ToString();
    }


    IEnumerator DownloadImage(string MediaUrl, Action<Sprite> callback)
    {
        Texture2D texture = null;
        UnityWebRequest request = UnityWebRequestTexture.GetTexture(MediaUrl);
        yield return request.SendWebRequest();
        if (request.isNetworkError || request.isHttpError)
            Debug.Log(request.error);
        else
            texture = ((DownloadHandlerTexture)request.downloadHandler).texture;

        Rect rect = new Rect(0, 0, texture.width, texture.height);
        Sprite sprite = Sprite.Create(texture, rect, new Vector2(0.5f, 0.5f));

        callback(sprite);
    }


    public static Terrain GetTerrainInTile(Vector3Int mousePos, List<Terrain> terrains)
    {
        foreach (Terrain terrain in terrains)
        {
            if (terrain.x == mousePos.x && terrain.y == mousePos.y)
            {
                return terrain;
            }
        }

        return null;
    }


    public static SeedDisplay GetSeedDisplayInTerrain(int terrainId, List<SeedDisplay> seedDisplays)
    {
        foreach (SeedDisplay display in seedDisplays)
        {
            if (display.seed.instanceId == terrainId)
                return display;
        }
        return null;
    }

    public static Terrain GetTerrainById(string id, List<Terrain> terrains)
    {
        foreach (Terrain terrain in terrains)
        {
            if (terrain.content == id)
                return terrain;
        }
        return null;
    }


    #region Effects

    static public IEnumerator DoFadeOut(CanvasGroup canvasG)
        {
            while (canvasG.alpha > 0)
            {
                canvasG.alpha -= Time.deltaTime * 2;
                yield return null;
            }

            canvasG.interactable = false;
            canvasG.blocksRaycasts = false;
        }

        static public IEnumerator DoFadeIn(CanvasGroup canvasG)
        {
            canvasG.interactable = true;
            canvasG.blocksRaycasts = true;

            while (canvasG.alpha < 1)
            {
                canvasG.alpha += Time.deltaTime * 2;
                yield return null;
            }
        }

    #endregion
}
