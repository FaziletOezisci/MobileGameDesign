using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HUDTimeControler : MonoBehaviour {

	public Text timerText;
	public TimerControler Timer;


	// Use this for initialization
	void Start () {
		
	}

	// Update is called once per frame
	void Update () {
		timerText.text = Timer.roundTime.ToString();
	}
}
