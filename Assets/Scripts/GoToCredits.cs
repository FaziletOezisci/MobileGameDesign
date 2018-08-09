using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GoToCredits : MonoBehaviour {


    public Camera MainCamera;

	private void Start()
	{
     //   m_MainCamera = Camera.main;
	}


	void OnMouseDown()
    {

       // MainCamera.transform.position = new Vector3(106, 68, 15);
        Debug.Log("Go to Credits!");

    }
}
