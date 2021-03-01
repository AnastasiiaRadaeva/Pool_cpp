/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 12:30:29 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/01 13:20:12 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{

}

Weapon::Weapon(std::string new_type) : type(new_type)
{
    
}

Weapon::~Weapon()
{

}

std::string const & Weapon::getType() const
{
    return (type);
}

void                Weapon::setType(std::string new_str)
{
    type = new_str;
}
