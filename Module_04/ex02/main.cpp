/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 11:47:10 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/18 12:32:53 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

// int main()
// {
//     ISpaceMarine* bob = new TacticalMarine;
//     ISpaceMarine* jim = new AssaultTerminator;

//     ISquad* vlc = new Squad;

//     vlc->push(bob);
//     vlc->push(jim);

//     for (int i = 0; i < vlc->getCount(); ++i)
//     {
//         ISpaceMarine* cur = vlc->getUnit(i);
//         cur->battleCry();
//         cur->rangedAttack();
//         cur->meleeAttack();
//     }
//     delete vlc;
//     return 0;
// }

int main()
{
    ISpaceMarine* bob = new TacticalMarine;
    ISpaceMarine* jim = new AssaultTerminator;
    ISpaceMarine* sam = new TacticalMarine;
    ISpaceMarine* dan = new TacticalMarine;

    ISquad* vlc = new Squad;
    std::cout << std::endl;

    std::cout << " --- Push ---" << std::endl;
    std::cout << vlc->getCount() << std::endl;
    vlc->push(bob);
    std::cout << vlc->getCount() << std::endl;
    vlc->push(jim);
    std::cout << vlc->getCount() << std::endl;
    vlc->push(sam);
    std::cout << vlc->getCount() << std::endl << std::endl;
    
    std::cout << " --- Push unit already in squad ---" << std::endl;
    vlc->push(bob);
    std::cout << vlc->getCount() << std::endl;
    vlc->push(jim);
    std::cout << vlc->getCount() << std::endl;
    vlc->push(sam);
    std::cout << vlc->getCount() << std::endl << std::endl;
    
    std::cout << " --- getUnit ---" << std::endl;
    for (int i = 0; i < vlc->getCount(); ++i)
    {
        ISpaceMarine* cur = vlc->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
        std::cout << std::endl;
    }

    std::cout << " --- operator= ---" << std::endl;   
    Squad s;
    Squad b;
    s.push(dan);
    b.push(jim->clone());
    b.push(bob->clone());
    std::cout << "Units in squad s before operator=: " << s.getCount() << std::endl;
    std::cout << "Units in squad b: " << b.getCount() << std::endl;
    s = b;
    std::cout << "Units in squad s after operator=: " << s.getCount() << std::endl << std::endl;

    std::cout << " --- Copy Constructor/ copy from s ---" << std::endl;
    Squad c(s);
    std::cout << "Units in squad c: " << c.getCount() << std::endl << std::endl;
    
    delete vlc;

    return 0;
}
