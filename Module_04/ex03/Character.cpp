/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 13:56:28 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/18 16:49:35 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name) : _name(name), _number_of_materia(0), _start_num_of_mat(4)
{
    _array_of_materia = new AMateria*[_start_num_of_mat];
    int i = -1;
    while (++i < _start_num_of_mat)
        _array_of_materia[i] = NULL;
}

Character::Character(Character const &character)
{
    _name = character._name;
    _number_of_materia = character._number_of_materia;
    _start_num_of_mat =character._start_num_of_mat;
    _array_of_materia = new AMateria*[_start_num_of_mat];
    int i = -1;
    while (++i < _start_num_of_mat)
    {
        _array_of_materia[i] = NULL;
        if (character._array_of_materia[i])
            _array_of_materia[i] = character._array_of_materia[i];
    }
}

Character &Character::operator=(Character const &character)
{
    if (this != &character)
    {
        _name = character._name;
        _number_of_materia = character._number_of_materia;
        _start_num_of_mat =character._start_num_of_mat;
        int i = -1;
        while (++i < _number_of_materia)
            delete _array_of_materia[i];
        delete [] _array_of_materia;
        _array_of_materia = new AMateria*[_start_num_of_mat];
        i = -1;
        while (++i < _start_num_of_mat)
        {
            _array_of_materia[i] = NULL;
            if (character._array_of_materia[i])
                _array_of_materia[i] = character._array_of_materia[i];
        }
    }
    return (*this);
}

Character::~Character()
{
    int i = -1;
    while (++i < _number_of_materia)
        delete _array_of_materia[i];
    delete [] _array_of_materia;
}

/*
** Member Functions
*/

std::string const   &Character::getName(void) const
{
    return (_name);
}

void                Character::equip(AMateria *m)
{
    if (_number_of_materia < _start_num_of_mat)
    {
        _array_of_materia[_number_of_materia] = m;
        ++_number_of_materia;
    }
}

void                Character::unequip(int idx)
{
    if (_array_of_materia[idx])
    {
        _array_of_materia[idx] = NULL;
        --_number_of_materia;
    }
}

void                Character::use(int idx, ICharacter &target)
{
    if (_array_of_materia[idx])
        _array_of_materia[idx]->use(target);
}
