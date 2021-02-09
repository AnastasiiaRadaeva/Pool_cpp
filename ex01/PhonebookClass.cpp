/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhonebookClass.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 12:56:51 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/02/09 17:55:06 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhonebookClass.hpp"

Phonebook::Phonebook()
{
}

Phonebook::~Phonebook()
{
	
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Phonebook::create_contact(int index)
{
	this->contacts[index].fill_contact();
}

void	Phonebook::search_contact(int index)
{
	int	number;

	std::cout << "|     Index|First name| Last name|  Nickname|" << std::endl;
	std::cout << "|___________________________________________|" << std::endl;
	for (int i = 0; i < index; i++)
		contacts[i].write_contact_to_table(i + 1);
	std::cout << std::endl;
	if (index < 1)
		std::cout << "You haven't registered any contacts yet.\n\n";
	else
	{
		std::cout << "Please, enter index: ";
		std::cin >> number;
		if (number >= 1 && number <= 8)
			contacts[number - 1].write_contact_info();
		else
			std::cout << "Please, enter correct index\n";
	}
		

}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */