#pragma once

#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <algorithm>
#include <map>
#include <cctype>
#include <ctime>
#include <cmath>
#include <cstring>

class BitcoinExchange {
   public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& rhs);
		BitcoinExchange& operator=(const BitcoinExchange& rhs);
		~BitcoinExchange();
		void    createDatabase();
		void    scanFilebase(char **av);
		std::map<std::string, float> const&    getdataBase() const;
		void    splitBase(std::string& line);
		void    getResult(std::string& line);
		bool	isValidLine(const std::string& line) const;  
		bool	isValidDate(const std::string& line) const; 
		bool	isValidNumber(const std::string& line) const; 
		std::tm	convertDate(const std::string& line);

		class   errorEmpty : public std::exception {
			public:
				virtual const char* what() const throw ();
		};
		class   errorOpen : public std::exception {
			public:
				virtual const char* what() const throw();
		};
	private:
		std::map<std::string, float> _dataBase;
};