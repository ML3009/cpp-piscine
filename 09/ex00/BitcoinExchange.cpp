#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& rhs) { *this = rhs;}

BitcoinExchange&    BitcoinExchange::operator=(const BitcoinExchange& rhs) {
    if (this != &rhs) {
        this->_dataBase = rhs._dataBase;
	}
    return *this;
}

BitcoinExchange::~BitcoinExchange() {};

void	BitcoinExchange::createDatabase() {
	std::string isdata("data.csv");
	if (isdata.empty())
		throw errorEmpty();
	std::ifstream database;
	database.open("data.csv");
	if (!database.is_open())
		throw errorOpen();
	std::string line;
	getline(database, line);
	while (getline(database, line)) 
		this->splitBase(line);
	database.close();	
	return;
}

const std::map<std::string, float>&	BitcoinExchange::getdataBase() const {
	return this->_dataBase;
}

void	BitcoinExchange::splitBase(std::string& line) {
	std::string tmp;
	size_t	pos = line.find(',');
	if (pos != std::string::npos) {
		tmp = line.substr(0, pos);
		line.erase(0, pos + 1);
	}
	this->_dataBase[tmp] = strtof(line.c_str(), NULL);
	return;
}

void	BitcoinExchange::scanFilebase(char **av) {
	std::string isfile(av[1]);
	if (isfile.empty())
		throw errorEmpty();
	std::ifstream file(av[1]);
	if (!file.is_open())
		throw errorOpen();
	std::string	line;
	getline(file, line);
	if (line != "date | value") {
		std::cerr << "Error: bad title" << std::endl;
		return;
	}
	while(getline(file, line)) {
		if (isValidLine(line) == true && isValidDate(line) == true && isValidNumber(line) == true)
			getResult(line);
	}
	file.close();
	return;	
}

bool	BitcoinExchange::isValidLine(const std::string& line) const {
	size_t pipePos = line.find('|');
	if (pipePos != std::string::npos && pipePos > 0 && pipePos < line.length() - 1)
		return true;
	return std::cerr << "Error: bad input => " << line <<  std::endl, false;
}

bool	BitcoinExchange::isValidDate(const std::string& line) const {
	std::istringstream date(line);
	int year, month, day;
	char one, two;
	if (date >> year >> one >> month >> two >> day && one == '-' && two == '-') {
		if ((year >= 2009 && year <= 2022) && (month >= 1 && month <= 12) && (day >= 1 && day <= 31))
			return true;
	}
	return std::cerr << "Error: bad input" << std::endl, false;
}

bool	BitcoinExchange::isValidNumber(const std::string& line) const {
	std::string tmp;
	size_t	pos = line.find('|');
	if (pos != std::string::npos) {
		tmp = line.substr(pos + 2);
	}
	float num = strtof(tmp.c_str(), NULL);
	if (num < 0) 
		return std::cerr << "Error: not a positive number." << std::endl, false;
	if (num > 1000) 
		return std::cerr << "Error: too large a number." << std::endl, false;
	return true;

}

void	BitcoinExchange::getResult(std::string& line) {
	size_t	pos = line.find('|');
	std::string tmp = line.substr(0, pos);
	std::string tmp2 = line.substr(pos + 2);
	float num = strtof(tmp2.c_str(), NULL);
	std::tm dateFile = convertDate(tmp);
	std::time_t inputTimeT = std::mktime(&dateFile);

	std::string closestDate = "";
	std::map<std::string, float>::const_iterator it;
	for (it = _dataBase.begin(); it != _dataBase.end(); ++it) {
		std::string currentDate = it->first;
		std::tm currentTime = convertDate(currentDate);
		std::time_t currentTimeT = std::mktime(&currentTime);
		if (currentTimeT > inputTimeT)
			break;
		std::tm closestTime = convertDate(closestDate);
		if (closestDate.empty() || currentTimeT > std::mktime(&closestTime)) {
			closestDate = currentDate;
		}
	}
	--it;
	std::cout << tmp << " => " << num << " = " << num * it->second << std::endl;
	return;
}

std::tm	BitcoinExchange::convertDate(const std::string& line) {
	std::tm time = {};
	std::istringstream date(line);
	date >> std::get_time(&time, "%Y-%m-%d");
	return time;
}

const char* BitcoinExchange::errorOpen::what() const throw() {
	return "Error: could not open the file";
}

const char* BitcoinExchange::errorEmpty::what() const throw() {
	return "Error: file is empty";
}
