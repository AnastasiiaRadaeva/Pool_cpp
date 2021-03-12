/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 13:23:08 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/12 14:58:53 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# define COL_GREY "\033[2;37m"
# define COL_END "\033[0m"

class ClapTrap
{
    public:

		ClapTrap();
		ClapTrap(ClapTrap const &clapTrap);
		ClapTrap& operator=(ClapTrap const &clapTrap);
		~ClapTrap();

		ClapTrap(std::string name);

		int		rangedAttack(std::string const & target);
		int 	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		
		std::string	getName(void) const;

	protected:

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
