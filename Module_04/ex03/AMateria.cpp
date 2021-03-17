/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 22:26:10 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/17 15:49:11 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : _type(type), _xp(0)
{
}

AMateria::AMateria(AMateria const &materia)
{
}

AMateria *AMateria::operator=(AMateria const &materia)
{
}

AMateria::~AMateria()
{
}

/*
** Member Functions
*/

std::string const   &AMateria::getType(void) const
{
    return (_type);
}

unsigned int        AMateria::getXP(void) const
{
    return (_xp);
}

void                AMateria::use(ICharacter& target)
{
    _xp += 10;
    power(target);
}
