// This file is dedicated for lesson 2: Conditions, arrays, vectors, strings, loops

#include <cstdlib>
#include <iostream>
#include <string>	// for strings
#include <vector>	// resizable array
#include <sstream>	// manipulate strings
#include "limits"	// min max values for data types

std::string Conditions() {
	// Get age as a string
	std::string sAge = "0";
	std::cout << "Enter your age: ";
	getline(std::cin, sAge);
	std::string sMessage = "";
	// Convert string to integer
	int nAge = std::stoi(sAge);

	if ((nAge >= 1) && (nAge <= 18)) {
		sMessage = "Important Birthday!\n";
	} else if((nAge == 21) || (nAge == 50)){
		sMessage = "Important Birthday!\n";
	}
	else if ((nAge >= 65)) {
		sMessage = "Important Birthday!\n";
	}
	else {
		sMessage = "Not an important Birthday!\n";
	}

	return sMessage;
}