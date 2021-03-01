/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 11:19:58 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/01 12:16:27 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{

}

Human::~Human()
{

}

std::string Human::identify() const
{
    std::string adr;
    adr = _brain.identify();
    return (adr);
};

Brain const &Human::getBrain() const
{
    return (_brain);
}
