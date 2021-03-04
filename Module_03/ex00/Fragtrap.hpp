/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fragtrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 16:01:51 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/04 17:37:30 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>

class FragTrap
{
	public:

		FragTrap();
		FragTrap(FragTrap const &fragtrap);
		FragTrap& operator=(FragTrap const &fragtrap);
		~FragTrap();

		FragTrap(std::string name);

		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		std::string	getName(void) const;

	private:

		std::string	_name;
		
		int	_hit_points = 100;
		int	_max_hit_points = 100;
		int	_energy_points = 100;
		int	_max_energy_points = 100;
		int	_level = 1;
		int	_melee_attack_damage = 30;
		int	_ranged_attack_damage = 20;
		int	_armor_damage_reduction = 5;

};

#endif