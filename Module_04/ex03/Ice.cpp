/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 22:26:10 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/17 15:49:11 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("Ice"), _name("ice")
{
}

Ice::Ice(Ice const &ice)
{
    *this = ice;

    _name = ice._name;
}

Ice &Ice::operator=(Ice const &ice)
{
    _name = ice._name;

    return (*this);
}

/*
** Member Functions
*/

AMateria    *Ice::clone() const
{
    AMateria *ice = new Ice();
    return (ice);
}

void        Ice::power(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
