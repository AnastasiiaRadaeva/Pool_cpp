/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhonebookClass.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 12:56:52 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/02/08 14:42:22 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOKCLASS_HPP
# define PHONEBOOKCLASS_HPP

# include "ContactClass.hpp"

class Phonebook
{

	public:

		Phonebook();
		~Phonebook();
		
		void	create_contact(int index);
		void	search_contact(int index);

	private:

		Contact	contacts[8];

};

#endif