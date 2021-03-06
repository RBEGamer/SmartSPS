#include <iostream>
#include <ctime> //timer class 
#include <stdio.h>
#include <stdlib.h>
#include<sys/socket.h>
#include<arpa/inet.h> //inet_addr
#include<unistd.h>    //write
#include <fcntl.h>			//Used for UART
#include <termios.h>		//Used for UART
#include <string>


#include "main_node_include.h"

// 34 "
// 39 '
// 60 <
// 62 >
// 47 /
// 32 space

base_node** nodes_buffer;


namespace xml_parser {

	int node_counter = 0;

	//CHECK PASSED---------------------------------------------------------
	//get the versionstring of the start of the xml file
	std::string get_xml_version(const std::string xml_input) {
		std::string final_xml_version_string = "";
		const char *xml_version_string_begin = strstr(xml_input.c_str(), "<?xml ");
		if (xml_version_string_begin != 0) { //if
			xml_version_string_begin += 6; //remove the "<?xml "
			const char *xml_version_string_end = strstr(xml_version_string_begin, "?>");
			if (xml_version_string_end != 0) {
				std::string xml_version_string_content = "";
				xml_version_string_content.append(xml_version_string_begin, xml_version_string_end); //result: version='1.0'
				const char *xml_version_content_verion_start = strstr(xml_version_string_content.c_str(), "version=");
				if (xml_version_content_verion_start != 0) {
					xml_version_content_verion_start += 9; //remove version='
					const char *xml_content_version_end = strstr(xml_version_content_verion_start, "\"");
					if (xml_content_version_end != 0) {
						final_xml_version_string.append(xml_version_content_verion_start, xml_content_version_end);
					}
				}
			}
		}
		return final_xml_version_string;
	}
	//CHECK PASSED---------------------------------------------------------



	//CHECK PASSED---------------------------------------------------------
	//gets the content of the root node a root node is defined by <name></name>
	std::string get_xml_root_node_content(const std::string xml_input, const std::string node_name) {
		std::string schematic_content = "";
		const std::string nnbegin = "<" + node_name + ">";
		const std::string nnend = "</" + node_name + ">";
		const char* schematic_content_start = strstr(xml_input.c_str(), nnbegin.c_str());
		if (schematic_content_start != 0) {
			schematic_content_start += nnbegin.size(); //remove the <schematic>
			const char* schematic_content_end = strstr(schematic_content_start, nnend.c_str());
			if (schematic_content_end != 0) {
				schematic_content.append(schematic_content_start, schematic_content_end);
			}
		}
		return schematic_content;
	}
	//CHECK PASSED---------------------------------------------------------



	//CHECK PASSED---------------------------------------------------------
	//gets the content of all nodes with the spcified name you can process the result (xmlkvp with the callback function
	void get_element_content(const std::string xml_input, const std::string node_name, void(*callback_func)(std::string*, int)) {
		std::string element_name = "<" + node_name; //create the complete  element start name without space (" ")!!
													//count the  "<nodename " to alloc the result string array
		const char* xml_element_start_count = strstr(xml_input.c_str(), element_name.c_str());
		int array_size = 0;
		while (true) {
			xml_element_start_count = strstr(xml_element_start_count, element_name.c_str());
			if (xml_element_start_count != 0) {
				xml_element_start_count += element_name.size();
				array_size++;
			}
			else {
				break;
			}
		}

		if (array_size > 0) {
			node_counter = array_size;
			//	const int f_array_size = const_cast<const int&>(array_size);
			std::string* xml_elements_content = 0;
			xml_elements_content = new std::string[array_size];
			int array_pop_counter = 0; //counter for correct array asign
			if (xml_input.size() > 0) {
				const char* xml_element_start = strstr(xml_input.c_str(), element_name.c_str());
				while (true) {
					xml_element_start = strstr(xml_element_start, element_name.c_str());
					if (xml_element_start != 0) {
						xml_element_start += element_name.size(); //remove the <node
						const char* xml_element_end = strstr(xml_element_start, "/>");
						if (xml_element_end != 0) {
							xml_elements_content[array_pop_counter] = "";
							std::string xml_element_content = "";
							xml_element_content.append(xml_element_start, xml_element_end);
							xml_elements_content[array_pop_counter] = xml_element_content;
							callback_func(xml_elements_content, array_pop_counter);
							xml_element_start = xml_element_end + 2;
							array_pop_counter++;
						}
						else { break; }
					}
					else { break; }
				}
			}
			delete[]xml_elements_content; //delete array
		}//ende if arraysize > 0
	}
	//CHECK PASSED---------------------------------------------------------



