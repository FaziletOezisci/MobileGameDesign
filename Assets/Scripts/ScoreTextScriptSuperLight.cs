using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ScoreTextScriptSuperLight : MonoBehaviour {

	Text text;
    public static int lightAmountSuper;

    // Use this for initialization
    void Start()
    {
        text = GetComponent<Text>();
    }

    // Update is called once per frame
    void Update()
    {
        text.text = lightAmountSuper.ToString();
    }
}
