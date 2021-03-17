/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 11:47:10 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/17 15:49:11 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
    std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const &tmarine)
{
    *this = tmarine;
}

TacticalMarine  &TacticalMarine::operator=(TacticalMarine const &)
{
    return (*this);
}

TacticalMarine::~TacticalMarine()
{
    std::cout << "Aaargh..." << std::endl;
}

/*
** Member Functions
*/

ISpaceMarine    *TacticalMarine::clone(void) const
{
    std::cout << "Marine" << std::endl;
    // TacticalMarine *copy_marine = new TacticalMarine;
    // *copy_marine = *this;
    // return (copy_marine);
    return new TacticalMarine(*this);
}

void            TacticalMarine::battleCry(void) const
{
    std::cout << "For the holy PLOT!" << std::endl;

}

void            TacticalMarine::rangedAttack(void) const
{
    std::cout << "* attacks with a bolter *" << std::endl;
}

void            TacticalMarine::meleeAttack(void) const
{
    std::cout << "* attacks with a chainsword *" << std::endl;
}
