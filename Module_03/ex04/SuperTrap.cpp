/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 16:37:01 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/15 12:56:43 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap() : ClapTrap("SuperTrap"), FragTrap(), NinjaTrap()
{
    _hit_points = 100;
	_max_hit_points = 100;
	_energy_points = 120;
	_max_energy_points = 120;
	_melee_attack_damage = 60;
	_ranged_attack_damage = 20;
	_armor_damage_reduction = 5;

    std::cout << COL_YELLOW << "< SUPER-TP " << _name << " is already here >" << std::endl;
	std::cout << "< SUPER-TP " << _name << " > Hi guys! " << std::endl;
	std::cout << "| Hit points: " << _hit_points << std::endl;
	std::cout << "| Energy points: " << _energy_points << COL_END << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const &supertrap)
{
	*this = supertrap;
	_name = supertrap._name;
	_hit_points = supertrap._hit_points;
	_max_hit_points = supertrap._max_hit_points;
	_energy_points = supertrap._energy_points;
	_max_energy_points = supertrap._max_energy_points;
	_level = supertrap._level;
	_melee_attack_damage = supertrap._melee_attack_damage;
	_ranged_attack_damage = supertrap._ranged_attack_damage;
	_super_attack_damage = supertrap._super_attack_damage;
	_armor_damage_reduction = supertrap._armor_damage_reduction;
}

SuperTrap& SuperTrap::operator=(SuperTrap const &supertrap)
{
	_name = supertrap._name;
	_hit_points = supertrap._hit_points;
	_max_hit_points = supertrap._max_hit_points;
	_energy_points = supertrap._energy_points;
	_max_energy_points = supertrap._max_energy_points;
	_level = supertrap._level;
	_melee_attack_damage = supertrap._melee_attack_damage;
	_ranged_attack_damage = supertrap._ranged_attack_damage;
	_super_attack_damage = supertrap._super_attack_damage;
	_armor_damage_reduction = supertrap._armor_damage_reduction;

	return (*this);
}

SuperTrap::SuperTrap(std::string name) : ClapTrap(name), FragTrap(), NinjaTrap()
{
    _hit_points = 100;
	_max_hit_points = 100;
	_energy_points = 120;
	_max_energy_points = 120;
	_melee_attack_damage = 60;
	_ranged_attack_damage = 20;
	_armor_damage_reduction = 5;

    std::cout << COL_YELLOW << "< SUPER-TP " << _name << " is already here >" << std::endl;
	std::cout << "< SUPER-TP " << _name << " > Hi guys! " << std::endl;
	std::cout << "| Hit points: " << _hit_points << std::endl;
	std::cout << "| Energy points: " << _energy_points << COL_END << std::endl;

}

SuperTrap::~SuperTrap()
{
	std::cout << COL_YELLOW << "< SUPER-TP " << _name << " >" << " Bye sweet" << std::endl;
	std::cout << "< SUPER-TP " << _name << " left us >" << COL_END << std::endl;
}

/*
** Member functions
*/

int		SuperTrap::rangedAttack(std::string const & target)
{
    return (FragTrap::rangedAttack(target));
}

int 	SuperTrap::meleeAttack(std::string const & target)
{
    return (NinjaTrap::meleeAttack(target));
}
