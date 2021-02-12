/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhonebookClass.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 12:56:51 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/02/10 13:23:19 by kbatwoma         ###   ########.fr       */
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
	std::cout << "____________________________________________" << std::endl;
	std::cout << "|                                          |" << std::endl;
	std::cout << "|Please, enter a new contact's information.|" << std::endl;
	std::cout << "|__________________________________________|" << std::endl << std::endl;
	contacts[index].fill_contact();
}

void	Phonebook::search_contact(int index)
{
	int	number = 0;

	std::cout << "_____________________________________________" << std::endl;
	std::cout << "|          |          |          |          |" << std::endl;
	std::cout << "|     Index|First name| Last name|  Nickname|" << std::endl;
	std::cout << "|__________|__________|__________|__________|" << std::endl;
	for (int i = 0; i < index; i++)
		contacts[i].write_contact_to_table(i + 1);
	std::cout << "|__________|__________|__________|__________|" << std::endl;
	std::cout << std::endl;
	if (index < 1)
		std::cout << "You haven't registered any contacts yet.\n\n";
	else
		while (number != 100)
		{
			std::cout << "Please, enter index or 100 (for return to main menu): ";
			std::cin >> number;
			std::cin.clear();
			std::cin.ignore(10000, '\n');
			std::cout << std::endl;
			if (number >= 1 && number <= index)
				contacts[number - 1].write_contact_info();
			else if (number != 100)
				std::cout << "!!! Please, enter the correct index !!!" << std::endl << std::endl;
		}
	std::cout << std::endl;
}
