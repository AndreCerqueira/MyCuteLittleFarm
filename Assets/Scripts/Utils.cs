using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Utils : MonoBehaviour
{

    // Missing Rarity seed condition
    // Missing MAX Level (5)
    public static int getMaxXP(int level, Rarity rarity)
    {
        return Mathf.RoundToInt(100 * (level + getRarityValue(rarity)) * Mathf.Log10(level + 1));
    }

    public static float getUpgradeCost(int level, Rarity rarity)
    {
        return (float)Math.Round(getRarityValue(rarity) * 1.75f * Mathf.Log10(level + 1), 2);
    }

    public static int getNewSpeedUpgraded(int currentSpeed)
    {
        return currentSpeed;
    }

    static int getRarityValue(Rarity rarity)
    {
        switch (rarity)
        {
            case Rarity.Common:
                return 1;
            case Rarity.Rare:
                return 2;
            case Rarity.Epic:
                return 3;
            case Rarity.Legendary:
                return 4;
            default:
                return 404;
        }
    }

    public static Texture2D textureFromSprite(Sprite sprite)
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
