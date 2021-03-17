/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 11:47:10 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/17 15:49:11 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad() : _number_of_units(0), _start_size_of_array(1)
{
    _units = new ISpaceMarine*[_start_size_of_array];
    int i = -1;
    while (++i < _start_size_of_array)
        _units[i] = NULL;
}

Squad::Squad(Squad const &squad)
{
    *this = squad;
    _number_of_units = squad._number_of_units;
    _start_size_of_array = squad._start_size_of_array;
    int number = _number_of_units > _start_size_of_array ? _number_of_units : _start_size_of_array;
    _units = new ISpaceMarine*[number];
    int i = -1;
    while (++i < number)
    {
        _units[i] = NULL;
        if (squad._units[i])
            _units[i] = squad._units[i]->clone();
    }
}

Squad &Squad::operator=(Squad const &squad)
{
    int i = -1;
    while (++i < _number_of_units)
        delete _units[i];
    delete [] _units;

    _number_of_units = squad._number_of_units;
    _start_size_of_array = squad._start_size_of_array;
    int number = _number_of_units > _start_size_of_array ? _number_of_units : _start_size_of_array;
    _units = new ISpaceMarine*[number];
    i = -1;
    while (++i < number)
    {
        _units[i] = NULL;
        std::cout << "Here" << std::endl;
        if (squad._units[i])
        {
            std::cout << "Here_1" << std::endl;
            _units[i] = squad._units[i]->clone();
            std::cout << "Here_2" << std::endl;
        }
    }
    std::cout << "Here_5" << std::endl;
    return (*this);
}

Squad::~Squad()
{
    int i = -1;
    while (++i < _number_of_units)
        delete _units[i];
    delete [] _units;
}

/*
** Member Functions
*/

int             Squad::getCount(void) const
{
    return (_number_of_units);
}

ISpaceMarine*   Squad::getUnit(int n) const
{
    return (_units[n]);
}

int             Squad::push(ISpaceMarine *new_unit)
{
    if (new_unit)
    {
        int i = -1;
        while (++i < _number_of_units)
            if (_units[i] == new_unit)
                break;
        if (i == _number_of_units)
        {
            if (_number_of_units >= _start_size_of_array)
            {
                ISpaceMarine **new_squad = new ISpaceMarine*[_number_of_units + 1];
                int c = -1;
                while (++c < _number_of_units)
                    new_squad[c] = _units[c];
                delete [] _units;
                _units = new_squad;
            }
            _units[_number_of_units] = new_unit;
            ++_number_of_units;
        }
    }
    return (_number_of_units);
}
