using System.Collections;
using System.Numerics;
using System.Collections.Generic;
using UnityEngine;

public class ERC20BalanceOfExample : MonoBehaviour
{
    async void Start()
    {
        string chain = "binance";
        string network = "testnet";
        string contract = "0x80D1486eF600cc56d4df9ed33bAF53C60D5A629b";
        string account = "0x02F1828f21B7Ec274DD9E5BC1b83354d5225beF6";

        BigInteger balanceOf = await ERC20.BalanceOf(chain, network, contract, account);
        print(balanceOf); 
    }
}
