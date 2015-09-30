using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
public class node : MonoBehaviour {

	public List<GameObject> node_connections;
	public int node_id = -1;
	public List<GameObject> parameters;
	public string NSI;




	// Use this for initialization
	void Awake () {
		GameObject.Find("upload_manager").GetComponent<remote_uploader>().nodes.Add(this);
		if(node_id == -1){
		node_id = id_creator.get_node_id();//get unique id
		}

		foreach (GameObject n in node_connections) {
			n.GetComponent<node_conection>().associated_node = node_id; //assign all connections on this node the node id
		}
	}
	
	// Update is called once per frame
	void Update () {
	
	}



}
