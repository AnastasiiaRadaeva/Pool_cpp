/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 22:26:10 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/17 15:49:11 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(Cure const &cure) : AMateria(cure)
{
}

Cure &Cure::operator=(Cure const &cure)
{
    if (this != &cure)
        AMateria::operator= (cure);
    return (*this);
}

Cure::~Cure()
{
}

/*
** Member Functions
*/

AMateria            *Cure::clone() const
{
    return (new Cure(*this));
}

void                Cure::use(ICharacter &target)
{
    std::cout << "* heals ";
    AMateria::use(target);
    std::cout << "'s wounds *" << std::endl;
}
