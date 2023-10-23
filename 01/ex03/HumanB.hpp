/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:42:05 by mvautrot          #+#    #+#             */
/*   Updated: 2023/10/23 15:31:11 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {

    public:
        HumanB(std::string name);
        ~HumanB(void);
        
        void attack(void) const;
        void setWeapon(Weapon& weapon);

    private:
        std::string _name;
        Weapon* _weapon;
};



#endif
