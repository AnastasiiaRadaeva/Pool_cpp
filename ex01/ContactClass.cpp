/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactClass.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 11:15:14 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/02/08 15:02:34 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ContactClass.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Contact::Contact()
{
    this->info_out[0] = "First name: ";
    this->info_out[1] = "Last name: ";
    this->info_out[2] = "Nickname: ";
    this->info_out[3] = "Login: ";
    this->info_out[4] = "Postal address: ";
    this->info_out[5] = "Email address: ";
    this->info_out[6] = "Phone number: ";
    this->info_out[7] = "Birthday date: ";
    this->info_out[8] = "Favorite meal: ";
    this->info_out[9] = "Underwear color: ";
    this->info_out[10] = "Darkest secret: ";
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Contact::~Contact()
{
}

/*
** --------------------------------- METHODS ----------------------------------
*/


void    Contact::fill_contact(void)
{
    int index;

    index = -1;
    std::cout << std::endl;
    while (++index < 11)
    {
        // решить , что делать, если вводят несколько слов
        std::cout << this->info_out[index];
        std::cin >> this->contact_info[index];
    }
    std::cout << std::endl << "The contact created." << std::endl;
}

void    Contact::write_contact_to_table(void)
{
    // написать 4 столбика по 10 символов
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */