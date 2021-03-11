/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:08:17 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/11 17:20:27 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream> 

class ScavTrap
{
	public:

		ScavTrap();
		ScavTrap(ScavTrap const &scavtrap);
		ScavTrap& operator=(ScavTrap const &scavtrap);
		~ScavTrap();

		ScavTrap(std::string name);

		int		rangedAttack(std::string const & target);
		int 	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		int 	challengeNewcomer(void);

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
		int			_armor_damage_reduction;
};

#endif
