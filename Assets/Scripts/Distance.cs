using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class Distance : MonoBehaviour {

    private Text distancetext;

    public float distance_;
    public GameObject player;
    public GameObject goal;


	// Use this for initialization
	void Start () {
        distancetext = GetComponent<Text>() as Text;
	}
	
	// Update is called once per frame
	void Update () {
        distance_ = (int)Vector3.Distance(player.transform.position, goal.transform.position);

        distancetext.text = distance_.ToString() + " m";
	}
}
