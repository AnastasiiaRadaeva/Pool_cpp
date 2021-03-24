/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 12:36:05 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/24 13:05:03 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename A>

void iter(A *a, int count, void (*f)(A const &))
{
    if (count < 0)
        return;
    for (int i = 0; i < count; i++)
        f(a[i]);
}

class Awesome
{
    public:
        Awesome(void) : _n(42){return;}
        int get(void) const {return this->_n;}
    private:
        int _n;
};

std::ostream &operator<<(std::ostream &o, Awesome const &rhs){o<<rhs.get(); return o;}
template<typename T>
void print(T const &x) {std::cout << x << std::endl; return;}

#endif
