#include <iostream>
#include <ctime> //timer class 
#include "main_node_include.h"
using namespace std;

int main(int argc, char *argv[])
{
	float delta_time = 0.0f; //current updatetime in loop
	bool break_update_cycle = true; //if false the programm exits
	
	//NID		NSI		CON			PARAM
	//	1		NBDI	1:0:2:0		GPIO1 %
	//	2		NBDO					GPIO2%


	//	globaler trenner %
	//	trenner zwischen einträgen :

	

	//CREATE NODE BUFFER ARRAY
	base_node* nodes_buffer[2];
	//CREATE NODE INSTANCES WITH THE SPCIFIC ID
	nodes_buffer[0] = new node_nbdi(1);
	nodes_buffer[1] = new node_nbdo(2);
	//LOAD PARAMETERS TO INSTANCES
	nodes_buffer[0]->load_node_parameters("GPIO1%");
	nodes_buffer[1]->load_node_parameters("GPIO1%");
	//MAKE CONNECTION TO INSTANCES




	while (break_update_cycle)
	{
		clock_t begin = clock();
		//UPDATE CYCLE

		for (int i = 0; i < 2; i++)
		{
			if (nodes_buffer[i]->enabled && nodes_buffer[i]->nid >= 0) {
				nodes_buffer[i]->update(delta_time);
			}
		}

			
	

		cout << delta_time << endl;
		clock_t end = clock();
		delta_time = float(end - begin);
	}
	//nodes einlesen
	//array per anzahl erstellen
	//nodes erstellen
	//alle nodes enaben
	//alle nodes updaten mit dem bool
	//alles nodes mit updatentime versorgen

	return 0;
}