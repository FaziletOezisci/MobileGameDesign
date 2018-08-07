using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SuperLightCollect : MonoBehaviour {

	void OnTriggerEnter2D(Collider2D col)
    {
		if (col.gameObject.tag == "Ship")
		{
			Destroy(gameObject);
			ScoreTextScriptSuperLight.lightAmountSuper += 1;
		}
    }
}
