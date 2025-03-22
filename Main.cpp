#include <cstdlib>
#include <iostream>
#include <string>	// for strings
#include <vector>	// resizable array
#include <sstream>	// manipulate strings

int main(int argc, char** argv) {

	std::cout << "Hello World\n";
	if (argc != 1) {
		std::cout << "You passed " << argc << " arguments.\n";
	}

	for (int i = 0; i < argc; i++) {
		std::cout << argv[i] << "\n";
	}

	return 0;
}