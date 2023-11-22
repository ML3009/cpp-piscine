#include "BitcoinExchange.hpp"

int main(int ac, char **av){
	if (ac != 2){
		return std::cerr << "Error: bad arguments" << std::endl
		<< "Usage: ./btc <filename.txt>" << std::endl, -1;
	}
	try {
			BitcoinExchange btc;
			btc.createDatabase();
			btc.scanFilebase(av);
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}