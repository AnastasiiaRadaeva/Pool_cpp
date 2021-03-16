/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SonicScrewdriver.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 23:54:25 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/16 17:27:56 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SonicScrewdriver.hpp"

SonicScrewdriver::SonicScrewdriver() : AWeapon("Sonic Screwdriver", 3, 15)
{
}

SonicScrewdriver::SonicScrewdriver(SonicScrewdriver const &sonic_screwdriver)
{
    *this = sonic_screwdriver;

    _name = sonic_screwdriver._name;
    _apcost = sonic_screwdriver._apcost;
    _damage = sonic_screwdriver._damage;
}

SonicScrewdriver &SonicScrewdriver::operator=(SonicScrewdriver const &sonic_screwdriver)
{
    _name = sonic_screwdriver._name;
    _apcost = sonic_screwdriver._apcost;
    _damage = sonic_screwdriver._damage;

    return (*this);
}

SonicScrewdriver::~SonicScrewdriver()
{
}

/*
** Member functions
*/

void    SonicScrewdriver::attack(void) const
{
    std::cout << "* iiiiiiiiiiiiiiiiiiiiiiiiiiiiiii *" << std::endl;
}
