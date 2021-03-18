/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 14:28:42 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/18 16:20:06 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _size_of_array(4), _number_of_materia(0)
{
    _array_of_materia = new AMateria*[_size_of_array];
    int i = -1;
    while (++i < _size_of_array)
        _array_of_materia[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &materia)
{
    _number_of_materia = materia._number_of_materia;
    _size_of_array = materia._size_of_array;
    _array_of_materia = new AMateria*[_size_of_array];
    int i = -1;
    while (++i < _size_of_array)
    {
        _array_of_materia[i] = NULL;
        if (materia._array_of_materia[i])
            _array_of_materia[i] = materia._array_of_materia[i];
    }
}

MateriaSource &MateriaSource::operator=(MateriaSource const &materia)
{
    _number_of_materia = materia._number_of_materia;
    _size_of_array = materia._size_of_array;
    int i = -1;
    while (++i < _number_of_materia)
        delete _array_of_materia[i];
    delete [] _array_of_materia;
    _array_of_materia = new AMateria*[_size_of_array];
    i = -1;
    while (++i < _size_of_array)
    {
        _array_of_materia[i] = NULL;
        if (materia._array_of_materia[i])
            _array_of_materia[i] = materia._array_of_materia[i];
    }
    return (*this);
}

MateriaSource::~MateriaSource()
{
    int i = -1;
    while (++i < _number_of_materia)
        delete _array_of_materia[i];
    delete [] _array_of_materia;
}

/*
** Member Functions
*/

void        MateriaSource::learnMateria(AMateria *m)
{
    if (_number_of_materia < _size_of_array)
    {
        _array_of_materia[_number_of_materia] = m;
        ++_number_of_materia;
    }

}

AMateria    *MateriaSource::createMateria(std::string const &type)
{
    int i = -1;
    while (++i < _number_of_materia)
    {
        if (_array_of_materia[i]->getType() == type)
            return (_array_of_materia[i]->clone());
    }
    return (0);
}
