using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SuperLightCollect : MonoBehaviour {

	void OnTriggerEnter2D(Collider2D col)
    {

        ScoreTextScriptSuperLight.lightAmountSuper += 1;
        Destroy(gameObject);

    }
}
