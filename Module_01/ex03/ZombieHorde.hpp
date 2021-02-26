/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 13:32:53 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/02/25 17:38:52 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"
# include <cstdlib>

class ZombieHorde
{
    public:

        ZombieHorde();
        ZombieHorde(int n);
        ~ZombieHorde();
        void    announce();

    private:

        std::string _names[10];
        Zombie*     _zombies;
        int         _num_of_zombie;

};

#endif