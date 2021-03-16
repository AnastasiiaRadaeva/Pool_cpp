/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SchoolBoy.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 15:06:50 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/16 15:11:33 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "SchoolBoy.hpp"

SchoolBoy::SchoolBoy() : Victim("SchoolBoy")
{
    std::cout << "Hey maan, you are strange!" << std::endl;
}

SchoolBoy::SchoolBoy(std::string name) : Victim(name)
{
    std::cout << "Hey maan, you are strange" << std::endl;
}

SchoolBoy::SchoolBoy(SchoolBoy const &school_boy)
{
    *this = school_boy;

    _name = school_boy._name;
}

SchoolBoy &SchoolBoy::operator=(SchoolBoy const &school_boy)
{
    _name = school_boy._name;

    return (*this); 
}

SchoolBoy::~SchoolBoy()
{
    std::cout << "I'll be back!" << std::endl;
}

/*
** Member functions
*/

void    SchoolBoy::getPolymorphed() const
{
    std::cout << _name << " has been turned into a grumpy dog!" << std::endl;
}
