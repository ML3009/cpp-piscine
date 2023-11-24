/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 09:34:15 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/24 09:35:40 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <list>

template<typename T>
class MutantStack : public std::stack<T> {
	public:
		MutantStack<T>();
		MutantStack<T>(const MutantStack& rhs);
		MutantStack& operator=(const MutantStack& rhs);
		~MutantStack<T>();
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin();
		iterator end();
};

template<typename T>
MutantStack<T>::MutantStack() : std::stack<T> (){}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack& rhs) : std::stack<T>(rhs) { }

template<typename T>
MutantStack<T>&    MutantStack<T>::operator=(const MutantStack& rhs) {
	if (this != &rhs) {
		std::stack<T>::operator=(rhs);
	}
	return *this;
}

template<typename T>
MutantStack<T>::~MutantStack(){}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {
	return this->c.begin();
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() {
	return this->c.end();
}

template<typename T>
void    print(const MutantStack<T> &tab){
	std::stack<T> tmp = tab;
	 std::cout << "[Stack of " << tmp.size() << " integers]: ";
	while (!tmp.empty()) {
		std::cout << "[" << tmp.top() << "]";
		tmp.pop();
	}
	std::cout << std::endl;
	return;
}





