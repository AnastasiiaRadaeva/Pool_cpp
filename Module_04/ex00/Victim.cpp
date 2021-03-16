/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 11:59:11 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/16 13:59:25 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"


Victim::Victim() : _name("Victim")
{
    std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}

Victim::Victim(std::string name) : _name(name)
{
    std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}

Victim::Victim(Victim const &victim)
{
    *this = victim;

    _name = victim._name;
}

Victim  &Victim::operator=(Victim const &victim)
{
    _name = victim._name;

    return(*this);
}

Victim::~Victim()
{
    std::cout << "Victim " << _name << " just died for no apparent reason!" << std::endl;
}

/*
** Member functions
*/

std::string const   &Victim::getName(void) const
{
    return (_name);
}

void                Victim::getPolymorphed(void) const
{
    std::cout << _name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream&	operator<<(std::ostream &out, const Victim& victim)
{
    return (out << "I'm " << victim.getName() << " and I like otters!" << std::endl);
}
