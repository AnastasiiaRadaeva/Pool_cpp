/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 11:59:51 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/16 15:16:01 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"
#include "LittleGirl.hpp"
#include "SchoolBoy.hpp"
#include "Sorcerer.hpp"

/*
int main()
{
    Sorcerer robert("Robert", "the Magnificent");
    Victim jim("Jimmy");
    Peon joe("Joe");
    
    std::cout << robert << jim << joe;
    
    robert.polymorph(jim);
    robert.polymorph(joe);

    return 0;
}
*/

int main()
{
    Sorcerer robert("Robert", "the Magnificent");
    Victim jim("Jimmy");
    Peon joe("Joe");
    LittleGirl sally("Sally");
    SchoolBoy sam("Sam");
    
    std::cout << robert << jim << joe << sally << sam;
    
    robert.polymorph(jim);
    robert.polymorph(joe);
    robert.polymorph(sally);
    robert.polymorph(sam);

    return 0;
}
