#pragma once
#include "base_node.h"
class node_nbdi : public base_node
{
public:
	node_nbdi(int id);
	~node_nbdi();
	void update(float timestep = 0.0f);
	void init();
	void load_node_parameters(char params[]);


	struct connection
	{
		int input_connection_id;
		int output_connection_id
		base_node::base_node& connected_node;
	};
private:

};

