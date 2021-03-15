/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 16:01:58 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/15 13:11:39 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

#include <thread> //for sleep_for
#include <chrono> //for seconds

int main()
{
	SuperTrap	sam("Sam");
	NinjaTrap	nick("Nick");

	std::cout << std::endl << "|--- Common Attacks ---|" << std::endl << std::endl;
	
	sam.rangedAttack("Bob");
	std::cout << std::endl;
	sam.meleeAttack("David");
	std::cout << std::endl;
	
	std::cout << std::endl << "|--- Max/Min/Repair ---|" << std::endl << std::endl;
	
	sam.takeDamage(75);
	sam.beRepaired(110);
	std::cout << std::endl;

	sam.takeDamage(110);
	sam.beRepaired(110);
	std::cout << std::endl;

	std::cout << std::endl << "|--- Special Effects ---|" << std::endl << std::endl;
	
	sam.vaulthunter_dot_exe("Jeck");
	std::cout << std::endl;

	std::this_thread::sleep_for (std::chrono::seconds(1));
	sam.vaulthunter_dot_exe("Ken");
	std::cout << std::endl;

	sam.ninjaShoebox(nick);
	std::cout << std::endl;

	return(0);
}
