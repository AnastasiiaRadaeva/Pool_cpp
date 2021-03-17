/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 11:47:10 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/17 15:49:11 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

class Squad : public ISquad
{
    public:

        Squad();
        Squad(Squad const &squad);
        Squad &operator=(Squad const &squad);
        ~Squad();

        int             getCount() const;
        ISpaceMarine*   getUnit(int) const;
        int             push(ISpaceMarine*);

    private:

        int             _number_of_units;
        int             _start_size_of_array;
        ISpaceMarine    **_units;

};

#endif