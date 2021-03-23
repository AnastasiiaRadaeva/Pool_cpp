/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Classes.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 15:12:36 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/23 16:21:13 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSES_HPP
# define CLASSES_HPP

# include <iostream>
# include <cstdlib>
# include <time.h>
# include <thread>
# include <chrono>

class Base
{
    public:
        virtual ~Base();
};

class A: public Base
{
};
std::ostream    &operator<<(std::ostream &out, A const &);

class B: public Base
{
};
std::ostream    &operator<<(std::ostream &out, B const &);

class C: public Base
{
};
std::ostream    &operator<<(std::ostream &out, C const &);

Base    *generate(void);
void    identify_from_pointer(Base *p);
void    identify_from_reference(Base &p);

#endif
