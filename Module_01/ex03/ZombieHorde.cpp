/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 13:32:53 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/02/25 17:38:52 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde()
{

}

ZombieHorde::ZombieHorde(int n) : _num_of_zombie(n)
{
     _names[0] = "Bob";
     _names[1] = "Sally";
     _names[2] = "Sam";
     _names[3] = "Shelly";
     _names[4] = "Amy";
     _names[5] = "Jim";
     _names[6] = "Alexa";
     _names[7] = "Hanna";
     _names[8] = "Bess";
     _names[9] = "Britny";

     _zombies = new Zombie[_num_of_zombie];
     int rand_num;
     for (int i = 0; i < _num_of_zombie; i++)
     {
         rand_num = rand() % 10;
         _zombies[i].fill_fields("handsome", _names[rand_num]);
     }
}

ZombieHorde::~ZombieHorde()
{
    delete [] _zombies;
}

void    ZombieHorde::announce()
{
    for (int i = 0; i < _num_of_zombie; i++)
    {
        _zombies[i].announce();
    }
}
