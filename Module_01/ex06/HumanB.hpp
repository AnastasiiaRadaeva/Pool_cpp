/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 12:34:33 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/01 13:28:00 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
    public:

        HumanB(std::string name);
        ~HumanB();

        void    setWeapon(Weapon &weapon);
        void    attack();

    private:

        HumanB();

        std::string     _name;
        Weapon const    *_weapon;

};

#endif