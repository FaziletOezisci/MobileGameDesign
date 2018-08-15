using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class PauseMenu : MonoBehaviour {


    public static bool GameIsPaused = false;

    public GameObject pauseMenuUI;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    public void Pause()
    {
        if (Time.timeScale == 1)
        {
            pauseMenuUI.SetActive(true);
            Time.timeScale = 0;
            GameIsPaused = true;
        }
        else if (Time.timeScale == 0)
        {
            pauseMenuUI.SetActive(false);
            Time.timeScale = 1;
            GameIsPaused = false;
        }
    }

    public void MainMenu()
    {
        Time.timeScale = 1;
        GameIsPaused = false;
        SceneManager.LoadScene("StartMenuScreen");

    }
}
