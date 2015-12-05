using UnityEngine;
using System.Collections;
using UnityEngine.UI;
public class constant_bool_value : MonoBehaviour {

	public GameObject checkbox;
	public void toogle(){
		bool l = checkbox.GetComponent<Toggle>().isOn;

		if(l == true){
			this.GetComponent<Text>().text = "1";
		}else{
			this.GetComponent<Text>().text = "0";
		}


	}
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
