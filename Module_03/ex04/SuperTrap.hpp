/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 16:37:11 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/15 12:48:24 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

# define COL_YELLOW "\033[0;33m"

class SuperTrap : public FragTrap, public NinjaTrap
{
    public:

        SuperTrap();
        SuperTrap(SuperTrap const &supertrap);
        SuperTrap& operator=(SuperTrap const &supertrap);
        ~SuperTrap();

        SuperTrap(std::string name);

		int		rangedAttack(std::string const & target);
		int 	meleeAttack(std::string const & target);

};

#endif