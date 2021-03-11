/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:08:06 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/11 17:29:39 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : _name("ScavTrap"), _hit_points(100), _max_hit_points(100), _energy_points(50), _max_energy_points(50), _level(1), _melee_attack_damage(20), _ranged_attack_damage(15), _armor_damage_reduction(3)
{
	//
	std::cout << "< FR4G-TP " << _name << " has arrived >" << std::endl;
	std::cout << "< FR4G-TP " << _name << " > Let's get this party started!" << std::endl;
	std::cout << "| Hit points: " << _hit_points << std::endl;
	std::cout << "| Energy points: " << _energy_points << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &scavtrap)
{
	*this = scavtrap;
	_name = scavtrap._name;
	_hit_points = scavtrap._hit_points;
	_max_hit_points = scavtrap._max_hit_points;
	_energy_points = scavtrap._energy_points;
	_max_energy_points = scavtrap._max_energy_points;
	_level = scavtrap._level;
	_melee_attack_damage = scavtrap._melee_attack_damage;
	_ranged_attack_damage = scavtrap._ranged_attack_damage;
	_armor_damage_reduction = scavtrap._armor_damage_reduction;
}

ScavTrap& ScavTrap::operator=(ScavTrap const &scavtrap)
{
	_name = scavtrap._name;
	_hit_points = scavtrap._hit_points;
	_max_hit_points = scavtrap._max_hit_points;
	_energy_points = scavtrap._energy_points;
	_max_energy_points = scavtrap._max_energy_points;
	_level = scavtrap._level;
	_melee_attack_damage = scavtrap._melee_attack_damage;
	_ranged_attack_damage = scavtrap._ranged_attack_damage;
	_armor_damage_reduction = scavtrap._armor_damage_reduction;
	
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "< FR4G-TP " << _name << " >" << " I'll die the way I lived: annoying!" << std::endl;
	std::cout << "< FR4G-TP " << _name << " left us >" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : _name("ScavTrap"), _hit_points(100), _max_hit_points(100), _energy_points(50), _max_energy_points(50), _level(1), _melee_attack_damage(20), _ranged_attack_damage(15), _armor_damage_reduction(3)
{
	std::cout << "< FR4G-TP " << _name << " has arrived >" << std::endl;
	std::cout << "< FR4G-TP " << _name << " > Let's get this party started!" << std::endl;
	std::cout << "| " << _name << " | Hit points: " << _hit_points << std::endl;
	std::cout << "| " << _name << " | Energy points: " << _energy_points << std::endl;
}

/*
** Member functions
*/

int		ScavTrap::rangedAttack(std::string const & target)
{
	if (_energy_points < _ranged_attack_damage)
	{
		std::cout << "< FR4G-TP " << _name << " trying to attack " << target << ", but its energy is running out >" << std::endl;
		std::cout << " -- Failed attempt -- " << std::endl;
		std::cout << "| " << _name << " | Energy points: " << _energy_points << std::endl;
		return (0);
	}
	else
	{
		_energy_points -= _ranged_attack_damage;
		std::cout << "< FR4G-TP " << _name << " attacks " << target << " at range, causing " << _ranged_attack_damage << " points of damage! >" << std::endl;
		std::cout << "| " << _name << " | Energy points: " << _energy_points << std::endl;
		return (_ranged_attack_damage);
	}
}

int		ScavTrap::meleeAttack(std::string const & target)
{
	if (_energy_points < _melee_attack_damage)
	{
		std::cout << "< FR4G-TP " << _name << " trying to attack " << target << ", but its energy is running out >" << std::endl;
		std::cout << " -- Failed attempt -- " << std::endl;
		std::cout << "| " << _name << " | Energy points: " << _energy_points << std::endl;
		return (0);
	}
	else
	{
		_energy_points -= _melee_attack_damage;
		std::cout << "< FR4G-TP " << _name << " attacks " << target << " in melee , causing " << _melee_attack_damage << " points of damage! >" << std::endl;
		std::cout << "| " << _name << " | Energy points: " << _energy_points << std::endl;
		return (_melee_attack_damage);
	}
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << "| " << _name << " | Armor damage reduction: " << _armor_damage_reduction << std::endl;	
	int copy_amount = amount;
	amount = copy_amount < _armor_damage_reduction ? 0 : amount - _armor_damage_reduction;
	_hit_points = ((_hit_points - amount) < 0) ? 0 : (_hit_points - amount);
	std::cout << "< FR4G-TP " << _name << " took " << amount << " damage >" << std::endl;
	std::cout << "| " << _name << " | Hit points: " << _hit_points << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	int	energy_amount = amount / 2;

	_hit_points += amount;
	_hit_points = _hit_points > _max_hit_points ? _max_hit_points : _hit_points;
	_energy_points += energy_amount;
	_energy_points = _energy_points > _max_energy_points ? _max_energy_points : _energy_points;	

	std::cout << "< FR4G-TP " << _name << " was repaired by " << amount << " hit points" << std::endl;
	std::cout << "and " << energy_amount << " energy points >" << std::endl;
	std::cout << "| " << _name << " | Hit points: " << _hit_points << std::endl;
	std::cout << "| " << _name << " | Energy points: " << _energy_points << std::endl;
}

std::string	ScavTrap::getName(void) const
{
	return (_name);
}
