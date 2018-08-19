using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class shipManager : MonoBehaviour {

    public uiManager ui;
    public GameObject levelCompleteUI;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	private void OnCollisionEnter2D(Collision2D collision)
	{
        if(collision.gameObject.tag == "destroyer"){
            Destroy(gameObject);
            //ui.gameOverActivated();
            levelCompleteUI.SetActive(true);
        } else if(collision.gameObject.tag == "moveableWall"){
            Destroy(gameObject);
            //ui.gameOverActivated();
            levelCompleteUI.SetActive(true);
        } else if(collision.gameObject.tag == "fire1"){
            Destroy(gameObject);
            //ui.gameOverActivated();
            levelCompleteUI.SetActive(true);
        } else if(collision.gameObject.tag == "fire2"){
            Destroy(gameObject);
            //ui.gameOverActivated();
            levelCompleteUI.SetActive(true);
        }
	}
}
