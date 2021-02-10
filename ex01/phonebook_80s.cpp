/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook_80s.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 10:35:17 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/02/10 12:36:12 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook_80s.hpp"

void	welcome(void)
{
	std::cout << std::endl;
	std::cout << "________________________________________________________" << std::endl;
	std::cout << "|                                                      |" << std::endl;
	std::cout << "|           Welcome to incredible technology!          |" << std::endl;
	std::cout << "|______________________________________________________|" << std::endl;
	std::cout << "|                                                      |" << std::endl;
	std::cout << "| This is the electronic phonebook.                    |" << std::endl;
	std::cout << "|                                                      |" << std::endl;
	std::cout << "| You can add 8 contacts or find the contact you want. |" << std::endl;
	std::cout << "| You should enter the ADD / EXIT / SEARCH command.    |" << std::endl;
	std::cout << "|______________________________________________________|" << std::endl;
	std::cout << std::endl;
	std::cout << INFO_ADD << std::endl;
	std::cout << INFO_SEARCH << std::endl;
	std::cout << INFO_EXIT << std::endl << std::endl;
}

int	main()
{
	std::string	command;
	Phonebook	phonebook;

	welcome();
	int i = 0;
	while (1)
	{
		std::cout << "Enter command: ";
		std::getline(std::cin, command);
		std::cout << std::endl;
		if (command.compare(CMD_EXIT) == 0)
			exit(EXIT_SUCCESS);
		else if (command.compare(CMD_ADD) == 0)
		{
			if (i < 8)
				phonebook.create_contact(i++);
			else
				std::cout << "!!! Too much information. You can't add a new contact. !!!" << std::endl << std::endl;
		}
		else if (command.compare(CMD_SEARCH) == 0)
			phonebook.search_contact(i);
		else
			std::cout << "!!! Please, enter one of this commands: EXIT | ADD | SEARCH. !!!" << std::endl << std::endl;
	}
	return (0);
}
