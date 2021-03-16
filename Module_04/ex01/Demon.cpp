/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Demon.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 23:41:46 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/16 23:56:28 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Demon.hpp"

Demon::Demon() : Enemy(80, "Demon")
{
    std::cout << "I'll take you with me!" << std::endl;
}

Demon::Demon(Demon const &demon)
{
    *this = demon;

    _hit_points = demon._hit_points;
    _type = demon._type;
}

Demon &Demon::operator=(Demon const &demon)
{
    _hit_points = demon._hit_points;
    _type = demon._type;

    return (*this);
}

Demon::~Demon()
{
    std::cout << "See you!" << std::endl;   
}

/*
** Member functions
*/

void    SuperMutant::takeDamage(int damage)
{
    damage -= 2;

    _hit_points = _hit_points - damage < 0 ? _hit_points : _hit_points - damage;
}
