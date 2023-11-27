
#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(const RPN& rhs) {*this = rhs;}

RPN& RPN::operator=(const RPN& rhs) {
	if (this != &rhs){
		this->opStack = rhs.opStack;
	}
	return *this;
}

RPN::~RPN() {}

void	RPN::isValidExpr(char *av) {

	std::string str = av;
	std::stringstream exp(str);
	std::string token;
	int	op = 0;
	while (exp >> token){
		op = strtol(token.c_str(), NULL, 10);
		if (!isdigit(token[0]) && (token.size() > 1) && op != '+' && op != '-' && op != '*' && op != '/')
			throw invalidExpr();
		if (isdigit(token[0]) && op > 9)
			throw invalidExpr();
	}
	if (!isdigit(str[0]))
		throw invalidExpr();
	int	res = getResult(str);
	std::cout << res << std::endl;
	return;
}

int	RPN::getResult(std::string& str){

	std::stringstream op(str);
	std::string token;

	while (op >> token)
	{
		if (isdigit(token[0])) {
			int operand = strtol(token.c_str(), NULL, 10);
			opStack.push(operand);
		}
		else {
			int operand2 = opStack.top();
			opStack.pop();
			if (opStack.empty())
				throw invalidExpr();
			int operand1 = opStack.top();
			opStack.pop();

			switch(token[0]) {
				case '+':
					opStack.push(operand1 + operand2);
					break;
				case '-':
					opStack.push(operand1 - operand2);
					break;
				case '*':
					opStack.push(operand1 * operand2);
					break;
				case '/':
					opStack.push(operand1 / operand2);
					break;
				default:
					throw invalidExpr();
					break;
			}
		}
	}
	if (opStack.size() == 1)
		return opStack.top();
	throw invalidExpr();
}

const char*	RPN::invalidExpr::what()const throw() {
	return "Error";
}
