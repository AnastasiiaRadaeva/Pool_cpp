/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 12:05:39 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/23 15:09:30 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data_functions.hpp"

int main()
{
    std::cout << "--- Serialized data ---" << std::endl;
    void *raw = serialize();
    
    std::cout << std::endl << "--- Deserialized data ---" << std::endl;
    Data *data = deserialize(raw);
    
    std::cout << "String 1: " << data->str_1 << std::endl;
    std::cout << "Value: " << data->val << std::endl;
    std::cout << "String 2: " << data->str_2 << std::endl;
    
    delete reinterpret_cast<char*>(raw);
    delete data;

    return (0);
}
