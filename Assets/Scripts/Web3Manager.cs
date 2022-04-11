using Newtonsoft.Json;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Numerics;
using System.Threading.Tasks;
using UnityEngine;

public class Web3Manager : MonoBehaviour
{
    // Constants
    static string CONTRACT = "0x5a168798df2b9d84e28958702156b036927a9e29";
    static string ABI = "[{\"inputs\":[],\"stateMutability\":\"nonpayable\",\"type\":\"constructor\"},{\"anonymous\":false,\"inputs\":[{\"indexed\":true,\"internalType\":\"address\",\"name\":\"owner\",\"type\":\"address\"},{\"indexed\":true,\"internalType\":\"address\",\"name\":\"spender\",\"type\":\"address\"},{\"indexed\":false,\"internalType\":\"uint256\",\"name\":\"value\",\"type\":\"uint256\"}],\"name\":\"Approval\",\"type\":\"event\"},{\"anonymous\":false,\"inputs\":[{\"indexed\":true,\"internalType\":\"address\",\"name\":\"from\",\"type\":\"address\"},{\"indexed\":true,\"internalType\":\"address\",\"name\":\"to\",\"type\":\"address\"},{\"indexed\":false,\"internalType\":\"uint256\",\"name\":\"value\",\"type\":\"uint256\"}],\"name\":\"Transfer\",\"type\":\"event\"},{\"inputs\":[{\"internalType\":\"address\",\"name\":\"owner\",\"type\":\"address\"},{\"internalType\":\"address\",\"name\":\"spender\",\"type\":\"address\"}],\"name\":\"allowance\",\"outputs\":[{\"internalType\":\"uint256\",\"name\":\"\",\"type\":\"uint256\"}],\"stateMutability\":\"view\",\"type\":\"function\"},{\"inputs\":[{\"internalType\":\"address\",\"name\":\"spender\",\"type\":\"address\"},{\"internalType\":\"uint256\",\"name\":\"amount\",\"type\":\"uint256\"}],\"name\":\"approve\",\"outputs\":[{\"internalType\":\"bool\",\"name\":\"\",\"type\":\"bool\"}],\"stateMutability\":\"nonpayable\",\"type\":\"function\"},{\"inputs\":[{\"internalType\":\"address\",\"name\":\"account\",\"type\":\"address\"}],\"name\":\"balanceOf\",\"outputs\":[{\"internalType\":\"uint256\",\"name\":\"\",\"type\":\"uint256\"}],\"stateMutability\":\"view\",\"type\":\"function\"},{\"inputs\":[],\"name\":\"decimals\",\"outputs\":[{\"internalType\":\"uint8\",\"name\":\"\",\"type\":\"uint8\"}],\"stateMutability\":\"view\",\"type\":\"function\"},{\"inputs\":[{\"internalType\":\"address\",\"name\":\"spender\",\"type\":\"address\"},{\"internalType\":\"uint256\",\"name\":\"subtractedValue\",\"type\":\"uint256\"}],\"name\":\"decreaseAllowance\",\"outputs\":[{\"internalType\":\"bool\",\"name\":\"\",\"type\":\"bool\"}],\"stateMutability\":\"nonpayable\",\"type\":\"function\"},{\"inputs\":[{\"internalType\":\"address\",\"name\":\"spender\",\"type\":\"address\"},{\"internalType\":\"uint256\",\"name\":\"addedValue\",\"type\":\"uint256\"}],\"name\":\"increaseAllowance\",\"outputs\":[{\"internalType\":\"bool\",\"name\":\"\",\"type\":\"bool\"}],\"stateMutability\":\"nonpayable\",\"type\":\"function\"},{\"inputs\":[],\"name\":\"name\",\"outputs\":[{\"internalType\":\"string\",\"name\":\"\",\"type\":\"string\"}],\"stateMutability\":\"view\",\"type\":\"function\"},{\"inputs\":[],\"name\":\"symbol\",\"outputs\":[{\"internalType\":\"string\",\"name\":\"\",\"type\":\"string\"}],\"stateMutability\":\"view\",\"type\":\"function\"},{\"inputs\":[],\"name\":\"totalSupply\",\"outputs\":[{\"internalType\":\"uint256\",\"name\":\"\",\"type\":\"uint256\"}],\"stateMutability\":\"view\",\"type\":\"function\"},{\"inputs\":[{\"internalType\":\"address\",\"name\":\"recipient\",\"type\":\"address\"},{\"internalType\":\"uint256\",\"name\":\"amount\",\"type\":\"uint256\"}],\"name\":\"transfer\",\"outputs\":[{\"internalType\":\"bool\",\"name\":\"\",\"type\":\"bool\"}],\"stateMutability\":\"nonpayable\",\"type\":\"function\"},{\"inputs\":[{\"internalType\":\"address\",\"name\":\"sender\",\"type\":\"address\"},{\"internalType\":\"address\",\"name\":\"recipient\",\"type\":\"address\"},{\"internalType\":\"uint256\",\"name\":\"amount\",\"type\":\"uint256\"}],\"name\":\"transferFrom\",\"outputs\":[{\"internalType\":\"bool\",\"name\":\"\",\"type\":\"bool\"}],\"stateMutability\":\"nonpayable\",\"type\":\"function\"}]";


