#include "MutantStack.hpp"


int main(){
	
	std::cout << "\e[4;32m" << "[TEST : mstack]" << "\e[0m" << std::endl;
	MutantStack<int> mstack;
	std::cout << "\e[4;33m" << "[push]" << "\e[0m" << std::endl;
	mstack.push(5);
	mstack.push(17);
	print(mstack);
	std::cout << "\e[4;33m" << "[top]" << "\e[0m" << std::endl;
	std::cout << mstack.top() << std::endl;
	std::cout << "\e[4;33m" << "[pop]" << "\e[0m" << std::endl;
	mstack.pop();
	print(mstack);
	std::cout << "\e[4;33m" << "[size]" << "\e[0m" << std::endl;
	std::cout << mstack.size() << std::endl;
	std::cout << "\e[4;33m" << "[push]" << "\e[0m" << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	print(mstack);
	std::cout << "\e[4;33m" << "[iterator]" << "\e[0m" << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	std::cout << "\e[4;33m" << "[++]" << "\e[0m" << std::endl;
	++it;
	std::cout << *it << std::endl;
	std::cout << "\e[4;33m" << "[--]" << "\e[0m" << std::endl;
	--it;
	std::cout << *it << std::endl;
	std::cout << "\e[4;33m" << "[display]" << "\e[0m" << std::endl;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::cout << "\e[4;32m" << "[TEST : s (copy mstack)]" << "\e[0m" << std::endl;
	std::stack<int> s(mstack);
	std::cout << s.size() << std::endl;
	std::stack<int> tmp = s;
    std::cout << "[Stack of " << tmp.size() << " integers]: ";
    while (!tmp.empty()) {
        std::cout << "[" << tmp.top() << "]";
        tmp.pop();
    }
    std::cout << std::endl;	
	return 0;
}

/*int main(){
	MutantStack<int> mstack;
	mstack.push_back(5);
	mstack.push_back(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop_back();
	std::cout << mstack.size() << std::endl;
	mstack.push_back(3);
	mstack.push_back(5);
	mstack.push_back(737);
	//[...]
	mstack.push_back(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int, std::vector<int> > s(mstack);
	return 0;
}*/


/*int main(){
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int, std::list<int> > s(mstack);
	return 0;
}*/