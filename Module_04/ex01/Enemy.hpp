/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 16:09:05 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/16 17:24:36 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>

class Enemy
{
    public:

        Enemy(int hp, std::string const & type);
        Enemy(Enemy const &enemy);
        Enemy &operator=(Enemy const &enemy);
        virtual ~Enemy();

        std::string const   &getType() const;
        int                 getHP() const;
        
        virtual void        takeDamage(int);

    protected:

        Enemy();

        int         _hit_points;
        std::string _type;

};

#endif
