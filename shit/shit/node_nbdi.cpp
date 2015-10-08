#include "node_nbdi.h"

node_nbdi::node_nbdi(int id)
{
	nid = id;
}

node_nbdi::~node_nbdi()
{
}

void node_nbdi::update(float timestep)
{


	if (node_nbdi::updated_values) {
		node_nbdi::updated_values = false;
		//logic machen

		if (node_nbdi::value_input_state) {
			//SEND TO SERIAL SEND QUARRY -> PORT HIGH
			
		}
		else {
			//SEND TO SERIAL SEND QUARRY -> PORT LOW
		}

		//hier sonst alle weitren node durchgehen
	}
}

void node_nbdi::init()
{
	node_nbdi::value_input_state = false;
}

void node_nbdi::load_node_parameters(char params[])
{
}

