/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 15:18:24 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/15 13:10:16 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() : ClapTrap("NinjaTrap"), _ninja_attack_ct(35), _ninja_attack_ft(40), _ninja_attack_st(30), _ninja_attack_nt(10)
{
	_hit_points = 60;
	_max_hit_points = 60;
	_energy_points = 120;
	_max_energy_points = 120;
	_level = 1;
	_melee_attack_damage = 60;
	_ranged_attack_damage = 5;
	_armor_damage_reduction = 0;
	
    std::cout << COL_BLUE << "< NINJA-TP " << _name << " has arrived >" << std::endl;
	std::cout << "< NINJA-TP " << _name << " > ...I'm invisible..." << std::endl;
	std::cout << "| Hit points: " << _hit_points << std::endl;
	std::cout << "| Energy points: " << _energy_points << COL_END << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const &ninjatrap)
{
	*this = ninjatrap;
	_name = ninjatrap._name;
	_hit_points = ninjatrap._hit_points;
	_max_hit_points = ninjatrap._max_hit_points;
	_energy_points = ninjatrap._energy_points;
	_max_energy_points = ninjatrap._max_energy_points;
	_level = ninjatrap._level;
	_melee_attack_damage = ninjatrap._melee_attack_damage;
	_ranged_attack_damage = ninjatrap._ranged_attack_damage;
	_super_attack_damage = ninjatrap._super_attack_damage;
	_armor_damage_reduction = ninjatrap._armor_damage_reduction;
    _ninja_attack_ct = ninjatrap._ninja_attack_ct;
    _ninja_attack_ft = ninjatrap._ninja_attack_ft;
    _ninja_attack_st = ninjatrap._ninja_attack_st;
    _ninja_attack_nt = ninjatrap._ninja_attack_nt;
}

NinjaTrap& NinjaTrap::operator=(NinjaTrap const &ninjatrap)
{
	_name = ninjatrap._name;
	_hit_points = ninjatrap._hit_points;
	_max_hit_points = ninjatrap._max_hit_points;
	_energy_points = ninjatrap._energy_points;
	_max_energy_points = ninjatrap._max_energy_points;
	_level = ninjatrap._level;
	_melee_attack_damage = ninjatrap._melee_attack_damage;
	_ranged_attack_damage = ninjatrap._ranged_attack_damage;
	_super_attack_damage = ninjatrap._super_attack_damage;
	_armor_damage_reduction = ninjatrap._armor_damage_reduction;
    _ninja_attack_ct = ninjatrap._ninja_attack_ct;
    _ninja_attack_ft = ninjatrap._ninja_attack_ft;
    _ninja_attack_st = ninjatrap._ninja_attack_st;
    _ninja_attack_nt = ninjatrap._ninja_attack_nt;
	
	return (*this);
}

NinjaTrap::~NinjaTrap()
{
	std::cout << COL_BLUE << "< NINJA-TP " << _name << " >" << " I never go back on my word!" << std::endl;
	std::cout << "< NINJA-TP " << _name << " left us >" << COL_END << std::endl;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name), _ninja_attack_ct(35), _ninja_attack_ft(40), _ninja_attack_st(30), _ninja_attack_nt(10)
{
    _hit_points = 60;
	_max_hit_points = 60;
	_energy_points = 120;
	_max_energy_points = 120;
	_level = 1;
	_melee_attack_damage = 60;
	_ranged_attack_damage = 5;
	_armor_damage_reduction = 0;
    	
    std::cout << COL_BLUE << "< NINJA-TP " << _name << " has arrived >" << std::endl;
	std::cout << "< NINJA-TP " << _name << " > ...I'm invisible..." << std::endl;
	std::cout << "| " << _name << " | Hit points: " << _hit_points << std::endl;
	std::cout << "| " << _name << " | Energy points: " << _energy_points << COL_END << std::endl;
}

/*
** Member functions
*/

int		NinjaTrap::rangedAttack(std::string const & target)
{
	if (_energy_points < _ranged_attack_damage)
	{
		std::cout << COL_BLUE << "< NINJA-TP " << _name << " trying to attack " << target << ", but its energy is running out >" << std::endl;
		std::cout << " -- Failed attempt -- " << std::endl;
		std::cout << "| " << _name << " | Energy points: " << _energy_points << COL_END << std::endl;
		return (0);
	}
	else
	{
		_energy_points -= _ranged_attack_damage;
		std::cout << COL_BLUE << "< NINJA-TP " << _name << " attacks " << target << " at range, causing " << _ranged_attack_damage << " points of damage! >" << std::endl;
		std::cout << "| " << _name << " | Energy points: " << _energy_points << COL_END << std::endl;
		return (_ranged_attack_damage);
	}
}

