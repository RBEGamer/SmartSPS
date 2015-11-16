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

//namespace xml_parser {
//	//struct to store a key value pair
//	struct xml_kvp
//	{
//		std::string key;
//		std::string value;
//	};
//	//get the versionstring of the start of the xml file
//	std::string get_xml_version(std::string xml_input) {
//		std::string final_xml_version_string = "";
//		const char *xml_version_string_begin = strstr(xml_input.c_str(), "<?xml ");
//		if (xml_version_string_begin != 0) { //if
//			xml_version_string_begin += 6; //remove the "<?xml "
//			const char *xml_version_string_end = strstr(xml_version_string_begin, "?>");
//			if (xml_version_string_end != 0) {
//				std::string xml_version_string_content = "";
//				xml_version_string_content.append(xml_version_string_begin, xml_version_string_end); //result: version='1.0'
//				const char *xml_version_content_verion_start = strstr(xml_version_string_content.c_str(), "version=");
//				if (xml_version_content_verion_start != 0) {
//					xml_version_content_verion_start += 9; //remove version='
//					const char *xml_content_version_end = strstr(xml_version_content_verion_start, "'");
//					if (xml_content_version_end != 0) {
//						final_xml_version_string.append(xml_version_content_verion_start, xml_content_version_end);
//					}
//				}
//			}
//		}
//		return final_xml_version_string;
//	}
//	//gets the content of the root node a root node is defined by <name></name>
//	std::string get_xml_root_node_content(std::string xml_input, std::string node_name) {
//		std::string schematic_content = "";
//		const std::string nnbegin = "<" + node_name + ">";
//		const std::string nnend = "</" + node_name + ">";
//		const char* schematic_content_start = strstr(xml_input.c_str(), nnbegin.c_str());
//		if (schematic_content_start != 0) {
//			schematic_content_start += nnbegin.size(); //remove the <schematic>
//			const char* schematic_content_end = strstr(schematic_content_start, nnend.c_str());
//			if (schematic_content_end != 0) {
//				schematic_content.append(schematic_content_start, schematic_content_end);
//			}
//		}
//		return schematic_content;
//	}
//	//gets the content of all nodes with the spcified name you can process the result (xmlkvp with the callback function
//	void get_element_content(std::string xml_input, std::string node_name, void(*callback_func)(xml_kvp*, int)) {
//		std::string element_name = "<" + node_name; //create the complete  element start name without space (" ")!!
//		//count the  "<nodename " to alloc the result string array
//		const char* xml_element_start_count = strstr(xml_input.c_str(), element_name.c_str());
//		int array_size = 0;
//		while (true) {
//			xml_element_start_count = strstr(xml_element_start_count, element_name.c_str());
//			if (xml_element_start_count != 0) {
//				xml_element_start_count += element_name.size();
//				array_size++;
//			}else {
//				break;
//			}
//		}
//
//		if (array_size > 0) {
//		//	const int f_array_size = const_cast<const int&>(array_size);
//			std::string *xml_elements_content = 0;
//			xml_elements_content = new std::string[array_size];
//			
//			int array_pop_counter = 0; //counter for correct array asign
//			if (xml_input.size() > 0) {
//				const char* xml_element_start = strstr(xml_input.c_str(), element_name.c_str());
//				while (true) {
//					xml_element_start = strstr(xml_element_start, element_name.c_str());
//					if (xml_element_start != 0) {
//						xml_element_start += element_name.size(); //remove the <node
//						const char* xml_element_end = strstr(xml_element_start, "/>");
//						if (xml_element_end != 0) {
//							xml_elements_content[array_pop_counter] = "";
//							std::string xml_element_content = "";
//							xml_element_content.append(xml_element_start, xml_element_end);
//							xml_elements_content[array_pop_counter] = xml_element_content;
//							xml_element_start = xml_element_end + 2; 
//							array_pop_counter++;
//						}
//						else { break; }
//					}
//					else { break; }
//				}
//			}
//
//
//
//
//
//			//PARSE THE RESULTARRAY and call the callback function
//			for (size_t i = 0; i <array_size; i++)
//			{
//				const char* xml_element_start_count = strstr(xml_elements_content[i].c_str(), "'='");
//				//count the amount of kv pairs in the element to instanziate the resultarray
//				int array_size = 0;
//				while (true) {
//					xml_element_start_count = strstr(xml_element_start_count, "'='"); //count every "'='"
//					if (xml_element_start_count != 0) {
//						xml_element_start_count += element_name.size();
//						array_size++;
//					}else {
//						break;
//					}
//				}
//				
//				if (array_size > 0) {
//					//TODO:DEBUG IT
//					const int* t = &array_size;
//					xml_kvp werr[2];
//					xml_kvp* lauf = werr;
//
//					const char* xml_element_key_start = strstr(xml_elements_content[i].c_str(), " ");
//					while (true) {
//						if (xml_element_key_start != 0) {
//							xml_element_key_start += 1; //remove the " "
//							const char* xml_element_key_end = strstr(xml_element_key_start, "=");
//							if (xml_element_key_end != 0) {
//								std::string xml_element_key = "";
//								xml_element_key.append(xml_element_key_start, xml_element_key_end);
//								xml_element_key_end += 2; //to remove the ='
//								const char* xml_element_value_end = strstr(xml_element_key_end, "'");
//								if (xml_element_value_end != 0) {
//									std::string xml_element_value = "";
//									xml_element_value.append(xml_element_key_end, xml_element_value_end); //store only the text between the two pointers in the resultstring
//									lauf->value = xml_element_value; //store the element value in the resultarray
//									lauf->key = xml_element_key;//store the element key int the resultarray
//									xml_element_key_start = xml_element_value_end; // set the content startpointer to the next element start position
//									lauf++; //increase the result pointer to add the next kv elements on the right position
//								}
//								else { break; }
//							}
//							else { break; }
//						}
//						else { break; }
//					}
//					callback_func(lauf, array_size); //CALL THE CALLBACKFUNCTION
//					delete lauf; //delete array pointer
//				}
//			}
//		delete []xml_elements_content; //delete array
//	}//ende if arraysize > 0
//}
//	//get the key value pairs of the result from the get_element_content_function
//	void get_element_attributes(std::string xml_input, void(*_callback_func)(xml_kvp)) {
//		const char* xml_element_key_start = strstr(xml_input.c_str(), " ");
//		while (true) {
//			if (xml_element_key_start != 0) {
//				xml_element_key_start += 1; //remove the " "
//				const char* xml_element_key_end = strstr(xml_element_key_start, "=");
//				if (xml_element_key_end != 0) {
//					std::string xml_element_key = "";
//					xml_element_key.append(xml_element_key_start, xml_element_key_end);
//					xml_element_key_end += 2; //to remove the ='
//					const char* xml_element_value_end = strstr(xml_element_key_end, "'");
//					if (xml_element_value_end != 0) {
//						std::string xml_element_value = "";
//						xml_element_value.append(xml_element_key_end, xml_element_value_end);
//						xml_kvp wmlxml;
//						wmlxml.value = xml_element_value;
//						wmlxml.key = xml_element_key;
//						_callback_func(wmlxml); //CALL THE CALLBACKFUNCTION
//						xml_element_key_start = xml_element_value_end;
//					}
//					else { break; }
//				}
//				else { break; }
//			}
//			else { break; }
//		}
//	}
//	//basic string replace function
//	void replaceAll(std::string& str, const std::string& from, const std::string& to) {
//		if (from.empty())
//			return;
//		size_t start_pos = 0;
//		while ((start_pos = str.find(from, start_pos)) != std::string::npos) {
//			str.replace(start_pos, from.length(), to);
//			start_pos += to.length(); // In case 'to' contains 'from', like replacing 'x' with 'yx'
//		}
//	}
//	//prepare the xml input : replace some charakters,
//	void prepare_xml_input(std::string& xml_input) {
//		replaceAll(xml_input, std::string(char(39), sizeof(char)), std::string(char(34), sizeof(char))); //replace " with '
//		replaceAll(xml_input, "' = '", "'='");
//		replaceAll(xml_input, " = ", "=");
//		replaceAll(xml_input, "> <", "><");
//	}
//	//in this function you can process your xml results you can define an other function with the functionpointer-parameter in the get_element_content or get_element attribute
//	void process_xml_nodes(xml_parser::xml_kvp *kvp, int element_count) {
//	//in the kvp pointer are the key values pairs stored there are readed from a node element
//	//the size of the pointer array is stored in the element_count array
//	}
//
//}
//
//
//void process_xml_nodes(xml_parser::xml_kvp *kvp, int element_count) {
//
//	
//
//
//}


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
	
	//NEEDED KNOWN SHIT
	std::string connection_string = "1:0:2:0%2:1:3:0%4:0:5:0%";
	int node_amount =5;

	//CREATE DYNAMIC BASENODE ARRAY TO HOLD THE SCHEMATIC
	base_node** nodes_buffer = new base_node*[node_amount];
	//CREATE NODE INSTANCES WITH THE SPCIFIC ID
	//<- <NID> <user_serial_recieve> <count of connections> <params> <is_static_value>

	nodes_buffer[0] = new node_nbdi(1, true, count_connections(connection_string,1), "14%eqri%1%", false);  //INOPUT
	nodes_buffer[1] = new node_opwemare(2, false, count_connections(connection_string, 2), "25d86d23507280aa2bc0ce79d269ebb8%2925533%sunset%", false);  //INOPUT
	nodes_buffer[2] = new node_nbsttoi(3, false, count_connections(connection_string, 3), "", false);

	nodes_buffer[3] = new node_ctimest(4, false, count_connections(connection_string, 4), "", false);
	//nodes_buffer[9] = new node_phhlux(7, false, count_connections(connection_string, 7), "192.168.178.38%9ee891920b34397369b895d195d4a9b%2%", false); //PHILIPS HUE LUX
	nodes_buffer[4] = new node_tstoint(5, false, count_connections(connection_string, 5), "", false);

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