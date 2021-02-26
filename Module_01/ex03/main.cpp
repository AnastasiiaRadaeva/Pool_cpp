/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 13:31:53 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/02/26 17:38:52 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

void    create_zombie()
{
     ZombieHorde    horde_of_zombie(5);
     horde_of_zombie.announce();
     std::cout << std::endl;
}

int main()
{
     std::cout << "_____________________________" << std::endl;
     std::cout << "|                           |" << std::endl;
     std::cout << "|          Hello!           |" << std::endl;
     std::cout << "|  Now we will see zombies! |" << std::endl;
     std::cout << "|        Be careful!        |" << std::endl;
     std::cout << "|___________________________|" << std::endl << std::endl;
     std::cout << "Creating the horde of zombies..." << std::endl << std::endl;

     create_zombie();
     std::cout << "!!! All zombies were destroyed !!!" << std::endl;
     return (0);
}
