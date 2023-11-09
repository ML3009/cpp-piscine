#include "Intern.hpp"

Intern::Intern(){
	std::cout << "Random Intern is here" << std::endl;
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
	std::cout << "Random Intern is exhausted" << std::endl;
}

AForm*	Intern::makeForm(std::string form, std::string target) {
	try{
		int	level;
		level = getForm(form);
		switch (level) {
			case PRESIDENT:
				return createPresidential(target);
			case ROBOT:
				return createRobot(target);
			case SHRUBB:
				return createShrubb(target);
			default:
				throw InternException();
		}
	}
	catch(...) {
		std::cerr << "Intern error" << std::endl;
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


/*---------- Getter / Setter ------------ */


/*--------------- Function -------------- */


/*--------------- Exception ------------- */

