using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneChange : MonoBehaviour {
	public void GoToScene(){

		if (SceneManager.GetActiveScene().name == "EarthMission")
		{
			SceneManager.LoadScene("GravityDemo");
		}

		if (SceneManager.GetActiveScene().name == "GravityDemo")
		{
			SceneManager.LoadScene("EarthMission");
		}
	}
}