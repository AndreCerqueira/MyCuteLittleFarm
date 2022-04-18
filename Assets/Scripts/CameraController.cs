using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public enum PlayerAction
{
    mouse,
    remove,
    plow,
    plant
}


public class CameraController : MonoBehaviour
{
    // Variables
    Vector3 touchStart;
    private float zoomOutMin = 3;
    private float zoomOutMax = 5;
    private bool cameraMoving = false;
    int width = 5;
    int height = 5;
    public PlayerAction action;


    void Awake()
    {
        action = PlayerAction.mouse;
    }


    // Update is called once per frame
    void Update()
    {

        if (Input.GetMouseButtonDown(0))
        {
            touchStart = Camera.main.ScreenToWorldPoint(Input.mousePosition);
        }

        if (action == PlayerAction.mouse)
            Move();

        Zoom(Input.GetAxis("Mouse ScrollWheel"));
    }


    void Move()
    {
        if (Input.touchCount == 2)
        {
            Touch touchZero = Input.GetTouch(0);
            Touch touchOne = Input.GetTouch(1);

            Vector2 touchZeroPrevPos = touchZero.position - touchZero.deltaPosition;
            Vector2 touchOnePrevPos = touchOne.position - touchOne.deltaPosition;

            float prevMagnitude = (touchZeroPrevPos - touchOnePrevPos).magnitude;
            float currentMagnitude = (touchZero.position - touchOne.position).magnitude;

            float difference = currentMagnitude - prevMagnitude;

            Zoom(difference * 0.01f);
        }
        else if (Input.GetMouseButton(0))
        {
            Vector3 direction = touchStart - Camera.main.ScreenToWorldPoint(Input.mousePosition);
            StartCoroutine(detectCameraMoving());

            Vector3 nextPosition = Camera.main.transform.position + direction;
            if (nextPosition.x >= 0 && nextPosition.x <= width * 3 && nextPosition.y >= 0 && nextPosition.y <= height * 3)
                Camera.main.transform.position += direction;
        }
    }


    void Zoom(float increment)
    {
        Camera.main.orthographicSize = Mathf.Clamp(Camera.main.orthographicSize - increment, zoomOutMin, zoomOutMax);
    }

    public IEnumerator detectCameraMoving()
    {
        yield return new WaitForSeconds(0.1f);

        if (Input.GetMouseButton(0))
            cameraMoving = true;
        else
            cameraMoving = false;
    }
}