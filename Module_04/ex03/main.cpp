/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 13:53:57 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/18 16:51:11 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

// int main()
// {
//     IMateriaSource* src = new MateriaSource();
//     src->learnMateria(new Ice());
//     src->learnMateria(new Cure());

//     ICharacter* me = new Character("me");

//     AMateria* tmp;
//     tmp = src->createMateria("ice");
//     me->equip(tmp);
//     tmp = src->createMateria("cure");
//     me->equip(tmp);

//     ICharacter* bob = new Character("bob");

//     me->use(0, *bob);
//     me->use(1, *bob);

//     delete bob;
//     delete me;
//     delete src;

//     return 0;
// }

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");

    std::cout << "--- use, XP and equip ---" << std::endl;
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->use(0, *me);
    me->equip(tmp);
    me->use(0, *me);
    std::cout << "XP: " << tmp->getXP() << std::endl << std::endl;

    tmp = src->createMateria("cure");
    me->equip(tmp);
    me->use(1, *me);
    std::cout << "XP: " << tmp->getXP() << std::endl;
    me->use(1, *me);
    std::cout << "XP: " << tmp->getXP() << std::endl << std::endl;

    std::cout << "--- unequip and use nonexistent ---" << std::endl;
    me->unequip(1);
    me->use(1, *me);
    std::cout << std::endl;

    std::cout << "--- uneguip method NOT delete Materia ---" << std::endl;
    tmp = src->createMateria("cure");
    tmp->use(*me);
    
    delete me;
    delete src;

    return 0;
}
