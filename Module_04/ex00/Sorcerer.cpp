/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 11:58:50 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/16 14:00:52 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
    std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &sorcerer)
{
    *this = sorcerer;

    _name = sorcerer._name;
    _title = sorcerer._title;
}

Sorcerer &Sorcerer::operator=(Sorcerer const &sorcerer)
{
    _name = sorcerer._name;
    _title = sorcerer._title;

    return (*this);
}

Sorcerer::~Sorcerer()
{
    std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same!" << std::endl;
}

/*
** Member functions
*/

std::string const   &Sorcerer::getName() const
{
    return (_name);
}

std::string const   &Sorcerer::getTitle() const
{
    return (_title);
}

void                Sorcerer::polymorph(Victim const &victim) const
{
    victim.getPolymorphed();
}

std::ostream&	operator<<(std::ostream &out, const Sorcerer& sorcerer)
{
	return (out << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle() << ", and I like ponies!" << std::endl);
}
