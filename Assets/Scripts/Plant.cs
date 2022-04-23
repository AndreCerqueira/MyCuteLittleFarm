using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Plant : TerrainContent
{
    // Variables
    MainSceneManager mainManager;

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
                Harvest();
            }

            spriteRenderer.sprite = fases[currentFase];
        }
    }


    // Start is called before the first frame update
    protected override void Start()
    {
        base.Start();

        // Set data
        mainManager = FindObjectOfType<MainSceneManager>();
        spriteRenderer.sprite = fases[currentFase];
        finalFase = fases.Length - 1;

        StartCoroutine(Growth());
    }


    private void OnMouseDown()
    {
        if (currentFase == finalFase)
        {
            currentFase++;
        }
    }


    private void Harvest()
    {
        mainManager.AddCoin(row.seed.value);
        GetXp();
        StartCoroutine(Growth());
    }


    private void GetXp()
    {
        row.xp += 10;
        row.seed.SetProgressIntoLootLocker();
    }


    IEnumerator Growth()
    {
        while (currentFase < finalFase)
        {
            float duration = Random.Range(1, 3);
            yield return new WaitForSeconds(duration);
            currentFase++;
        }
    }

}