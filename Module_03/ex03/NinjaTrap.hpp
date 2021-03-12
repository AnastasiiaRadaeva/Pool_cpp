/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 15:18:35 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/12 16:05:19 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# define COL_BLUE "\033[0;34m"

class NinjaTrap : public ClapTrap
{
    public:

        NinjaTrap();
        NinjaTrap(NinjaTrap const &ninjatrap);
        NinjaTrap& operator=(NinjaTrap const &ninjatrap);
        ~NinjaTrap();

        NinjaTrap(std::string name);

        int ninjaShoebox(ClapTrap const &claptrap);
        int ninjaShoebox(FragTrap const &fragtrap);
        int ninjaShoebox(ScavTrap const &scavtrap);
        int ninjaShoebox(NinjaTrap const &ninjatrap);

    private:

        int _ninja_attack_ct;
        int _ninja_attack_ft;
        int _ninja_attack_st;
        int _ninja_attack_nt;
};

#endif