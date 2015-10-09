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


	//hier serial query abfragen um zu schauen ob der port geupdated wurde


	if (node_nbdi::updated_values) {

	
		//ALLE ANDEREN NODES AUF UPDATED setzten via connection class
	}


	
}

void node_nbdi::init()
{
	node_nbdi::value_output_state = false;
}

void node_nbdi::load_node_parameters(char params[])
{
}

