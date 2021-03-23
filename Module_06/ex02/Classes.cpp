/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Classes.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 15:17:57 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/23 16:26:47 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Classes.hpp"

Base::~Base()
{
}

Base    *generate(void)
{
    Base    *array[3];
    array[0] = new A;
    array[1] = new B;
    array[2] = new C;

    int index = rand() % 3;
    int i = -1;
    while (++i < 3)
        if (i != index)
            delete array[i];
    return (array[index]);
}

void    identify_from_pointer(Base *p)
{
    A *a = dynamic_cast<A*>(p);
    if (a != NULL)
        std::cout << "A" << std::endl;

    B *b = dynamic_cast<B*>(p);
    if (b != NULL)
        std::cout << "B" << std::endl;

    C *c = dynamic_cast<C*>(p);
    if (c != NULL)
        std::cout << "C" << std::endl;
}

void    identify_from_reference(Base &p)
{
    try
    {
        A &a = dynamic_cast<A&>(p);
        std::cout << a << std::endl;

    }
    catch(const std::bad_cast& e)
    {
    }
    
    try
    {
        B &b = dynamic_cast<B&>(p);
        std::cout << b << std::endl;
    }
    catch(const std::bad_cast& e)
    {
    }

    try
    {
        C &c = dynamic_cast<C&>(p);
        std::cout << c << std::endl;
    }
    catch(const std::bad_cast& e)
    {
    }
}

std::ostream    &operator<<(std::ostream &out, A const &)
{
    return (out << "A");
}

std::ostream    &operator<<(std::ostream &out, B const &)
{
    return (out << "B");
}

std::ostream    &operator<<(std::ostream &out, C const &)
{
    return (out << "C");
}
