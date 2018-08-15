using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelComplete : MonoBehaviour {

    public GameObject levelCompleteUI;

    public bool colision;

	// Use this for initialization
	void Start () {
        levelCompleteUI.SetActive(false);
        colision = false;
	}


    void OnTriggerEnter2D(Collider2D ship)
	{
        colision = true;
        if (ship.gameObject.tag == "Ship")
        {
            Time.timeScale = 0;
            levelCompleteUI.SetActive(true);

        }
	}


}
