/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 12:31:02 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/01 13:47:19 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
    public:

        HumanA(std::string name, Weapon &weapon);
        ~HumanA();

        void    attack();

    private:

        HumanA();

        std::string     _name;
        Weapon const    *_weapon;

};

#endif