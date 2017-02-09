using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RotateMars : MonoBehaviour {

	public GameObject marsParent;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {

		iTween.RotateBy(marsParent, iTween.Hash("y", 0.1f, "time", 10f, "easetype", "linear", "looptype", iTween.LoopType.loop));
	}
}
