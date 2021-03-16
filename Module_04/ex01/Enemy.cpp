/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 16:14:55 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/16 16:28:37 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy() : _hit_points(50), _type("Demon")
{
}

Enemy::Enemy(int hp, std::string const &type) : _hit_points(hp), _type(type)
{
}

Enemy::Enemy(Enemy const &enemy)
{
    *this = enemy;

    _hit_points = enemy._hit_points;
    _type = enemy._type;
}


Enemy &Enemy::operator=(Enemy const &enemy)
{
    _hit_points = enemy._hit_points;
    _type = enemy._type;
     return (*this);
}

Enemy::~Enemy()
{

}

/*
** Member functions
*/

std::string const   &Enemy::getType(void) const
{
    return (_type);
}

int                 Enemy::getHP(void) const
{
    return (_hit_points);
}

void                Enemy::takeDamage(int damage)
{
    _hit_points = _hit_points - damage < 0 ? 0 : _hit_points - damage;
}
        