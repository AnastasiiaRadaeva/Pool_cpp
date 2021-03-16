/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 16:44:32 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/16 16:46:03 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include "Enemy.hpp"

class RadScorpion : public Enemy
{
    public:

        RadScorpion();
        RadScorpion(RadScorpion const &rad_scorpion);
        RadScorpion &operator=(RadScorpion const &rad_scorpion);
        ~RadScorpion();

        void    takeDamage(int);
};

#endif
