using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Runtime.InteropServices;
using UnityEngine.SceneManagement;
using LootLocker.Requests;
using System.Threading.Tasks;

public class Auth : MonoBehaviour
{

#if UNITY_WEBGL
    [DllImport("__Internal")]
    private static extern void Web3Connect();

    [DllImport("__Internal")]
    private static extern string ConnectAccount();

    [DllImport("__Internal")]
    private static extern void SetConnectAccount(string value);

    private int expirationTime;
    private string account;

    async private void OnConnected()
    {
        account = ConnectAccount();
        while (account == "")
        {
            await new WaitForSeconds(1f);
            account = ConnectAccount();
        };
        // save account for next scene
        PlayerPrefs.SetString("Account", account);
        // reset login message
        SetConnectAccount("");
        // load next scene
        SceneManager.LoadScene("MainScene");
    }

    public void OnSkip()
    {
        // burner account for skipped sign in screen
        PlayerPrefs.SetString("Account", "");
        // move to next scene
        SceneManager.LoadScene("MainScene");
    }

#endif


    /*
        Log In Button Event
     */
    public async void HandleAuthButtonClick()
    {
        await LoginWithWeb3();
    }


    // Start is called before the first frame update
    private void LoginWithLootLocker()
    {
        // Login
        LootLockerSDKManager.StartGuestSession((response) =>
        {
            if (!response.success)
            {
                Debug.Log("error starting LootLocker session");
                return;
            }

            Debug.Log("successfully started LootLocker session");

            // Create Coins if player first time
            LootLockerSDKManager.GetSingleKeyPersistentStorage("coins", (response) =>
            {
                if (response.payload == null)
                    LootLockerSDKManager.UpdateOrCreateKeyValue("coins", "0", (_) => { });
            });

            SceneManager.LoadScene("MainScene");
        });
    }


    async private Task LoginWithWeb3()
    {

#if UNITY_WEBGL

        Web3Connect();
        OnConnected();

#else

        // get current timestamp
        int timestamp = (int)(System.DateTime.UtcNow.Subtract(new System.DateTime(1970, 1, 1))).TotalSeconds;
        // set expiration time
        int expirationTime = timestamp + 60;
        // set message
        string message = expirationTime.ToString();
        // sign message
        string signature = await Web3Wallet.Sign(message);
        // verify account
        string account = await EVM.Verify(message, signature);
        int now = (int)(System.DateTime.UtcNow.Subtract(new System.DateTime(1970, 1, 1))).TotalSeconds;
        // validate
        if (account.Length == 42 && expirationTime >= now)
        {
            // save account
            PlayerPrefs.SetString("Account", account);

            LoginWithLootLocker();
        }
#endif

    }

}
