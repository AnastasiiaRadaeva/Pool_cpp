/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 17:04:11 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/02/26 13:28:13 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "ZombieEvent.hpp"

 int    main()
 {
     std::cout << "_____________________________" << std::endl;
     std::cout << "|                           |" << std::endl;
     std::cout << "|          Hello!           |" << std::endl;
     std::cout << "|  Now we will see zombies! |" << std::endl;
     std::cout << "|        Be careful!        |" << std::endl;
     std::cout << "|___________________________|" << std::endl << std::endl;

     ZombieEvent    zombie_event;
     std::cout << "Creating the zombie David..." << std::endl;
     zombie_event.setZombieType();
     Zombie*    David = zombie_event.newZombie("David");
     std::cout << "Creating the zombie Mary..." << std::endl;
     zombie_event.setZombieType();
     Zombie*    Mary = zombie_event.newZombie("Mary");
     std::cout << std::endl;

     std::cout << "<victim> Oh no!" << std::endl;
     David->announce();
     Mary->announce();
     std::cout << "<savior> I'll save you!" << std::endl;
     delete David;
     delete Mary;
     Zombie random = zombie_event.randomChump();
     std::cout << "<victim> We will die here!" << std::endl;
     random.announce();
     std::cout << "<victim> We won't beat him..." << std::endl;
     std::cout << "<people died out>" << std::endl;
     return (0);
 }
