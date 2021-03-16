/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 11:59:34 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/16 15:01:11 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class Peon : public Victim
{
    public:

        Peon();
        Peon(std::string name);
        Peon(Peon const &peon);
        Peon &operator=(Peon const &peon);
        ~Peon();

        void    getPolymorphed(void) const;

};

#endif
