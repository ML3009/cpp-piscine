/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 10:58:39 by mvautrot          #+#    #+#             */
/*   Updated: 2023/10/23 15:32:21 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>

enum {
    DEBUG,
    INFO,
    WARNING,
    ERROR
};

class Harl {

    public:
        Harl(void);
        ~Harl(void);

        void complain(std::string level);
        int getLevel(std::string level);

    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
};




#endif
