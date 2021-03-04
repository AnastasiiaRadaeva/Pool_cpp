/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 16:02:03 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/04 18:19:34 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fragtrap.hpp"

FragTrap::FragTrap()
{
	
}

FragTrap::FragTrap(FragTrap const &fragtrap)
{
	*this = fragtrap;
	_name = fragtrap.getName();
}

FragTrap& FragTrap::operator=(FragTrap const &fragtrap)
{
	_name = fragtrap.getName();
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "< FR4G-TP " << _name << " >" << " I'll die the way I lived: annoying!" << std::endl;
	std::cout << "< FR4G-TP " << _name << " left us >" << std::endl;
}

FragTrap::FragTrap(std::string name) : _name(name)
{
	std::cout << "< FR4G-TP " << _name << " has arrived >" << std::endl;
	std::cout << "< FR4G-TP " << _name << " > Let's get this party started!" << std::endl;
}


void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "< FR4G-TP " << _name << " attacks " << target << " at range, causing " << _ranged_attack_damage << " points of damage!" << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "< FR4G-TP " << _name << " attacks " << target << " in melee , causing " << _melee_attack_damage << " points of damage!" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	_hit_points = ((_hit_points - amount) < 0) ? 0 : (_hit_points - amount);
	std::cout << "< FR4G-TP " << _name << " took " << amount << " damage >" << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	_hit_points = ((_hit_points + amount) > _max_hit_points) ? _max_hit_points : (_hit_points + amount);
	std::cout << "< FR4G-TP " << _name << " was repaired by " << amount << " points >" << std::endl;
}

std::string	FragTrap::getName(void) const
{
	return (_name);
}
