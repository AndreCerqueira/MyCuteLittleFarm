using System;
using System.Collections;
using System.Numerics;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ERC20BalanceOfExample : MonoBehaviour
{
    GameManager gameManager;

    async void Start()
    {
        gameManager = FindObjectOfType<GameManager>();

        string chain = "ethereum";
        string network = "rinkeby";
        string contract = "0xa90e70fcfdf140b065cc51bc41961683b3ef1b66";
        string account = "0xe02e155e1b22665b0998cbe5b5b9c45b4faecf18";

        BigInteger balanceOf = await ERC20.BalanceOf(chain, network, contract, account);
        float finalBalance = (float)Math.Round((float)balanceOf / Mathf.Pow(10, 18), 2); // 10 ^ 18

        gameManager.walletCoins = finalBalance;
    }
}
