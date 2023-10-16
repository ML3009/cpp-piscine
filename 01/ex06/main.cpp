#include "Harl.hpp"

int main(int ac, char **av) {

    Harl    harl;
    int     level;

    if (ac != 2)
        return std::cout << "usage: ./HarlFilter <LEVEL>" << std::endl, -1;
    
    level = harl.getLevel(av[1]);
    switch (level) {
        case DEBUG:
            harl.complain("DEBUG");
        case INFO:
            harl.complain("INFO");
        case WARNING:
            harl.complain("WARNING");
        case ERROR:
            harl.complain("ERROR");
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
    return 0;
}