using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour {

    //public float speed = 1.5f;

    Vector3 acceleration;
    float speed = 50.0f;

	void Update () {
        //RotateScenario();
    }

    public void RotateScenario() {
        acceleration = new Vector3(Input.acceleration.x, Input.acceleration.y, Input.acceleration.z);
        Debug.Log(acceleration);
        transform.rotation = Quaternion.Euler(0, 0, -1 * (Input.acceleration.x * speed) ); // To do: controlar el incremento de la rotacion.


        //float acceleration = Input.acceleration.x;
        //transform.Rotate(0, 0, -1 * acceleration / speed );

    }
}