/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:08:06 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/12 12:36:09 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : _name("ScavTrap"), _hit_points(100), _max_hit_points(100), _energy_points(50), _max_energy_points(50), _level(1), _melee_attack_damage(20), _ranged_attack_damage(15), _armor_damage_reduction(3)
{
	std::cout << "< SC4V-TP " << _name << " has arrived >" << std::endl;
	std::cout << "< SC4V-TP " << _name << " > Sooooo... how are things?" << std::endl;
	std::cout << "|| Hit points: " << _hit_points << std::endl;
	std::cout << "|| Energy points: " << _energy_points << std::endl;
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
	std::cout << "< SC4V-TP " << _name << " >" << " I'm too pretty to die!" << std::endl;
	std::cout << "< SC4V-TP " << _name << " left us >" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : _name(name), _hit_points(100), _max_hit_points(100), _energy_points(50), _max_energy_points(50), _level(1), _melee_attack_damage(20), _ranged_attack_damage(15), _armor_damage_reduction(3)
{
	std::cout << "< SC4V-TP " << _name << " has arrived >" << std::endl;
	std::cout << "< SC4V-TP " << _name << " > Let's get this party started!" << std::endl;
	std::cout << "|| " << _name << " | Hit points: " << _hit_points << std::endl;
	std::cout << "|| " << _name << " | Energy points: " << _energy_points << std::endl;
}

/*
** Member functions
*/

int		ScavTrap::rangedAttack(std::string const & target)
{
	if (_energy_points < _ranged_attack_damage)
	{
		std::cout << "< SC4V-TP " << _name << " trying to attack " << target << ", but its energy is running out >" << std::endl;
		std::cout << " -- Failed attempt -- " << std::endl;
		std::cout << "|| " << _name << " | Energy points: " << _energy_points << std::endl;
		return (0);
	}
	else
	{
		_energy_points -= _ranged_attack_damage;
		std::cout << "< SC4V-TP " << _name << " attacks " << target << " at range, causing " << _ranged_attack_damage << " points of damage! >" << std::endl;
		std::cout << "|| " << _name << " | Energy points: " << _energy_points << std::endl;
		return (_ranged_attack_damage);
	}
}

int		ScavTrap::meleeAttack(std::string const & target)
{
	if (_energy_points < _melee_attack_damage)
	{
		std::cout << "< SC4V-TP " << _name << " trying to attack " << target << ", but its energy is running out >" << std::endl;
		std::cout << " -- Failed attempt -- " << std::endl;
		std::cout << "|| " << _name << " | Energy points: " << _energy_points << std::endl;
		return (0);
	}
	else
	{
		_energy_points -= _melee_attack_damage;
		std::cout << "< SC4V-TP " << _name << " attacks " << target << " in melee , causing " << _melee_attack_damage << " points of damage! >" << std::endl;
		std::cout << "|| " << _name << " | Energy points: " << _energy_points << std::endl;
		return (_melee_attack_damage);
	}
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	int int_amount = static_cast<int>(amount);
	std::cout << "|| " << _name << " | Armor damage reduction: " << _armor_damage_reduction << std::endl;	
	int_amount = int_amount < _armor_damage_reduction ? 0 : int_amount - _armor_damage_reduction;
	_hit_points = (_hit_points - int_amount) < 0 ? 0 : (_hit_points - int_amount);
	std::cout << "< SC4V-TP " << _name << " took " << int_amount << " damage >" << std::endl;
	std::cout << "|| " << _name << " | Hit points: " << _hit_points << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	int	energy_amount = amount / 2;

	_hit_points += amount;
	_hit_points = _hit_points > _max_hit_points ? _max_hit_points : _hit_points;
	_energy_points += energy_amount;
	_energy_points = _energy_points > _max_energy_points ? _max_energy_points : _energy_points;	

	std::cout << "< SC4V-TP " << _name << " was repaired by " << amount << " hit points" << std::endl;
	std::cout << "and " << energy_amount << " energy points >" << std::endl;
	std::cout << "|| " << _name << " | Hit points: " << _hit_points << std::endl;
	std::cout << "|| " << _name << " | Energy points: " << _energy_points << std::endl;
}

void	ScavTrap::challengeNewcomer(void)
{
	srand(time(NULL));
	int		i = rand()%5;
	
	std::string	challenges[5];
	challenges[0] = "** Not Really a People Person **\nKill 250 Human enemies >";
	challenges[1] = "**    Don't You Ever Miss?    **\nKill 1,000 enemies with Critical Hits >";
	challenges[2] = "**       Bragging Rights       **\nWin 250 Duels >";
	challenges[3] = "**    Wilderness Survivor    **\nOpen 1,000 Lootable objects (excluding red chests) >";
	challenges[4] = "**  I fired every bullet ever  **\nShoot 100000 Times >";

	std::cout << "< SC4V-TP " << _name << " choose the challenge:\n" << challenges[i] << std::endl;
	std::cout << "< SC4V-TP " << _name << " > Oh my gosh, a challenge!" << std::endl;
}

std::string	ScavTrap::getName(void) const
{
	return (_name);
}
