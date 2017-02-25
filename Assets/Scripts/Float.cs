using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Float : MonoBehaviour {

	public GameObject player;
	public GameObject spaceship;

	void Start () {

	}
		
	/// <summary>
	/// Simulating flotation in zero gravity by generating random motion vectors
	/// </summary>
	void spaceFloat()
	{
		float distance = Vector3.Distance (player.transform.position, spaceship.transform.position);

		//Debug.Log ("distance: " + distance);

		if (distance <= 70) {
			
			Vector3 direction = new Vector3 (Random.Range (-0.5f, 0.5f), Random.Range (-0.5f, 0.5f), Random.Range (-0.5f, 0.5f));

			iTween.MoveBy (player, iTween.Hash ("position", direction, "time", 1, "easeType", "linear"));
	    }
	}

	void Update ()
	{
		spaceFloat();
	}


}
