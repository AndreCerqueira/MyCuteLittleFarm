using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
    // Variables
    [SerializeField] Text coinsText;
    int _coins;

    public int coins
    {
        get
        {
            return _coins;
        }
        set
        {
            _coins = value;
            coinsText.text = _coins.ToString();
        }
    }

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {

    }

    public void addCoin(int amount)
    {
        coins += amount;
    }

}
