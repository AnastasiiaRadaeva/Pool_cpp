/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 10:57:56 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/01 12:12:14 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    _volume = 1500;
    _weight = 1800;
    _cerebral_gyri = "Very much";
}

Brain::~Brain()
{

}

std::string Brain::identify() const
{
    std::stringstream   info;
    std::string         adr;

    info << this;
    info >> adr;
    return (adr);
}

