/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 15:40:17 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/03 11:55:02 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{

	public:

		Fixed();
		~Fixed();

		Fixed(const Fixed& copy);
		Fixed&	operator=(const Fixed& fixed);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private:

		int					_fixed_point_num;
		static const int	_num_of_fract_bits = 8;

};

#endif