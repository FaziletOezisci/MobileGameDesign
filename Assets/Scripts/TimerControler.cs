using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TimerControler : MonoBehaviour {
	public int roundTime = 50;
	private float lastTimeUpdate = 0;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		if (roundTime > 0 && Time.time - lastTimeUpdate > 1){
			roundTime--;
			lastTimeUpdate = Time.time;
		}
	}
}
