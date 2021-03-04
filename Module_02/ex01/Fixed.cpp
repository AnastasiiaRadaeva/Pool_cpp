/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 15:40:26 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/04 13:16:21 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*
** Constructors
*/

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_fixed_point_num = 0;
}

Fixed::Fixed(const int integer)
{
	std::cout << "Int constructor called" << std::endl;
	_fixed_point_num = integer << _num_of_fract_bits;
}

Fixed::Fixed(const float float_point_num)
{
	std::cout << "Float constructor called" << std::endl;
	_fixed_point_num = (int)(roundf(float_point_num * ( 1 << _num_of_fract_bits)));
}

Fixed::Fixed(const Fixed& copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

/*
** Destructor
*/

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

/*
** An assignation operator overload
*/

Fixed&	Fixed::operator=(const Fixed& fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	_fixed_point_num = fixed.getRawBits();
	return (*this);
}

/*
** Member functions
*/

int		Fixed::getRawBits(void) const
{
	return (_fixed_point_num);
}

void	Fixed::setRawBits(int const raw)
{
	_fixed_point_num = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)_fixed_point_num / (float)(1 << _num_of_fract_bits));
}

int		Fixed::toInt(void) const
{
	return (_fixed_point_num >> _num_of_fract_bits);
}

/*
** Friend functions
*/

std::ostream&	operator<<(std::ostream &out, const Fixed& fixed)
{
	return (out << fixed.toFloat());
}
