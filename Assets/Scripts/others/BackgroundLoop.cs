using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BackgroundLoop : MonoBehaviour
{
    public GameObject mainBackground;
    public GameObject[] backgrounds;
    int currentIndex = 0;
    [SerializeField] private float speed;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        mainBackground.transform.position = new Vector3(mainBackground.transform.position.x + speed, mainBackground.transform.position.y, 0);

        foreach (var background in backgrounds)
        {
            if (background.transform.position.x >= 1100)
                background.transform.position = new Vector3(background.transform.position.x -1600, background.transform.position.y, 0);
        }


        
    }
}
