#include "Intern.hpp"

Intern::Intern(){
	std::cout << "\n[Intern] What can I do for you?\n" << std::endl;
}

Intern::Intern(const Intern& rhs){
	*this = rhs;
}

Intern& Intern::operator=(const Intern& rhs){

	if (this != &rhs) {
		*this = rhs;
	}
	return *this;
}

Intern::~Intern(){
	std::cout << "\n[Intern] I am leaving this internship!\n" << std::endl;
}

AForm*	Intern::makeForm(std::string form, std::string target) {
	try{
		int	level;
		level = getForm(form);
		switch (level) {
			case PRESIDENT:
				std::cout << "Intern creates " << form << std::endl;
				return createPresidential(target);
			case ROBOT:
				std::cout << "Intern creates " << form << std::endl;
				return createRobot(target);
			case SHRUBB:
				std::cout << "Intern creates " << form << std::endl;
				return createShrubb(target);
			default:
				throw InternException();
		}
	}
	catch(const Intern::InternException& e) {
		std::cerr << "Caught an exception: " << e.what() << std::endl;
	} catch (...) {
		std::cerr << "Unknow error" << std::endl;
	}
	return NULL;
}

PresidentialPardonForm*	Intern::createPresidential(std::string target) {
	return new PresidentialPardonForm(target);
}

RobotomyRequestForm*	Intern::createRobot(std::string target){
	return new RobotomyRequestForm(target);
}

ShrubberyCreationForm*	Intern::createShrubb(std::string target){
	return new ShrubberyCreationForm(target);
}

int Intern::getForm(std::string form) {

    std::string strComp[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
    for (int i = 0; i < 3; i++) {
        if (form == strComp[i])
            return i;
    }
    return -1;
}


const char* Intern::InternException::what() const throw() {
	return "Intern error!\n\n";
}


