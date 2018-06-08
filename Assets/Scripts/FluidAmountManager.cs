using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FluidAmountManager : MonoBehaviour {

    public ParticleSystem water;
    public int waterAmount = 10;

	// Update is called once per frame
	void Start () {
        water.Emit(waterAmount);
	}
}
