using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneChange : MonoBehaviour {

	public float waitTime;


	public void LoadNextScene()
	{
		if (SceneManager.GetActiveScene().name == "EarthMission")
		{
			StartCoroutine(WaitAndLoadScene());


		}

		if (SceneManager.GetActiveScene().name == "GravityDemo")
		{
			StartCoroutine(WaitAndLoadScene2());

		}
	}

	IEnumerator WaitAndLoadScene()
	{
		yield return new WaitForSeconds(waitTime);
		SceneManager.LoadScene("GravityDemo");
	}

	IEnumerator WaitAndLoadScene2()
	{
		yield return new WaitForSeconds(waitTime);
		SceneManager.LoadScene("EarthMission");
	}
}