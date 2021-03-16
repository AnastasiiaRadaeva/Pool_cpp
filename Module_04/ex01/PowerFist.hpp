/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 16:05:30 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/16 16:06:55 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
     public:

        PowerFist();
        PowerFist(PowerFist const &power_fist);
        PowerFist &operator=(PowerFist const &power_fist);
        ~PowerFist();
        
        void        attack() const;
};

#endif
