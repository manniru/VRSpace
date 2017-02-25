using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DennisGravMan : MonoBehaviour {

	// Use this for initialization	
	void Start () {
		GameObject[] Objects = GameObject.FindGameObjectsWithTag ("Planet");
		GameObject Spaceship = GameObject.FindGameObjectWithTag ("SpaceShip");

		//the gravity between each couple of object is calculated
		foreach (GameObject ObjectA in Objects) 
		{
			ObjectA.GetComponent<Rigidbody>().AddForce(new Vector3(10,10,0));

		}

		//gravity for the spaceship
		//Modified by Olga on 02/21/2017
		//I am restricting this to the x axis so the spaceship doesn't spin so much
		Spaceship.GetComponent<Rigidbody> ().AddForce (new Vector3 (50, 0, 0));

	}

	void ApplyGravity(Rigidbody A, Rigidbody B)
	{
		//This is how to get the distance vector between two objects.
		Vector3 dist = B.transform.position - A.transform.position; 
		float r = dist.magnitude;
		dist /= r;

		//This is the Newton's equation
		//G = 6.67 * 10^-11 N.m².kg^-2
		double G =  6.674f * (10 ^ 11);
		float force = ((float)G * A.mass * B.mass) / (r * r);

		//Then, just apply the forces
		A.AddForce (dist * force);
		B.AddForce (-dist * force);
	}

	void FixedUpdate ()
	{
		//Get every object 
		GameObject[] Objects = GameObject.FindGameObjectsWithTag ("Planet");
		GameObject Spaceship = GameObject.FindGameObjectWithTag ("SpaceShip");

		//the gravity between each couple of object is calculated

		foreach (GameObject o in Objects) {
			ApplyGravity (o.GetComponent<Rigidbody> (), Spaceship.GetComponent<Rigidbody> ());
		}
		/*
		foreach (GameObject ObjectA in Objects) {
			foreach (GameObject ObjectB in Objects) {
				//Objects must not self interact 
				if (ObjectA == ObjectB)
					continue;

				ApplyGravity (ObjectA.GetComponent<Rigidbody> (), ObjectB.GetComponent<Rigidbody> ());
			} 
		} */
	}	
}

