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
    _ap_number = _ap_number - _weapon->getAPCost() < 0 ? 0 : _ap_number - _weapon->getAPCost();
    if (_ap_number > 0 || _weapon)
    {
        std::cout << _name << " attacks " << enemy->getType() << " with a " << _weapon->getName() << std::endl;
        _weapon->attack();
        enemy->takeDamage(_weapon->getDamage());
        // if (enemy->getHP() == 0)
            //delete?
    }
}

std::string const   &Character::getName(void) const
{
    return (_name);
}

std::ostream    &operator<<(std::ostream &out, const Character& character)
{
    // return (out << )

}
