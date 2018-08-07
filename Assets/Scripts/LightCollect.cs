using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LightCollect : MonoBehaviour {

	void OnTriggerEnter2D(Collider2D col)
	{
		ScoreTextScript.lightAmount += 1;

		Destroy (gameObject);

	}
}
