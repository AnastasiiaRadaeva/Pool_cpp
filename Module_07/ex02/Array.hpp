/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 13:11:28 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/24 14:25:42 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<typename T>
class Array
{
    public:

        Array() : _n(0) { _array = new T[0]; *_array = 0;}
        Array(unsigned int n) : _n(n) 
        {
            _array = new T[_n]; 
            for (unsigned int i = 0; i < _n; i++) {_array[i] = 0;}
        }
        Array(Array const &copy) : _n(copy._n)
        {
            _array = new T[_n];
            for(unsigned int i = 0; i < _n; i++) {_array[i] = copy._array[i];}
        }
        Array &operator=(Array const &copy)
        {
            if (this != &copy){
            delete [] _array;
            _n = copy._n;
            _array = new T[_n];
            for(unsigned int i = 0; i < _n; i++) {_array[i] = copy._array[i];}
            }
            return (*this);
        }
        ~Array()
        {
            delete [] _array;
        }

        T   &operator[](unsigned int i)
        {
            if(i > _n - 1){throw(std::exception());}
            return (_array[i]);
        }
        unsigned int &size(void) {return(_n);}

    private:

        T               *_array;
        unsigned int    _n;

};

#endif