/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 11:59:32 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/16 13:53:24 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon() : Victim("Peon")
{
    std::cout << "Zog zog." << std::endl;
}

Peon::Peon(std::string name) : Victim(name)
{
    std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const &peon)
{
    *this = peon;

    _name = peon._name;
}

Peon &Peon::operator=(Peon const &peon)
{
    _name = peon._name;

    return (*this); 
}

Peon::~Peon()
{
    std::cout << "Bleuark..." << std::endl;
}

/*
** Member functions
*/

void    Peon::getPolymorphed() const
{
    std::cout << _name << " has been turned into a pink pony!" << std::endl;
}
