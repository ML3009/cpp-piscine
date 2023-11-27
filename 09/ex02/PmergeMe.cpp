/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:33:49 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/27 15:56:57 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"



PmergeMe::PmergeMe() : _K(5) {}

PmergeMe::PmergeMe(const PmergeMe& rhs){ *this = rhs;}

PmergeMe& PmergeMe::operator=(const PmergeMe& rhs){
	if(this != &rhs){
		this->_deque = rhs._deque;
		this->_vector = rhs._vector;
		this->_K = rhs._K;
	}
	return *this;
}

PmergeMe::~PmergeMe(){}



/*---------- Getter / Setter ------------ */


/*--------------- Function -------------- */

void	PmergeMe::isValidSeq(char **av) {
	for(int i = 1; av[i]; ++i) {
		long op = strtol(av[i], NULL, 10);
		std::string str = av[i];
		if (!isdigit(av[i][0]) || str.size() > 10 || op > INT_MAX || op < 0)
			throw invalidNumber();
		_vector.push_back(op);
		_deque.push_back(op);
	}
	std::cout << "\033[34m" << "Before: " << "\033[0m";
	print(_vector);
	clock_t _vectororTime = clock();
	sortVector(0, _vector.size() - 1);
	clock_t _vectororTimeEnd = clock();
	clock_t dequeTime = clock();
	sortDeque(0, _deque.size() - 1);
	clock_t dequeTimeEnd = clock();

	std::cout << "\033[34m" << "After: " << "\033[0m";
	print(_vector);
	std::cout << std::fixed << std::setprecision(2) << "Time to process a range of " << _vector.size() << " elements with std::_vectoror<int> _vector : " << (_vectororTimeEnd - _vectororTime) << " ms" << std::endl;
	std::cout << "Time to process a range of " << _deque.size() << " elements with std::deque<int> _deque : " << (dequeTimeEnd - dequeTime)<< " ms" << std::endl;

	return;
}

void	PmergeMe::sortVector(int start, int end) {
	if (end - start > _K) {
		int q = (start + end) / 2;
		sortVector(start, q);
		print(_vector);
		sortVector(q + 1, end);
		mergeVector(start, q, end);
		print(_vector);
	}
	else
		insertionVector(start, end);
	//return tab;
}

std::vector<int>	PmergeMe::copyVector (std::vector<int>& tab, int start, int end) {
	std::vector<int> copy;
	for (int i = start; i < end; i++) {
		copy.push_back(tab[i]);
	}
	return copy;
}


std::deque<int>	PmergeMe::copyDeque (std::deque<int>& tab, int start, int end) {
	std::deque<int> copy;
	for (int i = start; i < end; i++)
		copy.push_back(tab[i]);
	return copy;
}

void	PmergeMe::mergeVector(int start, int mid, int end){
	std::vector<int> leftVector = copyVector(_vector, start, mid + 1);
    std::vector<int> rightVector = copyVector(_vector, mid + 1, end + 1);
	int n1 = mid - start + 1;
	int n2 = end - mid;
	int right = 0;
	int left = 0;
	for (int i = start; i < end - start + 1; i++) {
		if (right == n2) {
			_vector[i] = leftVector[left];
			left++;
		}
		else if (left == n1) {
			_vector[i] = rightVector[right];
			right++;
		}
		else if (rightVector[right] > leftVector[left]) {
			_vector[i] = leftVector[left];
			left++;
		}
		else {
			_vector[i] = rightVector[right];
			right++;
		}
	}
	return;
}

void	PmergeMe::insertionVector(int start, int mid) {
	for (int i = start; i < mid; i++) {
		int value = _vector[i + 1];
		int j = i + 1;
		while (j > start && _vector[j - 1] > value) {
			_vector[j] = _vector[j - 1];
			j--;
		}
		_vector[j] = value;
	}
	return;
}


void	PmergeMe::sortDeque(int start, int end){
	if (end - start > _K) {
		int q = (start + end) / 2;
		sortDeque(start, q);
		sortDeque(q + 1, end);
		mergeDeque(start, q, end);
	}
	else
		insertionDeque(start, end);
	return;
}

void	PmergeMe::mergeDeque(int start, int mid, int end) {
	std::deque<int> leftDeque = copyDeque(_deque, start, mid + 1);
    std::deque<int> rightDeque = copyDeque(_deque, mid + 1, end + 1);
	int n1 = mid - start + 1;
	int n2 = end - mid;
	int right = 0;
	int left = 0;
	for (int i = start; i < end - start + 1; i++) {
		if (right == n2) {
			_deque[i] = leftDeque[left];
			left++;
		}
		else if (left == n1) {
			_deque[i] = rightDeque[right];
			right++;
		}
		else if (rightDeque[right] > leftDeque[left]) {
			_deque[i] = leftDeque[left];
			left++;
		}
		else {
			_deque[i] = rightDeque[right];
			right++;
		}
	}

	return;
}

void	PmergeMe::insertionDeque(int start, int mid) {
		for (int i = start; i < mid; i++) {
		int value = _deque[i + 1];
		int j = i + 1;
		while (j > start && _deque[j - 1] > value) {
			_deque[j] = _deque[j - 1];
			j--;
		}
		_deque[j] = value;
	}
	return;
}

const char*	PmergeMe::invalidNumber::what() const throw() {
	return "Error";
}


/*--------------- Exception ------------- */
