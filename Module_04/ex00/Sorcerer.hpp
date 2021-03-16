/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 11:58:32 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/16 13:35:00 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include "Victim.hpp"

class Sorcerer
{
    public:

        Sorcerer(std::string name, std::string title);
        Sorcerer(Sorcerer const &sorcerer);
        Sorcerer& operator=(Sorcerer const &sorcerer);
        ~Sorcerer();

        std::string const   &getName(void) const;
        std::string const   &getTitle(void) const;
        void                polymorph(Victim const &) const;

    private:

        Sorcerer();
        std::string _name;
        std::string _title;

};

std::ostream&	operator<<(std::ostream &out, const Sorcerer& sorcerer);

#endif