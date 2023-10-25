/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:41:52 by mvautrot          #+#    #+#             */
/*   Updated: 2023/10/25 10:34:14 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"


class HumanA {

    public:
        HumanA(std::string name, Weapon& weapon);
        ~HumanA(void);

        void attack(void) const;

    private:
        std::string _name;
        Weapon& _weapon;
};


#endif
