#pragma once
#include "base_node.h"
class node_nbdo : public base_node
{
public:
	node_nbdo(int id);
	~node_nbdo();
	void update(float timestep = 0.0f);
	void init();
	void load_node_parameters(char params[]);
private:

};


