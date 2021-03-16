/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 15:27:25 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/16 17:27:56 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>

class AWeapon
{
     public:

        AWeapon(std::string const & name, int apcost, int damage);
        AWeapon(AWeapon const &aweapon);
        AWeapon &operator=(AWeapon const &aweapon);
        virtual ~AWeapon();
        
        std::string const   &getName() const;
        int                 getAPCost() const;
        int                 getDamage() const;
        
        virtual void        attack() const = 0;

    protected:

        AWeapon();

        std::string _name;
        int         _apcost;
        int         _damage;
    

};

#endif
