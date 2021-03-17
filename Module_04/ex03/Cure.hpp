/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 22:26:10 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/17 15:49:11 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{

    public:

        Cure();
        Cure(Cure const &cure);
        Cure &operator=(Cure const &cure);
        ~Cure();

        AMateria    *clone() const;
        void        power(ICharacter& target);

    private:

        std::string _name;
};

#endif
