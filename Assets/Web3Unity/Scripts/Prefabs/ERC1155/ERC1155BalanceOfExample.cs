using System.Collections;
using System.Numerics;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ERC1155BalanceOfExample : MonoBehaviour
{
    public GameObject image;
    async void Start()
    {
        if (PlayerPrefs.HasKey("Account")) 
        { 

            string chain = "ethereum";
            string network = "rinkeby";
            string contract = "0x88B48F654c30e99bc2e4A1559b4Dcf1aD93FA656";
            string account = PlayerPrefs.GetString("Account"); //"0xe02e155E1B22665B0998cBE5B5b9c45b4FAECF18";
            string tokenId = "101399500521397329131705481378168126168778306651323954349151280811560256143361";

            BigInteger balanceOf = await ERC1155.BalanceOf(chain, network, contract, account, tokenId);
            print(balanceOf);

            if (balanceOf > 0)
            {
                image.GetComponent<Image>().color = Color.red;
            }

        }
    }
}
