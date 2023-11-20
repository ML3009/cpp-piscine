#include "easyfind.hpp"

template<typename T>
void    print(T& tab){
    std::cout << "[Container of " << (int)tab.size() << " integers]: ";
    for (int i = 0; i < (int)tab.size(); i ++)
        std::cout << "[" << tab[i] << "]";
    std::cout << std::endl;
    return;
}

int main() {

    std::cout << "\e[4;32m" << "[TEST 1]" << "\e[0m" << std::endl;

    std::vector<int> tab;
    for (int i = 0; i < 10 ; i++)
        tab.push_back(i);  
    print(tab);
    try {
        if (easyfind(tab, 1) == true)
            std::cout << "Occurrence found!" << std::endl;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    try {
         if (easyfind(tab, 1) == true)
            std::cout << "Occurrence found!" << std::endl;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\e[4;32m" << "[TEST 2]" << "\e[0m" << std::endl;
    srand(time(NULL));
    std::vector<int>tab_rand;
    for (int i = 0; i < 10 ; i++)
        tab_rand.push_back(rand());  
    print(tab_rand);
    try {
        if (easyfind(tab_rand, rand()) == true)
            std::cout << "Occurrence found!" << std::endl;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    try {
        if (easyfind(tab_rand, rand()) == true)
            std::cout << "Occurrence found!" << std::endl;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;  
}