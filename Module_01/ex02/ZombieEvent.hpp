/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 17:04:30 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/02/25 18:06:56 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_HPP
# define ZOMBIE_EVENT_HPP

# include <iostream>
# include <cstdlib>
# include "Zombie.hpp"

class ZombieEvent
{
    public:

        ZombieEvent();
        ~ZombieEvent();
        void    setZombieType();
        Zombie* newZombie(std::string name);
        Zombie  randomChump();

    private:

        std::string _type_of_zombie_ar[5];
        std::string _name_ar[10];
        std::string _type_of_zombie;

};

#endif