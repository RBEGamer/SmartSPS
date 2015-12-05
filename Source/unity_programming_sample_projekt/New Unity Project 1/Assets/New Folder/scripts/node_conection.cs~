using UnityEngine;
using System.Collections;
using UnityEngine.UI;
public class node_conection : MonoBehaviour {


	public enums.con_type connection_type;
	public enums.con_datatypes connection_datatype;
	public int connection_id = -1;
	public int associated_node;
	public int connection_position;

	public Material ln_mat;
	public int connection_destination_input_id = -1; //
	public GameObject con_text;
	private LineRenderer ln;
	// Use this for initialization

	void Awake(){
		connection_id = id_creator.get_connection_id(); //get a unique id
		ln_mat = new Material(Shader.Find("Diffuse")); //create a new material for the linerenderer
		ln_mat.SetColor("_Color", enums.get_type_color(connection_datatype)); //the the color of the line to the same of the points

	}
	void Start () {
		//SET THE TEXT
		con_text.GetComponent<Text>().text = connection_datatype.ToString().ToUpper().Replace("TYPE_", "");
		//SET NODE COLOR
		Renderer rend = this.GetComponent<Renderer>();
		rend.material.SetColor("_Color", enums.get_type_color(connection_datatype));

		if(connection_type == enums.con_type.output){
			//check if linerenderer component exists
			if(this.GetComponent<LineRenderer>() == null){
				this.gameObject.AddComponent<LineRenderer>();
			}
			ln = this.GetComponent<LineRenderer>();
			clear_bezier();
			//assign the linerenderer material
			if(ln_mat != null){
				ln.material = ln_mat;
			}else{
				ln.SetColors(enums.get_type_color(connection_datatype),enums.get_type_color(connection_datatype));
			}


		}
	}
	
	// Update is called once per frame
	void Update () {
		redraw_curve();
		this.name = "connector_" + connection_type.ToString() + "_" + associated_node.ToString() + "_" + connection_position.ToString();
	}



	public void redraw_curve(){
		//&& connection_type == enums.con_type.input
		if(connection_destination_input_id > 0 ){
			foreach (GameObject item in GameObject.FindGameObjectsWithTag("connection")) {
				if(item.GetComponent<node_conection>().connection_id == connection_destination_input_id){
				//	if(item.GetComponent<node_conection>().connection_type == enums.con_type.output){
						draw_bezier(this.gameObject.transform.position, item.gameObject.transform.position);
				//	}else{
				//		Debug.Log("input - output connection false connection direction. reset conetion from startpoint: " + connection_id.ToString());
				//		connection_destination_input_id = -1;
				//	}

				//}else{
				//	Debug.Log("connection with the same connection node. reset conetion from startpoint: " + connection_id.ToString());
				//	connection_destination_input_id = -1;
				}
			}
		}
		
			}



	public void clear_bezier(){
		if(this.GetComponent<LineRenderer>() == null){
			this.gameObject.AddComponent<LineRenderer>();
			ln = this.GetComponent<LineRenderer>();
		}
		ln.SetVertexCount(0);
	}
	//draw a smooth bezier curve between the two points
	private  void draw_bezier(Vector3 start_point, Vector3 end_point){
		int steps = 15;
		float line_width = 0.2f;
		float z_offset = start_point.z + (this.transform.localScale.z/2);
		Vector3 upperhalfpoint;
		Vector3 lowerhalfpoint;
		Vector3 middlepoint;
		//if(this.GetComponent<LineRenderer>() == null){
		//	this.gameObject.AddComponent<LineRenderer>();
			ln = this.GetComponent<LineRenderer>();
		ln.material = ln_mat;
		ln.SetWidth(line_width, line_width + 0.2f);
		//}z_offset
		ln.SetVertexCount(steps+1);
		middlepoint = start_point+end_point;
		middlepoint = new Vector3(middlepoint.x/2, middlepoint.y/2, z_offset);

		if(start_point.y > middlepoint.y){
			upperhalfpoint = new Vector3(middlepoint.x, start_point.y, z_offset);
		}else{
			upperhalfpoint = new Vector3(start_point.x, middlepoint.y, z_offset);
		}
		if(middlepoint.y > end_point.y){
			lowerhalfpoint = new Vector3(middlepoint.x, end_point.y,z_offset);
	}else{
			lowerhalfpoint = new Vector3(end_point.x, middlepoint.y,z_offset);
		}
		float t = 0.0f;
		int vertex_counter = 0;
		for (int i = 0; i < steps+1; i++) {
			//4 point bezier curve
			float poc_x = start_point.x * Mathf.Pow((1-t),3) + upperhalfpoint.x * 3 * t * Mathf.Pow((1-t),2) + lowerhalfpoint.x * 3 * Mathf.Pow(t,2) * (1-t) + Mathf.Pow(t,3) * end_point.x;
			float poc_y = start_point.y * Mathf.Pow((1-t),3) + upperhalfpoint.y * 3 * t * Mathf.Pow((1-t),2) + lowerhalfpoint.y * 3 * Mathf.Pow(t,2) * (1-t) + Mathf.Pow(t,3) * end_point.y;
			ln.SetPosition(vertex_counter, new Vector3(poc_x, poc_y, z_offset));
			t+= (1.0f/steps);
			vertex_counter++;
		}
	}
}
