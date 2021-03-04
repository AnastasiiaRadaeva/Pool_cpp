/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 15:40:17 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/04 12:30:27 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <fstream>
# include <cmath>

class Fixed
{

	public:

		Fixed();
		Fixed(const int integer);
		Fixed(const float float_point_num);
		~Fixed();

		Fixed(const Fixed& copy);
		Fixed&	operator=(const Fixed& fixed);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

	private:

		int					_fixed_point_num;
		static const int	_num_of_fract_bits = 8;

};

std::ostream&	operator<<(std::ostream &out, const Fixed& fixed);

#endif