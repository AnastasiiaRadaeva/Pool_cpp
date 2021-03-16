/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LittleGirl.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 15:02:22 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/16 15:05:40 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "LittleGirl.hpp"

LittleGirl::LittleGirl() : Victim("LittleGirl")
{
    std::cout << "Hi! What a beautiful butterfly!" << std::endl;
}

LittleGirl::LittleGirl(std::string name) : Victim(name)
{
    std::cout << "Hi! What a beautiful butterfly!" << std::endl;
}

LittleGirl::LittleGirl(LittleGirl const &little_girl)
{
    *this = little_girl;

    _name = little_girl._name;
}

LittleGirl &LittleGirl::operator=(LittleGirl const &little_girl)
{
    _name = little_girl._name;

    return (*this); 
}

LittleGirl::~LittleGirl()
{
    std::cout << "Mommy..." << std::endl;
}

/*
** Member functions
*/

void    LittleGirl::getPolymorphed() const
{
    std::cout << _name << " has been turned into a silver butterfly!" << std::endl;
}
