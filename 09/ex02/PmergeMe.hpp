/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:34:06 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/27 16:21:12 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <deque>
#include <sstream>
#include <climits>
#include <ctime>
#include <iomanip>

class PmergeMe{

	public:
		PmergeMe();
		PmergeMe(const PmergeMe& rhs);
		PmergeMe& operator=(const PmergeMe& rhs);
		~PmergeMe();

		class invalidNumber : public std::exception {
			public:
				virtual const char* what() const throw();
		};

		std::vector<int>	copyVector (std::vector<int>& tab, int start, int end);
		std::deque<int>	copyDeque (std::deque<int>& tab, int start, int end);

		void	isValidSeq(char **av);
		void 	sortVector(int start, int end);
		void	mergeVector(int start, int mid, int end);
		void	insertionVector(int start, int end);
		void 	sortDeque(int start, int end);
		void	mergeDeque(int start, int mid, int end);
		void	insertionDeque(int start, int mid);



	private:
		std::vector<int> _vector;
		std::deque<int> _deque;
		int	_K;

};

template<typename T>
void    print(std::vector<T> &tab){
   // std::cout << " Type : Vector\t| " ;
	std::vector<T> tmp = tab;
	for (std::vector<int>::iterator it = tmp.begin(); it != tmp.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
	return;
}

template<typename T>
void    print(std::deque<T> &tab){
    std::cout << " Type : Deque\t| ";
    std::deque<T> tmp = tab;
    while (!tmp.empty()) {
        std::cout << tmp.back() << " | ";
        tmp.pop_back();
    }
    std::cout << std::endl;
    return;
}

