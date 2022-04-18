using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Pack : MonoBehaviour
{
    public BaseSeed reward;

    public void GetSeed()
    {
        Image image = transform.Find("Image").GetComponent<Image>();
        image.enabled = true;

        image.sprite = reward.image;
    }

}