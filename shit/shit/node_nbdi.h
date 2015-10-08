#pragma once
#include "base_node.h"
#include "connector.h"
class node_nbdi : public base_node
{
public:
	node_nbdi(int id);
	~node_nbdi();
	void update(float timestep = 0.0f);
	void init();
	void load_node_parameters(char params[]);
	connector connectons[1];


	//PARAMETERS
	std::string gpio_addr; // param 0
	//VALUES
	bool value_input_state; //pos 0



	//GET FLOAT;INT;BOOL;STRING;
	//SET FLOAT;INT;BOOL;STRING;

private:

};

