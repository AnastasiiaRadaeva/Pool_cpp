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

Cure::Cure() : AMateria("Cure"), _name("cure")
{
}

Cure::Cure(Cure const &cure)
{
    *this = cure;

    _name = cure._name;
}

Cure &Cure::operator=(Cure const &cure)
{
    _name = cure._name;

    return (*this);
}

/*
** Member Functions
*/

AMateria    *Cure::clone() const
{
    AMateria *cure = new Cure();
    return (cure);
}

void        Cure::power(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
