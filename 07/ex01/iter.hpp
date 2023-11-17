/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:32:39 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/16 17:27:57 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

template <typename T>
void	iter(T *tab, size_t len, void (*f)(T&)){
	for (size_t i = 0; i < len; i++)
		(*f)(tab[i]);
	return;
}

template <typename T>
void	iter(const T *tab, const size_t len, void (*f)(const T&)){
	for (size_t i = 0; i < len; i++)
		(*f)(tab[i]);
	return;
}

template< typename T >
void	print(T& x){
  std::cout << x << std::endl;
  return;
}

