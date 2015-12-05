using UnityEngine;
using System.Collections;

public class enums : MonoBehaviour {


	public enum con_type{
		none, input, output
	}

	public enum con_datatypes{
		type_int, type_bool, type_float, type_string
	}


	public static Color get_type_color( con_datatypes t){
		Color ctmp;
		switch (t) {
		case con_datatypes.type_int: ctmp =  new Color(91/255.0f, 183/255.0f, 148/255.0f);break;
		case con_datatypes.type_bool: ctmp = new Color(248/255.0f, 91/255.0f, 91/255.0f);break;
		case con_datatypes.type_float: ctmp = new Color(91/255.0f, 248/255.0f, 105/255.0f);break;
		case con_datatypes.type_string: ctmp = new Color(248/255.0f, 224/255.0f, 91/255.0f);break;
		default:
			ctmp = new Color(0/255.0f, 0/255.0f, 0/255.0f);
			break;
		}
		return ctmp;
	}
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
