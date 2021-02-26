/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 17:04:23 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/02/26 13:28:52 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "ZombieEvent.hpp"

 ZombieEvent::ZombieEvent()
 {
     _name_ar[0] = "Bob";
     _name_ar[1] = "Sally";
     _name_ar[2] = "Sam";
     _name_ar[3] = "Shelly";
     _name_ar[4] = "Amy";
     _name_ar[5] = "Jim";
     _name_ar[6] = "Alexa";
     _name_ar[7] = "Hanna";
     _name_ar[8] = "Bess";
     _name_ar[9] = "Britny";

     _type_of_zombie_ar[0] = "slow";
     _type_of_zombie_ar[1] = "fast";
     _type_of_zombie_ar[2] = "handsome";
     _type_of_zombie_ar[3] = "ugly";
     _type_of_zombie_ar[4] = "kind";
     
 }

 ZombieEvent::~ZombieEvent()
 {
    
 }

 void   ZombieEvent::setZombieType()
 {
     int    index = rand() % 5;
    _type_of_zombie = _type_of_zombie_ar[index];
 }

 Zombie* ZombieEvent::newZombie(std::string name)
 {
     Zombie* my_zombie = new Zombie(_type_of_zombie, name);

     return (my_zombie);
 }

 Zombie   ZombieEvent::randomChump()
 {
     int    index;

     setZombieType();
     index = rand() % 10;
     Zombie my_zombie = Zombie(_type_of_zombie, _name_ar[index]);
     my_zombie.announce();

     return (my_zombie);
 }
