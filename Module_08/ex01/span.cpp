/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 10:05:39 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/26 13:46:24 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int N) : _max_size(N), _set_of_num()
{
}

Span::Span(Span const &copy) : _max_size(copy._max_size), _set_of_num(copy._set_of_num)
{
}

Span &Span::operator=(Span const &copy)
{
    if (this != &copy)
    {
        _max_size = copy._max_size;
        _set_of_num = copy._set_of_num;
    }
    return (*this);
}

Span::~Span()
{ 
}

/*
** Member Functions
*/

void    Span::addNumber(int n)
{
    if (_set_of_num.size() == _max_size)
        throw(SpanIsFull());
    _set_of_num.insert(n);
}

int     Span::shortestSpan(void)
{
    if (_set_of_num.empty() || _set_of_num.size() == 1)
        throw(NotEnoughNumber());
    std::multiset<int>::iterator it_1 = _set_of_num.begin();
    std::multiset<int>::iterator it_2 = _set_of_num.begin();
    it_2++;
    int compare = *it_2 - *it_1;
    while (++it_2 != _set_of_num.end())
    {
        ++it_1;
        compare = compare > (*it_2 - *it_1) ? *it_2 - *it_1 : compare;
    }
    return (compare);
}

int     Span::longestSpan(void)
{
    if (_set_of_num.empty() || _set_of_num.size() == 1)
        throw(NotEnoughNumber());
    std::multiset<int>::iterator it_begin = _set_of_num.begin();
    std::multiset<int>::reverse_iterator it_end = _set_of_num.rbegin();
    return (*it_end - *it_begin);
}
