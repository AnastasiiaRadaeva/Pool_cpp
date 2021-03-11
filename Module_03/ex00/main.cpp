/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 16:01:58 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/11 16:57:43 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fragtrap.hpp"
# include <thread> //for sleep_for
# include <chrono> //for seconds

int main()
{
	int			damage;
	FragTrap	bob("Bob");
	FragTrap	leny("Leny");

	damage = bob.rangedAttack(leny.getName());
	leny.takeDamage(damage);
	
	leny.vaulthunter_dot_exe(bob.getName());
	bob.takeDamage(90);
	std::this_thread::sleep_for (std::chrono::seconds(1));

	leny.vaulthunter_dot_exe(bob.getName());
	bob.takeDamage(10);
	std::this_thread::sleep_for (std::chrono::seconds(1));
	
	leny.meleeAttack("Clar");
	
	leny.vaulthunter_dot_exe("Grey");
	std::this_thread::sleep_for (std::chrono::seconds(1));
	
	leny.beRepaired(110);
	
	leny.vaulthunter_dot_exe(bob.getName());

	return(0);
}