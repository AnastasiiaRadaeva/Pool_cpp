/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 17:02:53 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/02/25 17:32:33 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #ifndef ZOMBIE_HPP
 # define ZOMBIE_HPP

 #include <iostream>

class Zombie
{
    public: 

        Zombie();
        ~Zombie();

    private:

        std::string _type;
        std::string _name;

        void    announce();

};

 #endif