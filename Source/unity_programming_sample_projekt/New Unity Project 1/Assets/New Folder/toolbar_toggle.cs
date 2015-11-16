using UnityEngine;
using System.Collections;

public class toolbar_toggle : MonoBehaviour {
	public bool state = false;
	public GameObject holder;
	// Use this for initialization
	void Start () {
		state =false;
		holder.SetActive(state);
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void toggle(){
		state = !state;
		holder.SetActive(state);
	}

	public void close_bar(){
		state = false;
		holder.SetActive(state);
	}

	public void open_bar(){
		state = true;
		holder.SetActive(state);
	}
}
