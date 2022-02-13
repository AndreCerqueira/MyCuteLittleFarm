using System.Collections;
using System.Numerics;
using System.Collections.Generic;
using UnityEngine;

public class ERC20DecimalsExample : MonoBehaviour
{
    async void Start()
    {
        string chain = "ethereum";
        string network = "rinkeby";
        string contract = "0xa45e2c44ac5db0bc14ce93938c5c2c9ce2408b9b";

        BigInteger decimals = await ERC20.Decimals(chain, network, contract);
        print(decimals);
    }
}
