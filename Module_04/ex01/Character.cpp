/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 16:55:38 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/16 17:30:26 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name) : _name(name), _ap_number(40), _weapon(NULL)
{ 
}

Character::Character(Character const &character)
{
    *this = character;

    _name = character._name;
    _ap_number = character._ap_number;
    _weapon = character._weapon;
}

Character &Character::operator=(Character const &character)
{
    _name = character._name;
    _ap_number = character._ap_number;
    _weapon = character._weapon;

    return (*this);
}

Character::~Character()
{
}

/*
** Member functions
*/

void                Character::recoverAP(void)
{
    _ap_number = _ap_number + 10 > 40 ? 40 : _ap_number + 10;
}

void                Character::equip(AWeapon *weapon)
{
    _weapon = weapon;
}

void                Character::attack(Enemy *enemy)
{
    if (_weapon && _ap_number >= _weapon->getAPCost())
    {
        _ap_number -= _weapon->getAPCost();
        std::cout << _name << " attacks " << enemy->getType() << " with a " << _weapon->getName() << std::endl;
        _weapon->attack();
        enemy->takeDamage(_weapon->getDamage());
        if (enemy->getHP() == 0)
            delete enemy;
    }
}

std::string const   &Character::getName(void) const
{
    return (_name);
}

int                 Character::getAPNumber(void) const
{
    return (_ap_number);
}

std::string const   &Character::getWeaponName(void) const
{
    return (_weapon->getName());
}

int                 Character::getIfWeapon(void) const 
{
    if (_weapon)
        return (1);
    else
        return (0);
}

std::ostream    &operator<<(std::ostream &out, const Character& character)
{
    if (character.getIfWeapon() == 1)
        return (out << character.getName() << " has " << character.getAPNumber() << " AP and wields a " << character.getWeaponName() << std::endl);
    else
        return (out << character.getName() << " has " << character.getAPNumber() << " AP and is unarmed" << std::endl);
}
