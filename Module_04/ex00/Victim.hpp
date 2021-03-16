/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 11:59:04 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/16 13:47:59 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include <fstream>

class Victim
{
    public:

        Victim();
        Victim(std::string name);
        Victim(Victim const &victim);
        Victim &operator=(Victim const &victim);
        virtual ~Victim();

        std::string const   &getName(void) const;
        virtual void        getPolymorphed(void) const;

    protected:

        std::string _name;
};

std::ostream&	operator<<(std::ostream &out, const Victim& victim);

#endif
