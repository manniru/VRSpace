using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Garbage : MonoBehaviour {

	public GameObject poof;
	public AudioClip poofSound;	

	void Start () {

	}
		
	void Update () {

	}

	public void OnTrashClicked() {

		poof.GetComponent<AudioSource>().clip = poofSound;
		poof.GetComponent<AudioSource> ().enabled = true;
		poof.GetComponent<AudioSource>().Play();

		// instantiate the 'poof' where this 'space trash' is located
		// make sure the poof animates vertically
		Vector3 positionOfTrash = new Vector3 (this.transform.position.x,
			this.transform.position.y,
			this.transform.position.z);
		
		Instantiate(poof, positionOfTrash, Quaternion.Euler(-90,0,0)); 

		// destroy the object trash
		Destroy (gameObject);

	
	}

}
