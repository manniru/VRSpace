using UnityEngine;
using System.Collections;

public class PoofDeleter : MonoBehaviour {
	IEnumerator Start () {
		yield return new WaitForSeconds(2.0f);
		Destroy(gameObject);
	}
}

