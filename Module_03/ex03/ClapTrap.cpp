/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 13:23:19 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/12 14:36:46 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("ClapTrap"), _hit_points(100), _max_hit_points(100), _energy_points(100), _max_energy_points(100), _level(1), _melee_attack_damage(30), _ranged_attack_damage(20), _super_attack_damage(25), _armor_damage_reduction(5)
{
	std::cout << COL_GREY << "< CL4P-TP " << _name << " here!!! >" << std::endl;
	std::cout << "< CL4P-TP " << _name << " > Hello, my people!" << COL_END << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &claptrap)
{
	*this = claptrap;
	_name = claptrap._name;
	_hit_points = claptrap._hit_points;
	_max_hit_points = claptrap._max_hit_points;
	_energy_points = claptrap._energy_points;
	_max_energy_points = claptrap._max_energy_points;
	_level = claptrap._level;
	_melee_attack_damage = claptrap._melee_attack_damage;
	_ranged_attack_damage = claptrap._ranged_attack_damage;
	_super_attack_damage = claptrap._super_attack_damage;
	_armor_damage_reduction = claptrap._armor_damage_reduction;
}

ClapTrap& ClapTrap::operator=(ClapTrap const &claptrap)
{
	_name = claptrap._name;
	_hit_points = claptrap._hit_points;
	_max_hit_points = claptrap._max_hit_points;
	_energy_points = claptrap._energy_points;
	_max_energy_points = claptrap._max_energy_points;
	_level = claptrap._level;
	_melee_attack_damage = claptrap._melee_attack_damage;
	_ranged_attack_damage = claptrap._ranged_attack_damage;
	_super_attack_damage = claptrap._super_attack_damage;
	_armor_damage_reduction = claptrap._armor_damage_reduction;
	
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << COL_GREY << "< CL4P-TP " << _name << " >" << "  Live and prosper!" << std::endl;
	std::cout << "< CL4P-TP " << _name << " is dead. >" << COL_END << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(100), _max_hit_points(100), _energy_points(100), _max_energy_points(100), _level(1), _melee_attack_damage(30), _ranged_attack_damage(20), _super_attack_damage(25), _armor_damage_reduction(5)
{
	std::cout << COL_GREY << "< CL4P-TP " << _name << " here >" << std::endl;
	std::cout << "< CL4P-TP " << _name << " > Hello, my people!" << COL_END << std::endl;
}

/*
** Member functions
*/

int		ClapTrap::rangedAttack(std::string const & target)
{
	if (_energy_points < _ranged_attack_damage)
	{
		std::cout << COL_GREY << "< " << _name << " trying to attack " << target << ", but its energy is running out >" << std::endl;
		std::cout << " -- Failed attempt -- " << std::endl;
		std::cout << "| " << _name << " | Energy points: " << _energy_points << COL_END << std::endl;
		return (0);
	}
	else
	{
		_energy_points -= _ranged_attack_damage;
		std::cout << COL_GREY << "< " << _name << " attacks " << target << " at range, causing " << _ranged_attack_damage << " points of damage! >" << std::endl;
		std::cout << "| " << _name << " | Energy points: " << _energy_points << COL_END << std::endl;
		return (_ranged_attack_damage);
	}
}

int		ClapTrap::meleeAttack(std::string const & target)
{
	if (_energy_points < _melee_attack_damage)
	{
		std::cout << COL_GREY << "< " << _name << " trying to attack " << target << ", but its energy is running out >" << std::endl;
		std::cout << " -- Failed attempt -- " << std::endl;
		std::cout << "| " << _name << " | Energy points: " << _energy_points << COL_END << std::endl;
		return (0);
	}
	else
	{
		_energy_points -= _melee_attack_damage;
		std::cout << COL_GREY << "< " << _name << " attacks " << target << " in melee , causing " << _melee_attack_damage << " points of damage! >" << std::endl;
		std::cout << "| " << _name << " | Energy points: " << _energy_points << COL_END << std::endl;
		return (_melee_attack_damage);
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	int int_amount = static_cast<int>(amount);
	std::cout << COL_GREY << "| " << _name << " | Armor damage reduction: " << _armor_damage_reduction << std::endl;	
	int_amount = int_amount < _armor_damage_reduction ? 0 : int_amount - _armor_damage_reduction;
	_hit_points = ((_hit_points - int_amount) < 0) ? 0 : (_hit_points - int_amount);
	std::cout << "< " << _name << " took " << int_amount << " damage >" << std::endl;
	std::cout << "| " << _name << " | Hit points: " << _hit_points << COL_END << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	int	energy_amount = amount / 2;

	_hit_points += amount;
	_hit_points = _hit_points > _max_hit_points ? _max_hit_points : _hit_points;
	_energy_points += energy_amount;
	_energy_points = _energy_points > _max_energy_points ? _max_energy_points : _energy_points;	

	std::cout << COL_GREY << "< " << _name << " was repaired by " << amount << " hit points" << std::endl;
	std::cout << "and " << energy_amount << " energy points >" << std::endl;
	std::cout << "| " << _name << " | Hit points: " << _hit_points << std::endl;
	std::cout << "| " << _name << " | Energy points: " << _energy_points << COL_END << std::endl;
}

std::string	ClapTrap::getName(void) const
{
	return (_name);
}
