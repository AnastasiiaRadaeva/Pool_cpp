/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 16:01:58 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/12 16:31:54 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

#include <thread> //for sleep_for
#include <chrono> //for seconds

int main()
{
	int			damage;
	FragTrap	bob("Bob");
	ScavTrap	leny("Leny");
	ClapTrap	jeck("Jeck");
	NinjaTrap	sam("Sam");
	NinjaTrap	david("David");

	std::cout << std::endl << "|--- Common Attacks ---|" << std::endl << std::endl;
	
	damage = bob.rangedAttack(leny.getName());
	leny.takeDamage(damage);
	
	std::cout << std::endl;
	damage = leny.rangedAttack(bob.getName());
	bob.takeDamage(damage);

	std::cout << std::endl;
	damage = jeck.rangedAttack(bob.getName());
	bob.takeDamage(damage);

	std::cout << std::endl;
	damage = sam.rangedAttack(bob.getName());
	bob.takeDamage(damage);

	std::cout << std::endl;
	damage = bob.meleeAttack(leny.getName());
	leny.takeDamage(damage);
	
	std::cout << std::endl;
	damage = leny.meleeAttack(bob.getName());
	bob.takeDamage(damage);

	std::cout << std::endl;
	damage = jeck.meleeAttack(leny.getName());
	leny.takeDamage(damage);
	
	std::cout << std::endl;
	damage = sam.meleeAttack(leny.getName());
	leny.takeDamage(damage);
	std::cout << std::endl;
	
	std::cout << std::endl << "|--- Max/Min/Repair ---|" << std::endl << std::endl;
	
	leny.takeDamage(75);
	leny.beRepaired(110);
	std::cout << std::endl;

	bob.takeDamage(85);
	bob.beRepaired(205);
	std::cout << std::endl;

	jeck.takeDamage(75);
	jeck.beRepaired(110);
	std::cout << std::endl;

	sam.takeDamage(75);
	sam.beRepaired(200);
	std::cout << std::endl;

	std::cout << std::endl << "|--- Special Effects ---|" << std::endl << std::endl;
	
	std::this_thread::sleep_for (std::chrono::seconds(1));
	bob.vaulthunter_dot_exe(leny.getName());
	leny.challengeNewcomer();
	std::cout << std::endl;

	std::this_thread::sleep_for (std::chrono::seconds(1));
	bob.vaulthunter_dot_exe(leny.getName());
	leny.challengeNewcomer();
	std::cout << std::endl;

	std::this_thread::sleep_for (std::chrono::seconds(1));
	bob.vaulthunter_dot_exe(leny.getName());
	leny.challengeNewcomer();
	std::cout << std::endl;

	sam.ninjaShoebox(bob);
	std::cout << std::endl;

	sam.ninjaShoebox(leny);
	std::cout << std::endl;

	sam.ninjaShoebox(jeck);
	std::cout << std::endl;

	sam.ninjaShoebox(david);
	std::cout << std::endl;
	
	return(0);
}
