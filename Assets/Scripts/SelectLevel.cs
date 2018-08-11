using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class SelectLevel : MonoBehaviour {

    void OnMouseDown()
    {
        //If user clicks on screen, the lv between "" will be loaded 
        SceneManager.LoadScene("SelectLevel");

    }
}
