#pragma once
#include "base_node.h"
#include "connector.h"
#include <iostream>
class node_nbdo : public base_node
{
public:
	node_nbdo(int id);
	~node_nbdo();
	void update(float timestep = 0.0f);
	void init();
	void load_node_parameters(char params[]);
	connector connectons[1];
	char parameters[1];

	bool value_input_state; //pos 0


							
	void set_value(int position, float value);
	void set_value(int position, int value);
	void set_value(int position, bool value);
	void set_value(int position, std::string value);

	float get_value_f(int position);
	int get_value_i(int position);
	bool get_value_b(int position);
	std::string get_value_s(int position);

private:

};


