using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Plant : MonoBehaviour
{
    // Variables
    SpriteRenderer spriteRenderer;
    GameManager gameManager;

    [SerializeField] Sprite[] fases;
    int _currentFase = 0;
    int finalFase;

    public int currentFase
    {
        get { 
            return _currentFase; 
        }
        set { 
            _currentFase = value;

            if (currentFase > finalFase)
            {
                currentFase = 0;
                gameManager.addCoin(1);
                StartCoroutine(growth());
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
        spriteRenderer.sprite = fases[currentFase];
        finalFase = fases.Length - 1;

        StartCoroutine(growth());
    }


    private void OnMouseDown()
    {
        if (currentFase == finalFase)
            currentFase++;
    }


    // Update is called once per frame
    void Update()
    {
        
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
