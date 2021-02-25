/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 12:17:45 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/02/25 16:20:52 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name, int a, std::string b, std::string c) : _name(name), _height(a), _color(b), _hat(c)
{
    std::cout << "Pony " << _name << " is waiting for you" << std::endl << std::endl;
}

Pony::~Pony()
{
    std::cout << "\"Bye, my man\" - pony said" << std::endl;
}

void    Pony::pony_params(void)
{
    std::cout << "Pony's params:" << std::endl;
    std::cout << "Height - " << _height << std::endl;
    std::cout << "Color - " << _color << std::endl;
    std::cout << "Hat - " << _hat << std::endl << std::endl;
}