/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 16:37:54 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/16 16:44:20 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &super_mutant)
{
    *this = super_mutant;

    _hit_points = super_mutant._hit_points;
    _type = super_mutant._type;
}


SuperMutant &SuperMutant::operator=(SuperMutant const &super_mutant)
{
    _hit_points = super_mutant._hit_points;
    _type = super_mutant._type;

    return (*this);
}

SuperMutant::~SuperMutant()
{
    std::cout << "Aaargh..." << std::endl;   
}

/*
** Member functions
*/

void    SuperMutant::takeDamage(int damage)
{
    damage -= 3;

    _hit_points = _hit_points - damage < 0 ? _hit_points : _hit_points - damage;
}
