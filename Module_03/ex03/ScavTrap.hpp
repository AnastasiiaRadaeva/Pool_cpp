/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:08:17 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/12 15:06:50 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# define COL_AQUAMARINE "\033[0;36m"

class ScavTrap : public ClapTrap
{
	public:

		ScavTrap();
		ScavTrap(ScavTrap const &scavtrap);
		ScavTrap& operator=(ScavTrap const &scavtrap);
		~ScavTrap();

		ScavTrap(std::string name);

		void 	challengeNewcomer(void);
};

#endif
