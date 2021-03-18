/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 11:47:10 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/18 12:22:19 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
    std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &aterminator)
{
    *this = aterminator;
}

AssaultTerminator  &AssaultTerminator::operator=(AssaultTerminator const &)
{
    return (*this);
}

AssaultTerminator::~AssaultTerminator()
{
    std::cout << "I'll be back..." << std::endl;
}

/*
** Member Functions
*/

ISpaceMarine    *AssaultTerminator::clone(void) const
{
    return (new AssaultTerminator(*this));
}

void            AssaultTerminator::battleCry(void) const
{
    std::cout << "This code is unclean. PURIFY IT!" << std::endl;

}

void            AssaultTerminator::rangedAttack(void) const
{
    std::cout << "* does nothing *" << std::endl;
}

void            AssaultTerminator::meleeAttack(void) const
{
    std::cout << "* attacks with chainfists *" << std::endl;
}
