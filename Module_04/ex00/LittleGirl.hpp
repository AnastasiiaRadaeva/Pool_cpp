/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LittleGirl.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 15:01:02 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/16 15:02:16 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LITTLEGIRL_HPP
# define LITTLEGIRL_HPP

# include "Victim.hpp"

class LittleGirl : public Victim
{
    public:

        LittleGirl();
        LittleGirl(std::string name);
        LittleGirl(LittleGirl const &little_girl);
        LittleGirl &operator=(LittleGirl const &little_girl);
        ~LittleGirl();

        void    getPolymorphed(void) const;

};

#endif
