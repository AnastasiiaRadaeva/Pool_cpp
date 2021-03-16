/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 15:29:10 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/16 15:49:11 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon() : _name("Weapon"), _apcost(10), _damage(10)
{    
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : _name(name), _apcost(apcost), _damage(damage)
{
}

AWeapon::AWeapon(AWeapon const &aweapon)
{
    *this = aweapon;

    _name = aweapon._name;
    _apcost = aweapon._apcost;
    _damage = aweapon._damage;
}

AWeapon &AWeapon::operator=(AWeapon const &aweapon)
{
    _name = aweapon._name;
    _apcost = aweapon._apcost;
    _damage = aweapon._damage;

    return (*this);
}

AWeapon::~AWeapon()
{
}

/*
** Member functions
*/

std::string const   &AWeapon::getName(void) const
{
    return (_name);
}

int                 AWeapon::getAPCost(void) const
{
    return (_apcost);
}

int                 AWeapon::getDamage(void) const
{
    return (_damage);
}

