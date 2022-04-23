using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System.Runtime.InteropServices;
using UnityEngine.SceneManagement;
using LootLocker.Requests;
using System.Threading.Tasks;
using System;

public class Auth : MonoBehaviour
{

    [SerializeField] TextMeshProUGUI emailText;
    [SerializeField] TextMeshProUGUI passwordText;
    [SerializeField] Toggle remember;


#if UNITY_WEBGL
    [DllImport("__Internal")]
    private static extern void Web3Connect();

    [DllImport("__Internal")]
    private static extern string ConnectAccount();

    [DllImport("__Internal")]
    private static extern void SetConnectAccount(string value);

    private int expirationTime;
    private string account;

    public void Start()
    {
        LootLockerSDKManager.CheckWhiteLabelSession(response =>
        {
            if (response)
            {
                // Start a new session
                Debug.Log("session is valid, you can start a game session");

                StartLootLockerSession(() => {
                    SceneManager.LoadScene("BuildScene");
                });

            }
            else
            {
                // Show login form here
                Debug.Log("session is NOT valid, we should show the login form");
            }
        });
    }


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
        LoginWithLootLocker();
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
    public async void HandleLoginButtonClick()
    {
        // await LoginWithWeb3();
        LoginWithLootLocker();
    }

    public async void HandleRegisterButtonClick()
    {
        RegisterWithLootLocker();
    }


    // Start is called before the first frame update
    private void LoginWithLootLocker()
    {
        string email = emailText.text;
        string password = passwordText.text;
        bool rememberMe = remember.isOn;
        LootLockerSDKManager.WhiteLabelLogin(email, password, rememberMe, response =>
        {
            if (!response.success)
            {
                Debug.Log("error while logging in");
                return;
            }

            // Start game session here
            Debug.Log("user logged in");
            //string token = response.SessionToken;

            StartLootLockerSession(() => {
                SceneManager.LoadScene("MainScene");
            });
        });

    }


    private void RegisterWithLootLocker()
    {
        string email = emailText.text;
        string password = passwordText.text;
        LootLockerSDKManager.WhiteLabelSignUp(email, password, (response) =>
        {
            if (!response.success)
            {
                Debug.Log("error while creating user");
                return;
            }

            Debug.Log("user created successfully");

        });
    }


    private void StartLootLockerSession(Action callback)
    {
        LootLockerSDKManager.StartWhiteLabelSession((response) =>
        {
            if (!response.success)
            {
                Debug.Log("error starting LootLocker session");

                return;
            }

            Debug.Log("session started successfully");
            callback();

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
