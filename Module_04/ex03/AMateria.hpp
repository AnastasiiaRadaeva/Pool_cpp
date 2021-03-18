/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 22:26:10 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/18 15:40:25 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "ICharacter.hpp"
# include <iostream>

class ICharacter;

class AMateria
{
    private:
        
        std::string     _type;
        unsigned int    _xp;

    public:

        AMateria();
        AMateria(std::string const & type);
        AMateria(AMateria const &materia);
        AMateria &operator=(AMateria const &materia);
        virtual ~AMateria();

        std::string const   &getType() const; //Returns the materia type
        unsigned int        getXP() const; //Returns the Materia's XP
        
        virtual AMateria*   clone() const = 0;
        virtual void        use(ICharacter& target);
};

#endif
