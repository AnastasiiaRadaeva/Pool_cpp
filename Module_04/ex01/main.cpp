/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 16:02:46 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/16 17:28:28 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "Demon.hpp"
#include "SonicScrewdriver.hpp"

// int main()
// {
//     Character* me = new Character("me");
//     std::cout << *me;
    
//     Enemy* b = new RadScorpion();
//     AWeapon* pr = new PlasmaRifle();
//     AWeapon* pf = new PowerFist();
    
//     me->equip(pr);
//     std::cout << *me;
//     me->equip(pf);
    
//     me->attack(b);
//     std::cout << *me;
//     me->equip(pr);
//     std::cout << *me;
//     me->attack(b);
//     std::cout << *me;
//     me->attack(b);
//     std::cout << *me;
//     return 0;
// }


int main()
{
    Character* me = new Character("me");
    std::cout << *me;
    
    Enemy* scorpion = new RadScorpion();
    Enemy* mutant = new SuperMutant();
    Enemy* demon = new Demon();

    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();
    AWeapon* ss = new SonicScrewdriver();
    
    me->equip(pr);
    std::cout << *me;
    me->equip(pf);
    
    me->attack(b);
    std::cout << *me;
    me->equip(pr);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    return 0;
}
