/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 10:05:35 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/26 13:47:20 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <set>

class Span
{
    public:
        Span(unsigned int N);
        Span(Span const &);
        Span &operator=(Span const &);
        ~Span();

        void    addNumber(int);
        int     shortestSpan();
        int     longestSpan();

        template <typename iter>
        void    addNumbers(iter begin, iter end)
        {
            if (_set_of_num.size() == _max_size)
                throw(SpanIsFull());
            if (std::distance(begin, end) == -1)
                throw (InvalidIterators());
            if (static_cast<unsigned long>(std::distance(begin, end)) > _max_size - _set_of_num.size())
                throw(TooManyNumbers());
            _set_of_num.insert(begin, end);
        }

    private:
        Span();
        unsigned int    _max_size;
        std::multiset<int>   _set_of_num;

        class SpanIsFull : public std::exception
        {
            const char *what() const throw() {
                return ("Error: Span is full");}
        };
        class NotEnoughNumber : public std::exception
        {
            const char *what() const throw() {
                return ("Error: Not enough number for this operation");}
        };
        class InvalidIterators : public std::exception
        {
            const char *what() const throw() {
                return ("Error: Invalid iterators");}
        };
        class TooManyNumbers : public std::exception
        {
            const char *what() const throw() {
                return ("Error: Too many numbers");}
        };
};

#endif
