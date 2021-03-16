/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SchoolBoy.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 15:06:48 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/16 15:07:36 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCHOOLBOY_HPP
# define SCHOOLBOY_HPP

# include "Victim.hpp"

class SchoolBoy : public Victim
{
    public:

        SchoolBoy();
        SchoolBoy(std::string name);
        SchoolBoy(SchoolBoy const &little_girl);
        SchoolBoy &operator=(SchoolBoy const &little_girl);
        ~SchoolBoy();

        void    getPolymorphed(void) const;

};

#endif