int		NinjaTrap::meleeAttack(std::string const & target)
{
	if (_energy_points < _melee_attack_damage)
	{
		std::cout << COL_BLUE << "< NINJA-TP " << _name << " trying to attack " << target << ", but its energy is running out >" << std::endl;
		std::cout << " -- Failed attempt -- " << std::endl;
		std::cout << "| " << _name << " | Energy points: " << _energy_points << COL_END << std::endl;
		return (0);
	}
	else
	{
		_energy_points -= _melee_attack_damage;
		std::cout << COL_BLUE << "< NINJA-TP " << _name << " attacks " << target << " in melee , causing " << _melee_attack_damage << " points of damage! >" << std::endl;
		std::cout << "| " << _name << " | Energy points: " << _energy_points << COL_END << std::endl;
		return (_melee_attack_damage);
	}
}

int NinjaTrap::ninjaShoebox(ClapTrap const &claptrap)
{
    std::cout << COL_BLUE << "***| NINJA-TP vs CL4P-TP |***>" << std::endl; 
   	if (_energy_points < _ninja_attack_ct)
	{
		std::cout << "< NINJA-TP " << _name << " trying to attack " << claptrap.getName() << ", but its energy is running out >" << std::endl;
		std::cout << " -- Where's he? -- " << std::endl;
		std::cout << "| " << _name << " | Energy points: " << _energy_points << COL_END << std::endl;
		return (0);
	}
	else
	{
		_energy_points -= _ninja_attack_ct;
		std::cout << "< NINJA-TP " << _name << " attacks CL4P_TP " << claptrap.getName() << " with a Ninja Atack, causing " << _ninja_attack_ct << " points of damage! >" << std::endl;
		std::cout << "| " << _name << " | Energy points: " << _energy_points << std::endl;
		std::cout << "< NINJA-TP " << _name << " > Only a ninja can stop a ninja." << COL_END << std::endl;
        return (_ninja_attack_ct);
	}
}

int NinjaTrap::ninjaShoebox(FragTrap const &fragtrap)
{
    std::cout << COL_BLUE << "***| NINJA-TP vs FR4G-TP |***>" << std::endl; 
   	if (_energy_points < _ninja_attack_ft)
	{
		std::cout << "< NINJA-TP " << _name << " trying to attack " << fragtrap.getName() << ", but its energy is running out >" << std::endl;
		std::cout << " -- Where's he? -- " << std::endl;
		std::cout << "| " << _name << " | Energy points: " << _energy_points << COL_END << std::endl;
		return (0);
	}
	else
	{
		_energy_points -= _ninja_attack_ft;
		std::cout << "< NINJA-TP " << _name << " attacks FR4G_TP " << fragtrap.getName() << " with a Ninja Atack, causing " << _ninja_attack_ft << " points of damage! >" << std::endl;
		std::cout << "| " << _name << " | Energy points: " << _energy_points << std::endl;
		std::cout << "< NINJA-TP " << _name << " > Only a ninja can stop a ninja." << COL_END << std::endl;
        return (_ninja_attack_ft);
	}
}

int NinjaTrap::ninjaShoebox(ScavTrap const &scavtrap)
{
    std::cout << COL_BLUE << "***| NINJA-TP vs SC4V-TP |***>" << std::endl; 
   	if (_energy_points < _ninja_attack_st)
	{
		std::cout << "< NINJA-TP " << _name << " trying to attack " << scavtrap.getName() << ", but its energy is running out >" << std::endl;
		std::cout << " -- Where's he? -- " << std::endl;
		std::cout << "| " << _name << " | Energy points: " << _energy_points << COL_END << std::endl;
		return (0);
	}
	else
	{
		_energy_points -= _ninja_attack_st;
		std::cout << "< NINJA-TP " << _name << " attacks SC4V-TP " << scavtrap.getName() << " with a Ninja Atack, causing " << _ninja_attack_st << " points of damage! >" << std::endl;
		std::cout << "| " << _name << " | Energy points: " << _energy_points << std::endl;
		std::cout << "< NINJA-TP " << _name << " > Only a ninja can stop a ninja." << COL_END << std::endl;
        return (_ninja_attack_st);
	}
}

int NinjaTrap::ninjaShoebox(NinjaTrap const &ninjatrap)
{
    std::cout << COL_BLUE << "***| NINJA-TP vs NINJA-TP |***>" << std::endl; 
   	if (_energy_points < _ninja_attack_nt)
	{
		std::cout << "< NINJA-TP " << _name << " trying to attack " << ninjatrap.getName() << ", but its energy is running out >" << std::endl;
		std::cout << " -- Where's he? -- " << std::endl;
		std::cout << "| " << _name << " | Energy points: " << _energy_points << COL_END << std::endl;
		return (0);
	}
	else
	{
		_energy_points -= _ninja_attack_nt;
		std::cout << "< NINJA-TP " << _name << " attacks NINJA_TP " << ninjatrap.getName() << " with a Ninja Atack, causing " << _ninja_attack_nt << " points of damage! >" << std::endl;
		std::cout << "| " << _name << " | Energy points: " << _energy_points << std::endl;
		std::cout << "< NINJA-TP " << _name << " > It was an equal battle." << COL_END << std::endl;
        return (_ninja_attack_nt);
	}
}
