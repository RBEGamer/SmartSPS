using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System.Collections.Generic;
public class remote_uploader : MonoBehaviour {
	public  string trenner = "";
	public string node_con_trenner = "";
	public struct node_database_information{
		public float pos_x;
		public float pos_y;
		public int node_id;
		public string node_connections;
		public string node_parameters;
		public string NSI;
	}
	public GameObject IPFIELD;

	public GameObject click_col_blocker;
	// Use this for initialization
	void Start () {
		click_col_blocker.SetActive(false);
	}

	public  List<node> nodes;

	private List<node_database_information> db_nodes_data = new List<node_database_information>();
	public void start_upload(){
		string uploadid = System.DateTime.Now.ToLongTimeString();
		//Debug.Log("upload id:" + uploadid);
		click_col_blocker.SetActive(true);
		db_nodes_data.Clear();

		string lol = "";
		//CLEAR DB
	

		foreach (node item in nodes) {
			node_database_information tmp = new node_database_information();
			tmp.node_id = item.node_id;
			tmp.pos_x = item.gameObject.transform.position.x;
			tmp.pos_y = item.gameObject.transform.position.y;
			tmp.node_parameters = "";
			tmp.NSI = item.NSI;
			foreach (GameObject np in item.parameters) {
				tmp.node_parameters += np.GetComponent<Text>().text + "-";
			}
			tmp.node_connections = "";
			foreach (GameObject nc in item.node_connections) {
				if(nc.GetComponent<node_conection>().connection_type == enums.con_type.output){
					int conid = nc.GetComponent<node_conection>().connection_id;
					//Debug.Log("1:" + conid);
					foreach (GameObject con in GameObject.FindGameObjectsWithTag("connection")) {
						if( con.GetComponent<node_conection>().connection_destination_input_id == conid){
							int cpos = con.GetComponent<node_conection>().connection_position;
							int cnid = con.GetComponent<node_conection>().associated_node;
							string tmp_node = cnid.ToString() + "+" + cpos.ToString();
							//Debug.Log(tmp_node);
							tmp.node_connections += tmp_node + "-";
						}
					}
				}
			}

			WWWForm wwwform = new WWWForm();
		


			System.Text.Encoding encoding = new System.Text.UTF8Encoding();
			Hashtable postHeader =  new Hashtable();
			postHeader.Add("Content-Type", "text/json");
			int s = uploadid.ToString().Length + tmp.node_id.ToString().Length + tmp.pos_x.ToString().Length + tmp.pos_y.ToString().Length +tmp.node_parameters.Length +  tmp.node_connections.Length + tmp.NSI.Length;
			postHeader.Add("Content-Length", s);
			wwwform.AddField("uid", uploadid);
			wwwform.AddField("nid", tmp.node_id.ToString());
			wwwform.AddField("nx", tmp.pos_x.ToString());
			wwwform.AddField("ny", tmp.pos_y.ToString());
			wwwform.AddField("nparam", tmp.node_parameters);
			wwwform.AddField("ncon", tmp.node_connections );
			wwwform.AddField("nsi", tmp.NSI);

			WWW www = new WWW ("http://h2385854.stratoserver.net/smartsps/upload_node.php",wwwform);
			StartCoroutine (WaitForRequest (www));

			Debug.Log(wwwform);
			//GET(request_url);
			//db_nodes_data.Add(tmp);
		}
		click_col_blocker.SetActive(false);
	}
	// Update is called once per frame
	void Update () {
	
	}



	public WWW GET(string url)
	{
		
		WWW www = new WWW (url);
		StartCoroutine (WaitForRequest (www));
		return www; 
	}
	

	
	private IEnumerator WaitForRequest(WWW www)
	{
		yield return www;
		
		// check for errors
		if (www.error == null)
		{
			Debug.Log("WWW Ok!: " + www.text);
		} else {
			Debug.Log("WWW Error: "+ www.error);
		}    
	}
}
