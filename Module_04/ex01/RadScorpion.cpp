/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 16:46:13 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/16 16:48:45 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const &rad_scorpion)
{
    *this = rad_scorpion;

    _hit_points = rad_scorpion._hit_points;
    _type = rad_scorpion._type;
}

RadScorpion &RadScorpion::operator=(RadScorpion const &rad_scorpion)
{
    _hit_points = rad_scorpion._hit_points;
    _type = rad_scorpion._type;

    return (*this);
}

RadScorpion::~RadScorpion()
{
    std::cout << "* SPROTCH *" << std::endl;   
}

/*
** Member functions
*/

