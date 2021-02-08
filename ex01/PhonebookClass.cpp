/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhonebookClass.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 12:56:51 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/02/08 15:00:57 by kbatwoma         ###   ########.fr       */
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
	// решить, как лучше построить таблицу
	int	i;

	i = -1;
	std::cout << "Index     |First name|Last name |Nickname  " << std::endl;
	while (++i <= index)
		contacts[i].write_contact_to_table();
	// просим индекс и даем по нему информацию
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */