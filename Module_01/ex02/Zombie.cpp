/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 17:02:53 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/02/25 17:38:52 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "Zombie.hpp"

 Zombie::Zombie()
 {

 }

 Zombie::~Zombie()
 {

 }

 void   Zombie::announce()
 {
    std::cout << "<" << _name << " (" << _type << ")>" << "Braaaaaaaaaaaaaaainssssssss........." << std::endl;
 }
 