/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 15:50:52 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/16 16:02:43 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
     public:

        PlasmaRifle();
        PlasmaRifle(PlasmaRifle const &plasma_rifle);
        PlasmaRifle &operator=(PlasmaRifle const &plasma_rifle);
        ~PlasmaRifle();
        
        void        attack() const;
};

#endif
