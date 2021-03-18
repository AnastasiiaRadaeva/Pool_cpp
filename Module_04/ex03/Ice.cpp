/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 22:26:10 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/18 16:04:45 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(Ice const &ice) : AMateria(ice)
{
}

Ice &Ice::operator=(Ice const &ice)
{
    if (this != &ice)
        AMateria::operator= (ice);
    return (*this);
}

Ice::~Ice()
{    
}

/*
** Member Functions
*/

AMateria            *Ice::clone() const
{
    return (new Ice(*this));
}

void                Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at ";
    AMateria::use(target);
    std::cout << " *" << std::endl;
}
