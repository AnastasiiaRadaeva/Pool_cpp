/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactClass.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 11:15:14 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/02/08 15:00:01 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTCLASS_HPP
# define CONTACTCLASS_HPP

# include <string>
# include <iostream>

class Contact
{

	public:

		Contact();
		~Contact();

		void	fill_contact(void);
		void	write_contact_to_table(void);

	private:
	
		std::string	info_out[11];
		std::string contact_info[11];

};

#endif