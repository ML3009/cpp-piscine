#pragma once

#include <iostream>
#include <string>

template <typename T>
void	swap(T& a, T&b){
	T c;
	c = a;
	a = b;
	b = c;
}

template <typename T>
T min(const T&a, const T&b){
	return (a < b) ? a : b;
}

template <typename T>
T max(const T&a, const T&b){
	return (a > b) ? a : b;
}