	//CHECK PASSED---------------------------------------------------------
	//basic string replace function
	void replaceAll(std::string& str, const std::string& from, const std::string& to) {
		if (from.empty())
			return;
		size_t start_pos = 0;
		while ((start_pos = str.find(from, start_pos)) != std::string::npos) {
			str.replace(start_pos, from.length(), to);
			start_pos += to.length(); // In case 'to' contains 'from', like replacing 'x' with 'yx'
		}
	}
	//CHECK PASSED---------------------------------------------------------



	//CHECK PASSED---------------------------------------------------------
	//prepare the xml input : replace some charakters,
	void prepare_xml_input(std::string& xml_input) {
		replaceAll(xml_input, std::string(char(39), sizeof(char)), std::string(char(34), sizeof(char))); //replace " with '
		replaceAll(xml_input, "\" = \"", "\"=\"");
		replaceAll(xml_input, " = ", "=");
		replaceAll(xml_input, "> <", "><");
	}
	//in this function you can process your xml results you can define an other function with the functionpointer-parameter in the get_element_content or get_element attribute
	//CHECK PASSED---------------------------------------------------------



	//CHECK PASSED---------------------------------------------------------
	//get the key value pairs of the result from the get_element_content_function
	std::string get_element_attributes(const std::string xml_input, const std::string element_name) {
		const char* xml_element_key_start = strstr(xml_input.c_str(), element_name.c_str());
		std::string result_string = "";
		if (xml_element_key_start != 0)
		{
			xml_element_key_start += element_name.size() + 2; //to remove the emelement name + the ="
			if (xml_element_key_start != 0)
			{
				const char* xml_element_key_end = strstr(xml_element_key_start, "\"");
				if (xml_element_key_end != 0)
				{
					result_string.append(xml_element_key_start, xml_element_key_end);
					return result_string;
				}
				else {
					return "";
				}
			}
			else
			{
				return "";
			}
		}
		else {
			return "";
		}
		return "";
	}
	//CHECK PASSED---------------------------------------------------------

}



//INIT STATIC VARIABLES
std::deque<std::string> serial_management::recieve_queue = std::deque<std::string>();
std::deque<std::string> serial_management::send_queue = std::deque<std::string>();
int uart0_filestream = -1;
serialib LS;                                                            // Object of the serialib class
int Ret;                                                                // Used for return values
char Buffer[128];


void processing_serial_query(base_node* bn[]) {
	
	std::string message = serial_management::get_recieved();
	//load frome queue
	//if message exists btw 
	if (message != "") {
		for (size_t i = 0; i < (sizeof(bn) / sizeof(bn[0])); i++)
		{
			if (bn[i]->use_serial_recieve) {
				bn[i]->serial_income(message);
			}
		}
	}
	//remove query message




}

void make_connections(base_node* bn[], int bnsize, std::string _cstring) {

	base_node* obn = NULL;
	base_node* dbn = NULL;

	const char* start_cs = _cstring.c_str();
	if (start_cs == 0) { return; }
	while (true)
	{


		//WHILE BIS KEIN % MEHR VORHANDEN IST
		
		if (start_cs == 0) { break; }
		const char* end_on = strstr(start_cs, ":");
		if (end_on == 0) { break; }
		std::string origin_node_id = "";
		origin_node_id.append(start_cs, end_on);

		start_cs = end_on += 1;
		end_on = strstr(start_cs, ":");
		if (end_on == 0) { break; }
		std::string origin_node_con = "";
		origin_node_con.append(start_cs, end_on);

		start_cs = end_on += 1;
		end_on = strstr(start_cs, ":");
		if (end_on == 0) { break; }
		std::string dest_node_id = "";
		dest_node_id.append(start_cs, end_on);

		end_on += 1;
		start_cs = end_on;
		end_on = strstr(start_cs, "%");
		if (end_on == 0) { break; }
		
		std::string dest_node_con = "";
		dest_node_con.append(start_cs, end_on);

	
	
		for (size_t i = 0; i < bnsize; i++)
		{
			if (bn[i]->nid == atoi(origin_node_id.c_str())) {
				obn = bn[i];
			}
		}
		for (size_t i = 0; i < bnsize; i++)
		{
			if (bn[i]->nid == atoi(dest_node_id.c_str())) {
				dbn = bn[i];
			}
		}

		if (obn != NULL && dbn != NULL) {
			obn->set_connection(atoi(origin_node_con.c_str()), dbn, atoi(dest_node_con.c_str()));
			std::cout << "make connection for : " << origin_node_id << "-" << origin_node_con << " -> " << dest_node_id << "-" << dest_node_con << std::endl;
		}
		else {
			std::cout << "cant_ connect nodes 1" << std::endl;

		}

		start_cs = end_on + 1;
		obn = NULL;
		dbn = NULL;
	}
	free(obn);
	free(dbn);





}

