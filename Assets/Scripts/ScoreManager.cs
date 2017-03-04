using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
using UnityEngine.SceneManagement;

public class ScoreManager : MonoBehaviour {

	public GameObject scoreUI;
	public bool earthScene;
	public GameObject win; 
	public AudioClip winSound;	

	public GameObject garbage0;
	public GameObject garbage1;
	public GameObject garbage2;
	public GameObject garbage3;
	public GameObject garbage4;
	public GameObject garbage5;
	public GameObject garbage6;
	public GameObject garbage7;
	public GameObject garbage8;
	public GameObject garbage9;

	private bool hit0 = false;
	private bool hit1 = false;
	private bool hit2 = false;
	private bool hit3 = false;
	private bool hit4 = false;
	private bool hit5 = false;
	private bool hit6 = false;
	private bool hit7 = false;
	private bool hit8 = false;
	private bool hit9 = false;

	private int total;

	void Start () {

		total = 0;
		scoreUI.GetComponent<Text>().text = "Score: 0/10";
	}

	void Update () {

		garbageIncrement();
		UpdateScore();
	}

	public int garbageIncrement()
	{

		if (garbage0 == null && hit0 == false) {
			total = total + 1;
			hit0 = true;

			//Debug.Log ("garbage0 total: " + total);
			return total;
		}

		if (garbage1 == null && hit1 == false) {
			total = total + 1;
			hit1 = true;

			//Debug.Log ("garbage1 total: " + total);
			return total;
		}

		if (garbage2 == null && hit2 == false) {
			total = total + 1;
			hit2 = true;

			//Debug.Log ("garbage2 total: " + total);
			return total;
		}

		if (garbage3 == null && hit3 == false) {
			total = total + 1;
			hit3 = true;

			//Debug.Log ("garbage3 total: " + total);
			return total;
		}

		if (garbage4 == null && hit4 == false) {
			total = total + 1;
			hit4 = true;

			//Debug.Log ("garbage4 total: " + total);
			return total;
		}

		if (garbage5 == null && hit5 == false) {
			total = total + 1;
			hit5 = true;

			//Debug.Log ("garbage5 total: " + total);
			return total;
		}

		if (garbage6 == null && hit6 == false) {
			total = total + 1;
			hit6 = true;

			//Debug.Log ("garbage6 total: " + total);
			return total;
		}

		if (garbage7 == null && hit7 == false) {
			total = total + 1;
			hit7 = true;

			//Debug.Log ("garbage7 total: " + total);
			return total;
		}

		if (garbage8 == null && hit8 == false) {
			total = total + 1;
			hit8 = true;

			//Debug.Log ("garbage8 total: " + total);
			return total;
		}

		if (garbage9 == null && hit9 == false) {
			total = total + 1;
			hit9 = true;

			//Debug.Log ("garbage9 total: " + total);
			return total;
		}

		return total;
	}

	public void UpdateScore()
	{
		try
		{

			if(scoreUI != null)
			{
				if(earthScene == true)
				{
					scoreUI.GetComponent<Text> ().text = "Score 0/10";
				}

				scoreUI.GetComponent<Text> ().text = "Score: " + total + "/10";

				//Debug.Log("Score: " + total);

				if(total == 10)
				{
					if(earthScene == true)
					{

						win.GetComponent<AudioSource>().clip = winSound;
						win.GetComponent<AudioSource> ().enabled = true;
						win.GetComponent<AudioSource>().Play();

						scoreUI.GetComponent<Text> ().text = "You Won!";
					}
					else
					{

						scoreUI.GetComponent<Text> ().text = "Going to next mission";

						StartCoroutine(WaitAndLoadScene());
					}
				}
			}
		}
		catch(Exception e) {

			//Debug.Log ("Exception in UpdateScore " + e.ToString());
		}
	}

	IEnumerator WaitAndLoadScene()
	{
		yield return new WaitForSeconds (5f);
		SceneManager.LoadScene ("EarthMission");

	}
}
