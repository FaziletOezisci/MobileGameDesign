﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LightCollect : MonoBehaviour {


	void OnTriggerEnter2D(Collider2D col)
	{
		if (col.gameObject.tag == "Ship")
		{
			Destroy(gameObject);
			ScoreTextScript.lightAmount += 1;
		}
      
    }
    
}
