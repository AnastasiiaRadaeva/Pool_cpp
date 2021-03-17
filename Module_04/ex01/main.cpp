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
    
    std::cout << std::endl << " --- Atack without weapon ---" << std::endl;
    me->attack(scorpion);
    me->attack(mutant);
    me->attack(demon);

    std::cout << std::endl << " --- Weapons --- " << std::endl;
    me->equip(pr);
    std::cout << *me;
    me->equip(pf);
    std::cout << *me;
    me->equip(ss);
    std::cout << *me;

    std::cout << std::endl << " --- Atack with weapon (all enemy) --- " << std::endl;
    me->equip(pr);
    me->attack(scorpion);
    std::cout << *me << std::endl;
    
    me->equip(pf);
    std::cout << *me;
    me->attack(mutant);
    std::cout << *me << std::endl;

    me->equip(ss);
    std::cout << *me;
    me->attack(demon);
    std::cout << *me;

    std::cout << std::endl << " --- Enemy is dead --- " << std::endl;
    me->equip(pr);
    me->attack(scorpion);
    me->attack(scorpion);
    me->attack(scorpion);
    std::cout << *me;

    std::cout << std::endl << " --- Recover AP/Max --- " << std::endl;
    
    me->recoverAP();
    std::cout << *me;
    me->recoverAP();
    std::cout << *me;
    me->recoverAP();
    std::cout << *me;
    me->recoverAP();
    std::cout << *me;

    std::cout << std::endl << " --- Recover AP/Min --- " << std::endl;

    me->equip(pf);
    std::cout << *me;
    me->attack(demon);
    me->attack(demon);
    me->attack(demon);
    me->attack(demon);
    std::cout << *me;
    me->attack(demon);
    std::cout << *me;
    me->attack(demon);
    std::cout << *me << std::endl;

    delete demon;
    delete mutant;
    delete ss;
    delete pf;
    delete pr;
    delete me;

    return 0;
}
