/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 13:12:10 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/24 14:24:28 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    std::cout << "--- Empty array ---" << std::endl;
    Array<int> int_array_empty;
    std::cout << int_array_empty.size() << std::endl << std::endl;

    std::cout << "--- Non empty array | int ---" << std::endl;
    Array<int> array_of_int(5);
    unsigned int count = array_of_int.size(); 
    std::cout << "size of array: " << count << std::endl << std::endl;
    for (unsigned int i = 0; i < count; i++)
    {
        array_of_int[i] = i;
        std::cout << array_of_int[i] << std::endl;
    }
    std::cout << std::endl << "--- Exeption ---" << std::endl;
    try
    {
        unsigned int i = array_of_int[count];
        std::cout <<  "array: " << i << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: this element of array not exist" << std::endl;
    }

    std::cout << std::endl << "--- Non empty array | char ---" << std::endl;
    Array<char> array_of_char(5);
    count = array_of_char.size(); 
    std::cout << "size of array: " << count << std::endl << std::endl;
    for (unsigned int i = 0; i < count; i++)
    {
        array_of_char[i] = 'a';
        std::cout << array_of_char[i] << std::endl;
    }

    std::cout << std::endl << "--- Operator= ---" << std::endl;
    Array<char> array_of_char_1;
    array_of_char_1 = array_of_char;
    for (unsigned int i = 0; i < count; i++)
        std::cout << array_of_char_1[i] << std::endl;

    std::cout << std::endl << "--- Copy Constructor ---" << std::endl;
    Array<int> array_of_int_1(array_of_int);
    for (unsigned int i = 0; i < count; i++)
        std::cout << array_of_int_1[i] << std::endl;

    return (0);

}