    public async static Task<string> getBalance()
    {
        string chain = "ethereum";
        string network = "rinkeby";
        string account = PlayerPrefs.GetString("Account");

        BigInteger balance = await ERC20.BalanceOf(chain, network, CONTRACT, account);

        return Utils.ConvertWeiToEth(float.Parse(balance.ToString()));
    }


    // sending custom erc20
    public async static void TransferERC20(Action onComplete)
    {

#if UNITY_WEBGL

        string toAddress = "0xe02e155E1B22665B0998cBE5B5b9c45b4FAECF18";
        float amount = 10;

        // smart contract method to call
        string method = "transfer";
        // array of arguments for contract
        string[] obj = { toAddress, Utils.ConvertEthToWei(amount) };
        string args = JsonConvert.SerializeObject(obj);
        // value in wei
        string value = "0";
        // gas limit OPTIONAL
        string gasLimit = "";
        // gas price OPTIONAL
        string gasPrice = "";
        // connects to user's browser wallet (metamask) to send a transaction
        try
        {
            string response = await Web3GL.SendContract(method, ABI, CONTRACT, args, value, gasLimit, gasPrice);

            OnTransactionCompleted(response, () => {
                onComplete();
            });

        }
        catch (Exception e)
        {
            Debug.LogException(e);
        }

#else
        string fromAddress = PlayerPrefs.GetString("Account");
        string toAddress = "0xe02e155E1B22665B0998cBE5B5b9c45b4FAECF18";
        float transferAmount = 10;

        string chainId = "4"; // rinkeby
        // smart contract method to call
        string method = "transfer";
        // array of arguments for contract
        string[] obj = { toAddress, Utils.ConvertEthToWei(transferAmount) };
        string args = JsonConvert.SerializeObject(obj);
        // value in wei
        string value = "0";
        // create data to interact with smart contract
        string data = await EVM.CreateContractData(ABI, method, args);
        // gas limit OPTIONAL
        string gasLimit = "10000000";
        // gas price OPTIONAL
        string gasPrice = "";
        // connects to user's browser wallet (metamask) to send a transaction
        try
        {
            string response = await Web3Wallet.SendTransaction(chainId, CONTRACT, value, data, gasLimit, gasPrice);

            OnTransactionCompleted(response, () => {
                onComplete();
            });

        }
        catch (Exception e)
        {
            Debug.LogException(e);
        }
#endif

    }


    /*
        Transaction Completion event
     */
    public async static void OnTransactionCompleted(string transaction, Action callback)
    {
        // Variables
        string chain = "ethereum";
        string network = "rinkeby";
        string txConfirmed;

        // Wait for completion

        do
        {
            txConfirmed = await EVM.TxStatus(chain, network, transaction);
        } while (txConfirmed == "pending");


        // Do On Completion
        callback();

    }

}
