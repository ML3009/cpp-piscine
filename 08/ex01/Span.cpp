/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 09:34:05 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/24 09:35:59 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : _N(N) { }

Span::Span(const Span& rhs) { *this = rhs;}

Span&   Span::operator=(const Span& rhs) {
	if (this != &rhs){
		this->_N = rhs._N;
		this->_tab = rhs._tab;
	}
	return *this;
}

Span::~Span(){};

void    Span::addNumber(unsigned int value){
	if (_tab.size() == _N)
		throw fullSpan();
	_tab.push_back(value);
	return;
}

void Span::AddMultiNumber(){
	if (_tab.size() == _N)
		throw fullSpan();
	srand(time(NULL));
	std::vector<unsigned int>tmp;
	unsigned int size = _N - _tab.size();
	for (unsigned int i = 0; i < size; ++i)
		tmp.push_back(rand());
	_tab.insert(_tab.end(), tmp.begin(), tmp.end());
	return;
}

unsigned int    Span::shortestSpan(){

	unsigned int minDistance = longestSpan();
	std::sort(_tab.begin(), _tab.end());
	for (std::vector<unsigned int>::iterator i = _tab.begin() + 1; i != _tab.end(); ++i) {
		unsigned int distance = *i - *(i - 1);
		minDistance = std::min(minDistance, distance);
	}
	return minDistance;
}

unsigned int    Span::longestSpan(){

	if (_tab.size() <= 1)
		throw noDistance();
	Span tmp (*this);
	std::sort(tmp._tab.begin(), tmp._tab.end());
	return tmp._tab.back() - tmp._tab.front();
}

const char* Span::fullSpan::what() const throw(){
	return "Span is full!";
}

const char* Span::noDistance::what() const throw(){
	return "No distance can be found!";
}

std::vector<unsigned int> Span::getRange() const{
	return _tab;
}

void    print(std::vector<unsigned int> tab){
	std::cout << "[Container of " << (int)tab.size() << " integers]: ";
	for (int i = 0; i < (int)tab.size(); i ++)
		std::cout << "[" << tab[i] << "]";
	std::cout << std::endl;
	return;
}
