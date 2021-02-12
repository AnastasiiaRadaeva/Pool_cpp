/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactClass.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 11:15:14 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/02/10 12:38:13 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ContactClass.hpp"

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
    while (++index < 11)
    {
        std::cout << info_out[index];
        std::getline(std::cin, contact_info[index]);
    }
    std::cout << "_________________________" << std::endl;
    std::cout << "|                       |" << std::endl;
    std::cout << "|The contact is created.|" << std::endl;
    std::cout << "|_______________________|" << std::endl << std::endl;
}

void    Contact::write_contact_to_table(int index)
{
    std::string table_str;

    std::cout << "|";
    std::cout << std::setw(10);
    std::cout << index;
    std::cout << "|";
    for (int i = 0; i < 3; i++)
    {
        table_str = contact_info[i];
        if (contact_info[i].size() > 8)
        {
            table_str.erase(9, table_str.size() - 9);
            table_str.push_back('.');
        }        
        std::cout << std::setw(10);
        std::cout << table_str;
        std::cout << "|";
    }
    std::cout << std::endl;
}

void    Contact::write_contact_info(void)
{
    for (int i = 0; i < 11; i++)
    {
        std::cout << std::setw(17);
        std::cout << info_out[i];
        std::cout << contact_info[i] << std::endl;
    }
    std::cout << std::endl;
}
