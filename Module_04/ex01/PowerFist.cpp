/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 16:04:33 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/16 16:08:33 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{
}

PowerFist::PowerFist(PowerFist const &power_fist)
{
    *this = power_fist;

    _name = power_fist._name;
    _apcost = power_fist._apcost;
    _damage = power_fist._damage;
}

PowerFist &PowerFist::operator=(PowerFist const &power_fist)
{
    _name = power_fist._name;
    _apcost = power_fist._apcost;
    _damage = power_fist._damage;

    return (*this);
}

PowerFist::~PowerFist()
{
}

/*
** Member functions
*/

void    PowerFist::attack(void) const
{
    std::cout << "* pschhh... SBAM! *" << std::endl;
}
