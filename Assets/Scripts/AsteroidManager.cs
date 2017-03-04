using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AsteroidManager : MonoBehaviour {

	public GameObject poof;
	public AudioClip poofSound;
	public GameObject explosion;
	public GameObject laserBeam;

	void Start () {
		explosion.GetComponent<ParticleSystem>().enableEmission = true;

	}

	void Update()
	{

	}

	public void AsteroidUpdate () {

		GameObject cannon = GameObject.Find ("Laser Cannon");
		Transform cannonTransform = cannon.transform;


		explosion.GetComponent<ParticleSystem> ().Play();

		poof.GetComponent<AudioSource>().clip = poofSound;
		poof.GetComponent<AudioSource>().enabled = true;
		poof.GetComponent<AudioSource>().Play();

		Vector3 positionOfAsteroid = new Vector3 (this.transform.position.x,
				                            this.transform.position.y,
				                            this.transform.position.z);
		


		Vector3 positionOfCannon = new Vector3 (cannonTransform.position.x,
												cannonTransform.position.y,
												cannonTransform.position.z);



		Instantiate (poof, positionOfAsteroid, Quaternion.Euler (-90, 0, 0)); 

		(Instantiate (laserBeam, positionOfCannon, Quaternion.Euler (0, 0, 0)) as GameObject).transform.parent = cannon.transform; 


	
		Destroy (gameObject, 2.0f);

	}
}
