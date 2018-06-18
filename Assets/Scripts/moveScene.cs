using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class moveScene : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
        //transform.Translate(Input.GetAxis("Horizontal"), Input.GetAxis("Vertical"), 0f);
        transform.Rotate(0f,0f, -Input.GetAxis("Horizontal"));
	}
}
