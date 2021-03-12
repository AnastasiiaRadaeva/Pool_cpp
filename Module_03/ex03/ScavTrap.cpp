/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:08:06 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/12 15:42:14 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("ScavTrap")
{
	_hit_points = 100;
	_max_hit_points = 100;
	_energy_points = 50;
	_max_energy_points = 50;
	_level = 1;
	_melee_attack_damage = 20;
	_ranged_attack_damage = 15;
	_armor_damage_reduction = 3;
	
	std::cout << COL_AQUAMARINE << "< SC4V-TP " << _name << " has arrived >" << std::endl;
	std::cout << "< SC4V-TP " << _name << " > Sooooo... how are things?" << std::endl;
	std::cout << "|| Hit points: " << _hit_points << std::endl;
	std::cout << "|| Energy points: " << _energy_points << COL_END << std::endl;
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
	std::cout << COL_AQUAMARINE << "< SC4V-TP " << _name << " >" << " I'm too pretty to die!" << std::endl;
	std::cout << "< SC4V-TP " << _name << " left us >" << COL_END << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hit_points = 100;
	_max_hit_points = 100;
	_energy_points = 50;
	_max_energy_points = 50;
	_level = 1;
	_melee_attack_damage = 20;
	_ranged_attack_damage = 15;
	_armor_damage_reduction = 3;
	
	std::cout << COL_AQUAMARINE << "< SC4V-TP " << _name << " has arrived >" << std::endl;
	std::cout << "< SC4V-TP " << _name << " > Sooooo... how are things?" << std::endl;
	std::cout << "|| " << _name << " | Hit points: " << _hit_points << std::endl;
	std::cout << "|| " << _name << " | Energy points: " << _energy_points << COL_END << std::endl;
}

/*
** Member functions
*/

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

	std::cout << COL_AQUAMARINE << "< SC4V-TP " << _name << " choose the challenge:\n" << challenges[i] << std::endl;
	std::cout << "< SC4V-TP " << _name << " > Oh my gosh, a challenge!" << COL_END << std::endl;
}
