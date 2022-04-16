using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Plant : MonoBehaviour
{
    // Variables
    public SeedRow row;
    SpriteRenderer spriteRenderer;
    GameManager gameManager;

    [SerializeField] Sprite[] fases;
    int _currentFase = 0;
    int finalFase;

    public int currentFase
    {
        get
        {
            return _currentFase;
        }
        set
        {
            _currentFase = value;

            if (currentFase > finalFase)
            {
                currentFase = 0;
                harvest();
            }

            spriteRenderer.sprite = fases[currentFase];
        }
    }


    // Start is called before the first frame update
    void Start()
    {
        // Set data
        gameManager = FindObjectOfType<GameManager>();
        spriteRenderer = GetComponent<SpriteRenderer>();
        fases = row.seed.animation;
        spriteRenderer.sprite = fases[currentFase];
        finalFase = fases.Length - 1;

        StartCoroutine(growth());
    }


    private void OnMouseDown()
    {
        if (currentFase == finalFase)
        {
            currentFase++;
        }
    }


    private void harvest()
    {
        gameManager.addCoin(row.seed.value);
        getXp();
        StartCoroutine(growth());
    }


    private void getXp()
    {
        row.xp += 10;
        row.seed.setProgressIntoLootLocker();
    }


    IEnumerator growth()
    {
        while (currentFase < finalFase)
        {
            float duration = Random.Range(1, 3);
            yield return new WaitForSeconds(duration);
            currentFase++;
        }
    }

}