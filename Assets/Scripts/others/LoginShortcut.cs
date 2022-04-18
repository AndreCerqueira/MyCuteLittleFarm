using LootLocker.Requests;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LoginShortcut : MonoBehaviour
{
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
}
