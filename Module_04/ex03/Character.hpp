/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 13:09:05 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/18 16:49:30 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character: public ICharacter
{
    public:

        Character();
        Character(std::string name);
        Character(Character const &);
        Character &operator=(Character const &);
        ~Character();

        std::string const   &getName() const;
        void                equip(AMateria* m);
        void                unequip(int idx);
        void                use(int idx, ICharacter& target);

    private:

        std::string _name;
        AMateria    **_array_of_materia;
        int         _number_of_materia;
        int         _start_num_of_mat;
};

#endif