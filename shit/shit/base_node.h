#pragma once
class base_node
{
public:
	 base_node(int id);
	 base_node();
	virtual ~base_node();
	virtual void update(float timestep = 0.0f);
	virtual void init();
	bool enabled;
	bool updated_values;
	int nid;
	virtual void load_node_parameters(char params[]);
private:

};

