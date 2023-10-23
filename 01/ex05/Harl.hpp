/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 10:06:48 by mvautrot          #+#    #+#             */
/*   Updated: 2023/10/23 15:32:15 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>

class Harl {

    public:

        Harl(void);
        ~Harl(void);
        
        void complain(std::string level);

    private:

        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
};




#endif