int count_connections(std::string _cstring, int target_count_id) {
	int couter = 0;

	const char* start_cs = _cstring.c_str();
	if (start_cs == 0) { return 0; }
	while (true)
	{
		if (start_cs == 0) { break; }
		const char* end_on = strstr(start_cs, ":");
		if (end_on == 0) { break; }
		std::string origin_node_id = "";
		origin_node_id.append(start_cs, end_on);
		if (atoi(origin_node_id.c_str()) == target_count_id) {
			couter++;
		}
		end_on += 1;
		start_cs = end_on;
		end_on = strstr(start_cs, "%");
		if (end_on == 0) { break; }
		start_cs = end_on + 1;
	}
	return couter;
}


uint32_t getTick() {
	struct timespec ts;
	unsigned theTick = 0U;
	clock_gettime(CLOCK_REALTIME, &ts);
	theTick = ts.tv_nsec / 1000000;
	theTick += ts.tv_sec * 1000;
	return theTick;
}

std::stringstream ss;




void process_xml_nodes(std::string*  kvp, int element_count) {
	std::cout << "XML NODE CONTENT: " << kvp[element_count].c_str() << std::endl;

	int nid = -1;
	std::string  nsi = -1;
	std::string nparam = "";


	std::string result = "";
	result = xml_parser::get_element_attributes(kvp[element_count], "nid");
	if (result == "") { return; }
	nid = atoi(result);


	result = "";
	result = xml_parser::get_element_attributes(kvp[element_count], "nsi");
	if (result == "") { return; }
	nsi = result;


	result = "";
	result = xml_parser::get_element_attributes(kvp[element_count], "ncon");
	if (result == "") { return; }
	connection_string += result;


	result = "";
	result = xml_parser::get_element_attributes(kvp[element_count], "nparam");
	if (result == "") { return; }
	nparam = reuslt;


	//CHECK IF ALL DATA VALID
	switch (nsi)
	{
	case "nbdi":
		nodes_buffer[0] = new node_nbdi(nid, true, count_connections(connection_string, nid), nparam, false);  //INOPUT
		break;
	default:
		return;
		break;
	}
}




