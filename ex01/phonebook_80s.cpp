/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook_80s.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 10:35:17 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/02/08 14:47:01 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook_80s.hpp"

void	add()
{
	
}

void	search()
{

}

void	welcome(void)
{
	std::cout << std::endl << WELCOME << std::endl << std::endl;
	std::cout << INFO << std::endl;
	std::cout << INFO_COMMANDS << std::endl << std::endl;
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
		std::cin >> command;
		std::cout << std::endl;
		if (command.compare(CMD_EXIT) == 0)
			exit(EXIT_SUCCESS);
		else if (command.compare(CMD_ADD) == 0)
		{
			if (i < 8)
				phonebook.create_contact(i++);
			else
				std::cout << "Too much information. You can't add a new contact." << std::endl;
		}
		else if (command.compare(CMD_SEARCH) == 0)
			phonebook.search_contact(i);
		else
			std::cout << CMD_ERROR << std::endl;
	}
	return (0);
}
