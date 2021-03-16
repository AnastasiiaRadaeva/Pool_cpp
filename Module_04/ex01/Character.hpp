/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 16:02:46 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/16 17:28:28 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AWeapon.hpp"
# include "Enemy.hpp"
# include <string>

class Character
{
    public:

        Character(std::string const & name);
        Character(Character const &character);
        Character &operator=(Character const &character);
        ~Character();
        
        void                recoverAP();
        void                equip(AWeapon*);
        void                attack(Enemy*);
        std::string const   &getName() const;
        int                 getAPNumber() const;
        std::string const   &getWeaponName() const;
        int                 getIfWeapon() const;

    protected:

        std::string _name;
        int         _ap_number;
        AWeapon     *_weapon;

};

std::ostream&	operator<<(std::ostream &out, const Character& character);


#endif
