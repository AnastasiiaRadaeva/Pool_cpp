/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 15:53:15 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/16 16:02:22 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &plasma_rifle)
{
    *this = plasma_rifle;

    _name = plasma_rifle._name;
    _apcost = plasma_rifle._apcost;
    _damage = plasma_rifle._damage;
}

PlasmaRifle &PlasmaRifle::operator=(PlasmaRifle const &plasma_rifle)
{
    _name = plasma_rifle._name;
    _apcost = plasma_rifle._apcost;
    _damage = plasma_rifle._damage;

    return (*this);
}

PlasmaRifle::~PlasmaRifle()
{
}

/*
** Member functions
*/

void    PlasmaRifle::attack(void) const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
