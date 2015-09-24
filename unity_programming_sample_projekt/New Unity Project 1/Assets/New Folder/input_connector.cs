using UnityEngine;
using System.Collections;

public class input_connector : MonoBehaviour {


	public enum click_state
	{
		none, ready_to_connect, node_connection_process, node_connection_finish, add_node, remove_node
	}





	public GameObject parent;

	public int node_index_to_add = -1;
	public GameObject[] nodes;



	public click_state curr_state;
	private GameObject selected_input_node;
	private GameObject selected_output_node;
	// Use this for initialization
	void Start () {
		curr_state = click_state.ready_to_connect;
		node_index_to_add = -1;
	}

	public void toggle_add_node(int typeid){
		curr_state = click_state.add_node;
		node_index_to_add = typeid;
	}

	public void toggle_remove_node(){
		curr_state = click_state.remove_node;
	}
	// Update is called once per frame
	void Update () {
	//REMOVE NODE
		if(curr_state == click_state.remove_node){
			if(Input.GetMouseButtonDown(0)){
				Ray ray = Camera.main.ScreenPointToRay (Input.mousePosition);
				RaycastHit hit;
				if (Physics.Raycast (ray, out hit)) {
					if(hit.collider.tag == "node_bg"){
						int node_id = hit.collider.transform.parent.gameObject.GetComponent<node>().node_id;
						foreach (GameObject conid in hit.collider.transform.parent.gameObject.GetComponent<node>().node_connections) {
							foreach (GameObject item in GameObject.FindGameObjectsWithTag("connection")) {
								if(item.GetComponent<node_conection>().connection_destination_input_id == conid.GetComponent<node_conection>().connection_id || conid.GetComponent<node_conection>().connection_id == item.GetComponent<node_conection>().connection_destination_input_id){
									item.GetComponent<node_conection>().connection_destination_input_id = -1;
									item.GetComponent<node_conection>().clear_bezier();
									Debug.Log("rmv :" + item.GetComponent<node_conection>().connection_id);
								}
							}
						}
						GameObject.Find("upload_manager").GetComponent<remote_uploader>().nodes.Remove(hit.collider.transform.parent.gameObject.GetComponent<node>());
						Destroy(hit.collider.gameObject.transform.parent.gameObject);
						curr_state = click_state.ready_to_connect;
					}
				}
			}
		}



		//ADD NODE
		if(curr_state == click_state.add_node){
			if(Input.GetMouseButtonDown(0)){
				Ray ray = Camera.main.ScreenPointToRay (Input.mousePosition);
				RaycastHit hit;
				if (Physics.Raycast (ray, out hit)) {
					if(hit.collider.tag == "background"){
						GameObject tmp = null;
						if(node_index_to_add > 0){
							tmp = nodes[node_index_to_add-1];
						}
						if(tmp != null){
							tmp.GetComponent<node>().node_id = -1; //IMPORTANT THIS NEW NODE IS NOT IN THE DATABSE -> ID KOLLIDION
							tmp = (GameObject)Instantiate(tmp, new Vector3(hit.point.x,hit.point.y,0.0f), Quaternion.identity);
							tmp.transform.SetParent(parent.transform);
						}
						node_index_to_add = -1;
						curr_state = click_state.ready_to_connect;
					}
				}
			}
		}





		if(curr_state == click_state.ready_to_connect){
			if(Input.GetMouseButton(0)){
				Ray ray = Camera.main.ScreenPointToRay (Input.mousePosition);
				RaycastHit hit;
				if (Physics.Raycast (ray, out hit)) {

					if(hit.collider.tag == "node_bg"){
						RaycastHit hit1;
						float c = 0.0f;
						if (Physics.Raycast (Camera.main.ScreenPointToRay (Input.mousePosition), out hit1 ) ) {
							if(hit1.collider.gameObject.layer != 5){
								hit.collider.transform.parent.gameObject.transform.position = new Vector3(hit1.point.x, hit.point.y, 0.0f);
							//	Debug.Log(this.transform.position);
							}

							}

					}else{
						if(hit.collider.gameObject.GetComponent<node_conection>() != null && Input.GetMouseButtonDown(0)){
							if(hit.collider.gameObject.GetComponent<node_conection>().connection_type == enums.con_type.input){
								selected_input_node = hit.collider.gameObject;
								curr_state = click_state.node_connection_process;
							//	Debug.Log(selected_input_node.name);
							}else if(hit.collider.gameObject.GetComponent<node_conection>().connection_type == enums.con_type.output){
								//REMOVE CONNECTION
								int nid = hit.collider.gameObject.GetComponent<node_conection>().connection_id;
								//Debug.Log("123");
								foreach (GameObject item in GameObject.FindGameObjectsWithTag("connection")) {
									if(item.GetComponent<node_conection>().connection_destination_input_id == nid){
										item.GetComponent<node_conection>().connection_destination_input_id = -1;
										item.GetComponent<node_conection>().clear_bezier();
									}
								}

							}else{selected_input_node = null;}
						}else{selected_input_node = null;}
					}



				}//ende raycast
				//disable_all_collider();
			}//ende mousbutton
		}

		if(curr_state == click_state.node_connection_process){
			if(selected_input_node != null){
				if(Input.GetMouseButtonDown(0)){
					Ray ray = Camera.main.ScreenPointToRay (Input.mousePosition);
					RaycastHit hit;
					if (Physics.Raycast (ray, out hit)) {
						if(hit.collider.gameObject.GetComponent<node_conection>() != null){
							if(hit.collider.gameObject.GetComponent<node_conection>().connection_type == enums.con_type.output){
								if(hit.collider.gameObject != selected_input_node){
								selected_output_node = hit.collider.gameObject;
								//	Debug.Log(selected_output_node.name);
								curr_state = click_state.node_connection_finish;
								}else{selected_output_node = null;}
							}else{selected_output_node = null;}
						}else{selected_output_node = null;}
					}//ende raycast
					//disable_all_collider();
				}//ende mousbutton
			}
		}



		if(curr_state == click_state.node_connection_finish){
			//check if not the same node
			if(selected_input_node != selected_output_node && selected_input_node.GetComponent<node_conection>().associated_node != selected_output_node.GetComponent<node_conection>().associated_node){
				//check if the same datatype
				if(selected_input_node.GetComponent<node_conection>().connection_datatype == selected_output_node.GetComponent<node_conection>().connection_datatype){
					selected_input_node.GetComponent<node_conection>().connection_destination_input_id = selected_output_node.GetComponent<node_conection>().connection_id;
//					Debug.Log( selected_input_node.GetComponent<node_conection>().connection_destination_input_id + " I->O "+ selected_output_node.GetComponent<node_conection>().connection_id );

				}
				}

			curr_state = click_state.ready_to_connect;
			selected_input_node = null;
			selected_output_node = null;
		}


	}
}
