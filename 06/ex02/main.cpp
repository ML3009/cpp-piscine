#include "Base.hpp"

int main(){

    Base* ptr = generate();
    Base& ref = *ptr;

    std::cout << "[ptr]" << std::endl;
    identify(ptr);
    std::cout << "[ref]" << std::endl;
    identify(ref);
    delete ptr;
    return 0;
}