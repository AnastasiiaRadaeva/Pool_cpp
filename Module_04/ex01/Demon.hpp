/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Demon.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 23:41:46 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/16 23:56:28 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEMON_HPP
# define DEMON_HPP

# include "Enemy.hpp"

class Demon : public Enemy
{
    public:

        Demon();
        Demon(Demon const &demon);
        Demon &operator=(Demon const &demon);
        ~Demon();

        void    takeDamage(int);
};

#endif