int main(int argc, char *argv[])
{

	//INIT SERIAL STUFF
	float delta_time = 0.0f; //current updatetime in loop
	bool break_update_cycle = false; //if false the programm exits
	float serial_update_timer = 0.0f;
	float serial_update_timer_max = 0.9f;
//INIT SERIAL DEVICE
	std::cout << "STARTING MAIN UPDATE LOOP" << std::endl;
	Ret = LS.Open("/dev/ttyUSB0", 9600);                                     
	if (Ret != 1) {                                                          
		printf("Error while opening port. Permission problem ?\n");        
		return Ret;                                                       
	}
	std::cout << "NODESERVER V1.2 STARTING THE SERIAL INTERFACE IS: /dev/ttyUSB0" << std::endl;
	serial_management::add_to_send_queue("0_bnid_0_SmartSPS 1.2\n");
	


	
	usleep(300);
	serial_management::add_to_send_queue("0_bndmx_4_50\n");


	xml_parser::node_counter = 0;
	std::string connection_string = "";




	//XML BIS NODES PARSEN
	std::string xml_input_string = "<?xml version=\"1.0\"?><schematic><node nid=\"1\" npos=\"-19.79573,11.62813\" nsi=\"NBDI\" ncon=\"1:0:2:0%\" nparam=\"GPIO1%\" /><node nid=\"2\" npos=\"-2.739578,2.544342\" nsi=\"NBDO\" ncon=\"\" nparam=\"GPIO2%\" /></schematic>";
	if (xml_input_string == "") { return 1; }
	std::cout << "XML RAW INPUT : " << xml_input_string.c_str() << std::endl;


	xml_parser::prepare_xml_input(xml_input_string);
	std::cout << "XML PREPARED INPUT : " << xml_input_string.c_str() << std::endl;


	std::string xml_version_string = "";
	xml_version_string = xml_parser::get_xml_version(xml_input_string);
	if (xml_version_string == "") { return 2; }
	std::cout << "XML VERSION : " << xml_version_string.c_str() << std::endl;


	std::string xml_root_node_content_string = "";
	xml_root_node_content_string = xml_parser::get_xml_root_node_content(xml_input_string, "schematic");
	if (xml_root_node_content_string == "") { return 3; }
	std::cout << "XML ROOT(SCHEMATIC) NODE CONTENT : " << xml_root_node_content_string.c_str() << std::endl;






	//NEEDED KNOWN SHIT

	int node_amount =5;

	//CREATE DYNAMIC BASENODE ARRAY TO HOLD THE SCHEMATIC
	nodes_buffer = new base_node*[xml_parser::node_counter];

	//FINAL XML PROCESSING
	xml_parser::get_element_content(xml_root_node_content_string, "node", process_xml_nodes);


	//CREATE NODE INSTANCES WITH THE SPCIFIC ID
	//<- <NID> <user_serial_recieve> <count of connections> <params> <is_static_value>
	//nodes_buffer[0] = new node_nbdi(1, true, count_connections(connection_string,1), "14%eqri%1%", false);  //INOPUT
	//nodes_buffer[1] = new node_opwemare(2, false, count_connections(connection_string, 2), "25d86d23507280aa2bc0ce79d269ebb8%2925533%sunset%", false);  //INOPUT
	//nodes_buffer[2] = new node_nbsttoi(3, false, count_connections(connection_string, 3), "", false);
	//nodes_buffer[3] = new node_ctimest(4, false, count_connections(connection_string, 4), "", false);
	//nodes_buffer[9] = new node_phhlux(7, false, count_connections(connection_string, 7), "192.168.178.38%9ee891920b34397369b895d195d4a9b%2%", false); //PHILIPS HUE LUX
	//nodes_buffer[4] = new node_tstoint(5, false, count_connections(connection_string, 5), "", false);
	//nodes_buffer[10] = new node_opwemare(11, false, count_connections(connection_string, 11), "25d86d23507280aa2bc0ce79d269ebb8%2925533%sunset%", false);

	//MAKE CONNECTION TO INSTANCES


	make_connections(nodes_buffer, node_amount, connection_string); //CREATE CONNECTIONS FOR THE INPUTNODE
	//ENABLE ALL NODES
	for (size_t i = 0; i < node_amount; i++){
		nodes_buffer[i]->init(); //dont called from constructor to be shure tha all nodes are instancieated
		nodes_buffer[i]->enabled = true;
	}


	for (size_t i = 0; i < node_amount; i++) {
		if (nodes_buffer[i]->is_value_static) {
			nodes_buffer[i]->updated_values = true;
			nodes_buffer[i]->update();
		}
	}
	//FINISH WITH LOADING NODES
	std::cout << node_amount << " NODES LOADED : SCHMEATIC SIMULATION IS STARTING" << std::endl;



	//START MAINLOOP
	std::cout << "STARTING MAIN UPDATE LOOP" << std::endl;
	while (!break_update_cycle)
	{
		//STORE TIME AT LOOP START
		int a = getTick();
	
		//UPDATE ALL NODES
		for (int i = 0; i <node_amount; i++)
		{
			if (nodes_buffer[i]->enabled && nodes_buffer[i]->nid >= 0 ) {
				nodes_buffer[i]->update(delta_time);
			}
		}
		
	
		//SEND SERIAL MESSAGE FROM QUEUE
		if (!serial_management::send_queue.empty()) {
		
			std::string msg = serial_management::get_message_to_send();
			std::cout << msg << std::endl;
			if (msg != "") {
				Ret = LS.WriteString(msg.c_str());
				usleep(100);// Send the command on the serial port
				if (Ret != 1) {                                                           // If the writting operation failed ...
					printf("Error while writing data\n");                              // ... display a message ...

				}
			}
		}
		
		// READ SERIAL MESSAGE FROM DEVICE TO SERIAL RECIEVE QUEUE
		Ret = LS.ReadString(Buffer, '\n', 128, 50);                                // Read a maximum of 128 characters with a timeout of 5 seconds
		if (Ret > 0) {
			std::cout << "recieved : " << Buffer << std::endl;
			serial_management::add_to_revieved_queue(Buffer);
		}
		//SERIAL PROCESSING STUFF -> TRANSMIT RECIEVED DATA TO ALL NODES WHO NEEDED SERIAL COMMANDS
		processing_serial_query(nodes_buffer); //process the recieved messsages
		serial_management::update();// The final character of the string must be a line feed ('\n')
		                                                          







		
	
	

	//GET TIME AND CALC DELTATIME FOR THE NEXT ITERATION
		int b = getTick();
		delta_time = (a - b)/1000;
	}






	std::cout << "LEAVING MAIN UPDATE LOOP AND CLEANUP" << std::endl;
	delete[] nodes_buffer;
	//----- CLOSE THE UART -----
	LS.Close();
	std::cout << "EXIT NODESERVER WITH EXITCODE 0" << std::endl;
	return 0;
}