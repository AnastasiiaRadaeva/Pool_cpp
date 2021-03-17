/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 11:47:10 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/17 15:49:11 by kbatwoma         ###   ########.fr       */
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
    std::cout << std::endl;

    ISquad* vlc = new Squad;
    std::cout <<std::endl;

    std::cout << " --- Push ---" <<std::endl;
    vlc->push(bob);
    std::cout << vlc->getCount() << std::endl;
    vlc->push(jim);
    std::cout << vlc->getCount() << std::endl;
    vlc->push(sam);
    std::cout << vlc->getCount() << std::endl << std::endl;
    
    std::cout << " --- Push copy ---" << std::endl;
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
    
    Squad s;
    Squad b;
    s.push(sam);
    b.push(sam);
    b.push(bob);
    std::cout << s.getCount() << std::endl << std::endl;
    std::cout << b.getCount() << std::endl << std::endl;
    s = b;
    std::cout << s.getCount() << std::endl << std::endl;
    
    delete vlc;
    
    return 0;
}
