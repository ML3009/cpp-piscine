/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 15:55:25 by mvautrot          #+#    #+#             */
/*   Updated: 2023/10/09 10:35:35 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> 
#include <string>

int main(int ac, char **av)
{
	int i(1), j(0);

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for(i = 1; av[i]; i++)
		{
			for(j = 0; av[i][j]; j++)
				std::cout << (char)toupper(av[i][j]);
			std::cout << " ";
		}
		std::cout << std::endl;
	}
	return 0;
}
