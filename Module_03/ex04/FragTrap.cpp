/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 16:02:03 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/15 13:09:57 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("FragTrap")
{
	_hit_points = 100;
	_max_hit_points = 100;
	_energy_points = 100;
	_max_energy_points = 100;
	_level = 1;
	_melee_attack_damage = 30;
	_ranged_attack_damage = 20;
	_super_attack_damage = 25;
	_armor_damage_reduction = 5;
	std::cout << COL_PURPLE << "< FR4G-TP " << _name << " has arrived >" << std::endl;
	std::cout << "< FR4G-TP " << _name << " > Let's get this party started!" << std::endl;
	std::cout << "| Hit points: " << _hit_points << std::endl;
	std::cout << "| Energy points: " << _energy_points << COL_END << std::endl;
}

FragTrap::FragTrap(FragTrap const &fragtrap)
{
	*this = fragtrap;
	_name = fragtrap._name;
	_hit_points = fragtrap._hit_points;
	_max_hit_points = fragtrap._max_hit_points;
	_energy_points = fragtrap._energy_points;
	_max_energy_points = fragtrap._max_energy_points;
	_level = fragtrap._level;
	_melee_attack_damage = fragtrap._melee_attack_damage;
	_ranged_attack_damage = fragtrap._ranged_attack_damage;
	_super_attack_damage = fragtrap._super_attack_damage;
	_armor_damage_reduction = fragtrap._armor_damage_reduction;
}

FragTrap& FragTrap::operator=(FragTrap const &fragtrap)
{
	_name = fragtrap._name;
	_hit_points = fragtrap._hit_points;
	_max_hit_points = fragtrap._max_hit_points;
	_energy_points = fragtrap._energy_points;
	_max_energy_points = fragtrap._max_energy_points;
	_level = fragtrap._level;
	_melee_attack_damage = fragtrap._melee_attack_damage;
	_ranged_attack_damage = fragtrap._ranged_attack_damage;
	_super_attack_damage = fragtrap._super_attack_damage;
	_armor_damage_reduction = fragtrap._armor_damage_reduction;
	
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << COL_PURPLE << "< FR4G-TP " << _name << " >" << " I'll die the way I lived: annoying!" << std::endl;
	std::cout << "< FR4G-TP " << _name << " left us >" << COL_END << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hit_points = 100;
	_max_hit_points = 100;
	_energy_points = 100;
	_max_energy_points = 100;
	_level = 1;
	_melee_attack_damage = 30;
	_ranged_attack_damage = 20;
	_super_attack_damage = 25;
	_armor_damage_reduction = 5;
	std::cout << COL_PURPLE << "< FR4G-TP " << _name << " has arrived >" << std::endl;
	std::cout << "< FR4G-TP " << _name << " > Let's get this party started!" << std::endl;
	std::cout << "| " << _name << " | Hit points: " << _hit_points << std::endl;
	std::cout << "| " << _name << " | Energy points: " << _energy_points << COL_END << std::endl;
}

/*
** Member functions
*/

int		FragTrap::rangedAttack(std::string const & target)
{
	if (_energy_points < _ranged_attack_damage)
	{
		std::cout << COL_PURPLE << "< FR4G-TP " << _name << " trying to attack " << target << ", but its energy is running out >" << std::endl;
		std::cout << " -- Failed attempt -- " << std::endl;
		std::cout << "| " << _name << " | Energy points: " << _energy_points << COL_END << std::endl;
		return (0);
	}
	else
	{
		_energy_points -= _ranged_attack_damage;
		std::cout << COL_PURPLE << "< FR4G-TP " << _name << " attacks " << target << " at range, causing " << _ranged_attack_damage << " points of damage! >" << std::endl;
		std::cout << "| " << _name << " | Energy points: " << _energy_points << COL_END << std::endl;
		return (_ranged_attack_damage);
	}
}

int		FragTrap::meleeAttack(std::string const & target)
{
	if (_energy_points < _melee_attack_damage)
	{
		std::cout << COL_PURPLE << "< FR4G-TP " << _name << " trying to attack " << target << ", but its energy is running out >" << std::endl;
		std::cout << " -- Failed attempt -- " << std::endl;
		std::cout << "| " << _name << " | Energy points: " << _energy_points << COL_END << std::endl;
		return (0);
	}
	else
	{
		_energy_points -= _melee_attack_damage;
		std::cout << COL_PURPLE << "< FR4G-TP " << _name << " attacks " << target << " in melee , causing " << _melee_attack_damage << " points of damage! >" << std::endl;
		std::cout << "| " << _name << " | Energy points: " << _energy_points << COL_END << std::endl;
		return (_melee_attack_damage);
	}
}

int		FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	srand(time(NULL));
	int		i = rand()%5;
	
	std::string	super_attacks[5];
	super_attacks[0] = "|Kick Him While He's Down|";
	super_attacks[1] = "|I Am Rubber, You Are Glue|";
	super_attacks[2] = "|Livin' Near the Edge|";
	super_attacks[3] = "|Rainbow Coolant|";
	super_attacks[4] = "|Moon Cosmic Power|";

	std::cout << COL_PURPLE << "!!! SUPER ATACK !!!" << std::endl;
	if (_energy_points < _super_attack_damage)
	{
		std::cout << "< FR4G-TP " << _name << " trying to attack " << target << ", but its energy is running out >" << std::endl;
		std::cout << " -- Failed attempt -- " << std::endl;
		std::cout << "| " << _name << " | Energy points: " << _energy_points << COL_END << std::endl;
		return (0);
	}
	else
	{
		_energy_points -= _super_attack_damage;
		std::cout << "< FR4G-TP " << _name << " attacks " << target << " with a super attak... " << super_attacks[i] << ", causing " << _super_attack_damage << " points of damage! >" << std::endl;
		std::cout << "| " << _name << " | Energy points: " << _energy_points << COL_END << std::endl;
		return (_super_attack_damage);
	}
}
