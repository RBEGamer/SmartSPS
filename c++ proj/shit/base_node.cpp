#include "base_node.h"


base_node::base_node() {
	nid = -1;
}


 base_node::base_node(int id)
{
	nid = id;
	enabled = true;
}

base_node::~base_node()
{
}

void base_node::update(float timestep)
{
}

void base_node::init()
{
}

void base_node::load_node_parameters(char params[])
{
}

