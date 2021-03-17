/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SonicScrewdriver.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 23:54:25 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/17 00:00:56 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SONICSCREWDRIVER_HPP
# define SONICSCREWDRIVER_HPP

# include "AWeapon.hpp"

class SonicScrewdriver : public AWeapon
{
     public:

        SonicScrewdriver();
        SonicScrewdriver(SonicScrewdriver const &sonic_screwdriver);
        SonicScrewdriver &operator=(SonicScrewdriver const &sonic_screwdriver);
        ~SonicScrewdriver();
        
        void        attack() const;
};

#endif
