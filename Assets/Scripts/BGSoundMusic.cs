using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BGSoundMusic : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	private void Awake()
	{
        GameObject[] objs = GameObject.FindGameObjectsWithTag("Music");
        if (objs.Length > 1){
            Destroy(objs[0]);
        }
        DontDestroyOnLoad(this.gameObject);
	}
}
