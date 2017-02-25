using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SceneLogic : MonoBehaviour {

	public GameObject player;
	public GameObject startingPoint;

	// Use this for initialization
	void Start () {
		
	}

	public void startSpacewalk() {

		iTween.MoveTo (player, startingPoint.transform.position, 5f);

	}



	// Update is called once per frame
	void Update () {
		
	}
}
