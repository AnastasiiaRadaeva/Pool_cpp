/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 16:01:51 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/15 12:36:10 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <stdlib.h>
# include <time.h> //for time
# define COL_PURPLE "\033[0;35m"

class FragTrap : virtual public ClapTrap
{
	public:

		FragTrap();
		FragTrap(FragTrap const &fragtrap);
		FragTrap& operator=(FragTrap const &fragtrap);
		~FragTrap();

		FragTrap(std::string name);
		
		int		rangedAttack(std::string const & target);
		int 	meleeAttack(std::string const & target);

		int 	vaulthunter_dot_exe(std::string const & target);
};

#endif
