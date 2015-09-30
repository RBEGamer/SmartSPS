using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System.Collections.Generic;
using System.Xml;
using System.IO;

public class remote_uploader : MonoBehaviour
{
	public  string trenner = "";
	public string node_con_trenner = "";
	public struct node_database_information
	{
		public float pos_x;
		public float pos_y;
		public int node_id;
		public string node_connections;
		public string node_parameters;
		public string NSI;
	}
	public GameObject IPFIELD;
	public GameObject SLOT_FIELD;
	public GameObject click_col_blocker;
	// Use this for initialization
	void Start ()
	{
		click_col_blocker.SetActive (false);
	}

	public  List<node> nodes;

	//private List<node_database_information> db_nodes_data = new List<node_database_information>();
	public void start_upload ()
	{

		WWW lol1 = GET ("http://h2385854.stratoserver.net/smartsps/clear_db.php?schid=" + (SLOT_FIELD.GetComponent<Dropdown> ().value + 1).ToString ());
		//Debug.Log(lol1.text);

		string uploadid = System.DateTime.Now.ToLongTimeString ();
		//Debug.Log("upload id:" + uploadid);
		click_col_blocker.SetActive (true);
		//db_nodes_data.Clear();
		string lol = "";
		//CLEAR DB
		foreach (node item in nodes) {
			node_database_information tmp = new node_database_information ();
			tmp.node_id = item.node_id;
			tmp.pos_x = item.gameObject.transform.position.x;
			tmp.pos_y = item.gameObject.transform.position.y;
			tmp.node_parameters = "";
			tmp.NSI = item.NSI;
			foreach (GameObject np in item.parameters) {
				tmp.node_parameters += np.GetComponent<Text> ().text + trenner;
			}
			tmp.node_connections = "";
			foreach (GameObject nc in item.node_connections) {
				//if(nc.GetComponent<node_conection>().connection_type == enums.con_type.output){
				int conid = nc.GetComponent<node_conection> ().connection_position;
				//Debug.Log("1:" + conid);
				foreach (GameObject con in GameObject.FindGameObjectsWithTag("connection")) {
					if (con.GetComponent<node_conection> ().connection_destination_input_id == nc.GetComponent<node_conection> ().connection_id) {
						int cpos = con.GetComponent<node_conection> ().connection_position;
						int cnid = con.GetComponent<node_conection> ().associated_node;
						string tmp_node =item.node_id.ToString() + node_con_trenner + conid.ToString () + node_con_trenner + cnid.ToString () + node_con_trenner + cpos.ToString (); //-> 2:0:1:0
						//Debug.Log(tmp_node);
						tmp.node_connections += tmp_node + trenner;
					}
				}
				//}
			}
			WWWForm wwwform = new WWWForm ();
			System.Text.Encoding encoding = new System.Text.UTF8Encoding ();
			Hashtable postHeader = new Hashtable ();
			postHeader.Add ("Content-Type", "text/json");
			int s = uploadid.ToString ().Length + tmp.node_id.ToString ().Length + tmp.pos_x.ToString ().Length + tmp.pos_y.ToString ().Length + tmp.node_parameters.Length + tmp.node_connections.Length + tmp.NSI.Length;
			postHeader.Add ("Content-Length", s);
			wwwform.AddField ("uid", uploadid);
			wwwform.AddField ("nid", tmp.node_id.ToString ());
			wwwform.AddField ("nx", tmp.pos_x.ToString ());
			wwwform.AddField ("ny", tmp.pos_y.ToString ());
			wwwform.AddField ("nparam", tmp.node_parameters);
			wwwform.AddField ("ncon", tmp.node_connections);
			wwwform.AddField ("nsi", tmp.NSI);
			wwwform.AddField ("schid", (SLOT_FIELD.GetComponent<Dropdown> ().value + 1).ToString ());
			WWW www = new WWW ("http://h2385854.stratoserver.net/smartsps/upload_node.php", wwwform);
			StartCoroutine (WaitForRequest (www));
			//Debug.Log(wwwform);
			//GET(request_url);
			//db_nodes_data.Add(tmp);
		}
		click_col_blocker.SetActive (false);
	}

	public GameObject input_manager;
	public GameObject node_parent;

