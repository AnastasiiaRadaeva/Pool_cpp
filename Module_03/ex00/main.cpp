/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 16:01:58 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/12 12:46:22 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
# include <thread> //for sleep_for
# include <chrono> //for seconds

int main()
{
	int			damage;
	FragTrap	bob("Bob");
	FragTrap	leny("Leny");
	std::cout << std::endl;
	
	damage = bob.rangedAttack(leny.getName());
	leny.takeDamage(damage);
	std::cout << std::endl;

	leny.meleeAttack("Clar");
	std::cout << std::endl;
	
	leny.vaulthunter_dot_exe(bob.getName());
	bob.takeDamage(90);
	std::cout << std::endl;
	std::this_thread::sleep_for (std::chrono::seconds(1));

	leny.vaulthunter_dot_exe(bob.getName());
	bob.takeDamage(70);
	std::cout << std::endl;
	std::this_thread::sleep_for (std::chrono::seconds(1));
	
	leny.meleeAttack("Sam");
	std::cout << std::endl;

	leny.vaulthunter_dot_exe("Grey");
	std::cout << std::endl;
	std::this_thread::sleep_for (std::chrono::seconds(1));
	
	leny.beRepaired(110);
	std::cout << std::endl;

	return(0);
}