/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 11:59:35 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/24 12:34:41 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template< typename T>
void swap(T &a, T &b)
{
    T add = a;
    a = b;
    b = add;
}

template< typename T>
T min(T &a, T &b)
{
    return (a < b ? a : b);
}

template< typename T>
T max(T &a, T &b)
{
    return (a > b ? a : b);
}

// class Awesome
// {
//     public:
//         Awesome(int n) : _n(n){}
//         bool operator==(Awesome const &rhs) const {return (this->_n == rhs._n);}
//         bool operator!=(Awesome const &rhs) const {return (this->_n != rhs._n);}
//         bool operator>(Awesome const &rhs) const {return (this->_n > rhs._n);}
//         bool operator<(Awesome const &rhs) const {return (this->_n < rhs._n);}
//         bool operator>=(Awesome const &rhs) const {return (this->_n >= rhs._n);}
//         bool operator<=(Awesome const &rhs) const {return (this->_n <= rhs._n);}

//         int _n;
// };

// std::ostream &operator<<(std::ostream &out, Awesome const &a)
// {
//     return (out << a._n);
// }

#endif