/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:32:34 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/16 17:31:53 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

class Awesome{
  public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
  private:
    int _n;
};

std::ostream& operator<<( std::ostream& o, Awesome const& rhs ){
  o << rhs.get();
  return o;
}

int main() {
  int tab[] = { 0, 1, 2, 3, 4 };
  std::string str[] = {"hi", "my", "name", "is", "ML"};
  Awesome tab2[5];

  std::cout << "\e[4;32m" << "[TEST 1: int]" << "\e[0m" << std::endl;
  iter( tab, 5, print<const int> );
  std::cout << "\n\e[4;32m" << "[TEST 2: class]" << "\e[0m" << std::endl;
  iter( tab2, 5, print<Awesome> );
  std::cout << "\n\e[4;32m" << "[TEST 3: string]" << "\e[0m" << std::endl;
  iter( str, 5, print<std::string> );
  return 0;
}