	public void start_load ()
	{

		click_col_blocker.SetActive (true);
		foreach (node item in nodes) {
			Destroy (item.gameObject);
		}
		nodes.Clear ();

		WWWForm wwwform = new WWWForm ();
		System.Text.Encoding encoding = new System.Text.UTF8Encoding ();
		Hashtable postHeader = new Hashtable ();
		postHeader.Add ("Content-Type", "text/json");
		int s = 10;
		postHeader.Add ("Content-Length", s);
		wwwform.AddField ("schid", (SLOT_FIELD.GetComponent<Dropdown> ().value + 1).ToString ());
		WWW www = new WWW ("http://h2385854.stratoserver.net/smartsps/get_schematic.php", wwwform);
		StartCoroutine (WaitForRequest (www));
	

		float t = 0.0f;
		while (!www.isDone) {
		//	Debug.Log ("Downloading XML DataSet: " + t.ToString ());
			t += Time.deltaTime;
			if (t > 60) {
				break;
			}
		}


//		StringReader textreader = new StringReader (www.text);
		XmlReader xml_reader = new XmlTextReader ("http://h2385854.stratoserver.net/smartsps/get_schematic.php?schid=" + (SLOT_FIELD.GetComponent<Dropdown> ().value + 1).ToString ());
		List<node_database_information> ndi = new List<node_database_information> ();
		while (xml_reader.Read()) {
			if (xml_reader.IsStartElement ("node")) {
				// get attributes from npc tag
				node_database_information tmp = new node_database_information ();
				tmp.node_id = int.Parse (xml_reader.GetAttribute ("nid"));
				tmp.NSI = xml_reader.GetAttribute ("nsi");
				string pos = xml_reader.GetAttribute ("npos");
				tmp.pos_x = float.Parse (pos.Split (',') [0]);
				tmp.pos_y = float.Parse (pos.Split (',') [1]);
				tmp.node_connections = xml_reader.GetAttribute ("ncon");
				tmp.node_parameters = xml_reader.GetAttribute ("nparam");
				ndi.Add (tmp);
				//Debug.Log ("load node : " + tmp.node_id);
			}
		}

		//Debug.Log (ndi.Count + " Nodes loaded");
		//instanziate them
		for (int j = 0; j < ndi.Count; j++) {
			for (int i = 0; i < input_manager.GetComponent<input_connector>().nodes.Length; i++) {
				//Debug.Log(ndi[j].NSI);
				if (input_manager.GetComponent<input_connector> ().nodes [i].gameObject.GetComponent<node> ().NSI == ndi [j].NSI) {
					GameObject tmp_to_add = input_manager.GetComponent<input_connector> ().nodes [i].gameObject;
					tmp_to_add.GetComponent<node>().node_id = ndi [j].node_id;
					GameObject tmp = (GameObject)Instantiate (tmp_to_add, new Vector3 (ndi [j].pos_x, ndi [j].pos_y, 0.0f), Quaternion.identity);
					tmp.transform.SetParent (node_parent.transform);
				}
			}
		}



		float t1 = 0.0f;
		while (true) {
			//	Debug.Log ("Downloading XML DataSet: " + t.ToString ());
			t1 += Time.deltaTime;
			if (t1 > 5.0f) {
				break;
			}
		}



		//make konnections
		for (int k = 0; k < ndi.Count; k++) {
			string con_raw = ndi[k].node_connections;
			if(con_raw != ""){
			string[] con_split = con_raw.Split(trenner.ToCharArray());
			//	Debug.Log(	"123123    " + con_split.Length);
			for (int i = 0; i < con_split.Length; i++) {
					if(con_split[i] == ""){break;}
				string[] con_att = con_split[i].Split(node_con_trenner.ToCharArray());
				int source_node_id = int.Parse (con_att[0]);
				int source_connection_position = int.Parse (con_att[1]);
				int dest_node_id = int.Parse(con_att[2]);
				int dest_connection_position = int.Parse(con_att[3]);
				Debug.Log(source_node_id + "-" + source_connection_position + " nach " + dest_node_id + "-" + dest_connection_position);
					//source connecion suchen
					foreach (GameObject con in GameObject.FindGameObjectsWithTag("connection")) {
						if(con.GetComponent<node_conection>().associated_node == source_node_id && con.GetComponent<node_conection>().connection_position == source_connection_position){
							Debug.Log("1");
							//DEST CONNECTION SUCHEN
							foreach (GameObject dcon in GameObject.FindGameObjectsWithTag("connection")) {
								if(dcon.GetComponent<node_conection>().associated_node == dest_node_id && dcon.GetComponent<node_conection>().connection_position == dest_connection_position){
									Debug.Log("2");
									dcon.GetComponent<node_conection>().connection_destination_input_id = con.GetComponent<node_conection>().connection_id;
									dcon.GetComponent<node_conection>().redraw_curve();
								}
							}
						}
					}
			}
			}//ende con != ""
		}



		//SET PARAMETERS
		for (int l = 0; l < ndi.Count; l++) {
			string param_raw = ndi[l].node_parameters;
			if(param_raw != ""){
				string[] param_split = param_raw.Split(trenner.ToCharArray());
				int nid = ndi[l].node_id;
				Debug.Log("pl " +  param_split.Length);
				for (int m = 0; m < nodes.Count; m++) {
					if(nodes[m].node_id == nid){
						for (int n = 0; n < nodes[m].parameters.Count; n++) {
							nodes[m].parameters[n].GetComponent<Text>().text = param_split[n];	
						}
					}
				}
			}
		}
		

		click_col_blocker.SetActive (false);
	}




	public void clear_field(){
		foreach (node item in nodes) {
			Destroy (item.gameObject);
		}
		nodes.Clear ();
	}

	public void clear_db(){
		WWW lol1 = GET ("http://h2385854.stratoserver.net/smartsps/clear_db.php?schid=" + (SLOT_FIELD.GetComponent<Dropdown> ().value + 1).ToString ());

	}
	// Update is called once per frame
	void Update ()
	{
	
	}

	public WWW GET (string url)
	{
		
		WWW www = new WWW (url);
		StartCoroutine (WaitForRequest (www));
		return www; 
	}
	
	public WWW POST (string url, WWWForm data)
	{
		WWW www = new WWW (url, data);
		StartCoroutine (WaitForRequest (www));
		return www; 
	}
	
	private IEnumerator WaitForRequest (WWW www)
	{
		yield return www;
		
		// check for errors
		if (www.error == null) {
			Debug.Log ("WWW Ok!: " + www.text);
		} else {
			Debug.Log ("WWW Error: " + www.error);
		}    
	}
}
