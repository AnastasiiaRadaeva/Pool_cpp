/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fragtrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 16:01:51 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/11 16:57:10 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream> 
# include <stdlib.h>
# include <time.h> //for time

class FragTrap
{
	public:

		FragTrap();
		FragTrap(FragTrap const &fragtrap);
		FragTrap& operator=(FragTrap const &fragtrap);
		~FragTrap();

		FragTrap(std::string name);

		int		rangedAttack(std::string const & target);
		int 	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		int 	vaulthunter_dot_exe(std::string const & target);

		std::string	getName(void) const;

	private:

		std::string	_name;
		int			_hit_points;
		int			_max_hit_points;
		int			_energy_points;
		int			_max_energy_points;
		int			_level;
		int			_melee_attack_damage;
		int			_ranged_attack_damage;
		int			_super_attack_damage;
		int			_armor_damage_reduction;
};

#endif
