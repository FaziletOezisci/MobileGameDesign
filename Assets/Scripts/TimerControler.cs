using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TimerControler : MonoBehaviour {
	public int roundTime = 0;
	private float lastTimeUpdate = 1;

	// Use this for initialization
	void Start () {
		roundTime = 0;
	}

	// Update is called once per frame
	void Update () {
		if (roundTime >= 0 && Time.time - lastTimeUpdate >= 1){
			roundTime++;
			lastTimeUpdate = Time.time;
		}
	}
}
