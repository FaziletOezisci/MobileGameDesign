using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ScoreTextScript : MonoBehaviour {

	Text text;
	public static int lightAmount;

	// Use this for initialization
	void Start () {
		text = GetComponent<Text>();
	}
	
	// Update is called once per frame
	void Update () {
        if (lightAmount <10){
            text.text = "00"+ lightAmount.ToString();
        }
        if ((lightAmount < 100) && (lightAmount >10))
        {
            text.text = "0" + lightAmount.ToString();
        }if (lightAmount > 100) {
            text.text = lightAmount.ToString();
        }
		
	}
}
