#include "BitcoinExchange.hpp"

int main(int ac, char **av){


	// try catch 
	if (ac != 2){
		return std::cerr << "Error: bad arguments" << std::endl
		<< "Usage: ./btc <filename.txt>" << std::endl, -1;
	}
	try {
			BitcoinExchange btc;
			btc.createDatabase();
			btc.scanFilebase(av);
			/*std::map<std::string, float>::const_iterator it;
    		for (it = btc.getdataBase().begin(); it != btc.getdataBase().end(); ++it) {
        		std::cout << "Clé : [" << it->first << "] Valeur : [" << it->second << "]" << std::endl;
   			}*/
			/*std::map<std::string, float>::const_iterator ti;
    		for (ti = btc.getfileBase().begin(); ti != btc.getfileBase().end(); ++ti) {
        		std::cout << "Clé file : [" << ti->first << "] Valeur : [" << std::fixed << std::setprecision(1) << ti->second << "]" << std::endl;
   			}*/
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	return 0;


}