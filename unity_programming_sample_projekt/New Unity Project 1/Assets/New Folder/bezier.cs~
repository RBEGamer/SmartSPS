using UnityEngine;
using System.Collections;

public class bezier : MonoBehaviour {






	// Use this for initialization
	void Start () {

	

	}

	
	public void draw_bezier(Vector3 start_point, Vector3 end_point, int steps = 20){
		 LineRenderer ln;
		float z_offset = start_point.z;
		 Vector3 upperhalfpoint;
		 Vector3 lowerhalfpoint;
		 Vector3 middlepoint;

		if(this.GetComponent<LineRenderer>() == null){
			this.gameObject.AddComponent<LineRenderer>();
		}
		ln = this.GetComponent<LineRenderer>();
		ln.SetVertexCount(steps);

		middlepoint = new Vector3(end_point.x + start_point.x,end_point.y + start_point.y, z_offset) ;
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
		for (int i = 0; i < steps; i++) {
			float poc_x = start_point.x * Mathf.Pow((1-t),3) + upperhalfpoint.x * 3 * t * Mathf.Pow((1-t),2) + lowerhalfpoint.x * 3 * Mathf.Pow(t,2) * (1-t) + Mathf.Pow(t,3) * end_point.x;
			float poc_y = start_point.y * Mathf.Pow((1-t),3) + upperhalfpoint.y * 3 * t * Mathf.Pow((1-t),2) + lowerhalfpoint.y * 3 * Mathf.Pow(t,2) * (1-t) + Mathf.Pow(t,3) * end_point.y;
			ln.SetPosition(vertex_counter, new Vector3(poc_x, poc_y, z_offset));
			t+= (1.0f/steps);
			vertex_counter++;
		}
	}
	// Update is called once per frame
	void Update () {

			
				


	}
}
