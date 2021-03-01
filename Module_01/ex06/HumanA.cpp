/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 12:34:41 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/01 13:47:56 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA()
{

}

HumanA::HumanA(std::string name, Weapon &weapon)
{
    _name = name;
    _weapon = &weapon;
}

HumanA::~HumanA()
{
    
}

void    HumanA::attack()
{
    std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
}
