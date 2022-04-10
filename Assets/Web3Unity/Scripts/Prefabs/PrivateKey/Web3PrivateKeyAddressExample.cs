using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Web3PrivateKeyAddressExample : MonoBehaviour
{
    async void Start()
    {
        string message = "Message";
        string hashedMessage = Web3Wallet.Sha3(message);
        //print("Hashed Message: " + hashedMessage);
        // private key of account
        string privateKey = "e050c537aa0ba996933ee373829e4a532bf665c6091f155672fbd72a9a47793e";
        // string signature
        string signature = Web3PrivateKey.Sign(privateKey, message);
        print("Signature: " + signature);

        string r = signature.Substring(0, 66);
        print("R: " + r);
        string s = "0x" + signature.Substring(66, 64);
        print("S: " + s);
        int v = int.Parse(signature.Substring(130, 2), System.Globalization.NumberStyles.HexNumber);
        print("V: " + v);
        // get account from private key
        string account = Web3PrivateKey.Address(privateKey);
        print("Account from PK: " + account);
        string address = await EVM.Verify(message, signature);
        print("Address From Verify: " + address);
    }
}
