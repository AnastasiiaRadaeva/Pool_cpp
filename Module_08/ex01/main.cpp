/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 10:05:43 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/26 13:49:20 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <vector>
#include <list>

int main()
{
    Span sp = Span(5);

    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << "Shortest: " << sp.shortestSpan() << std::endl;
    std::cout << "Longest: " << sp.longestSpan() << std::endl;
    std::cout << std::endl;

    std::cout << "--- Full span ---" << std::endl;
    try
    {
        sp.addNumber(11);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl;

    Span sp_1 = Span(10000);
    std::cout << "--- Shortest|Longest span in empty span ---" << std::endl;
    try
    {
        std::cout << "Shortest: " << sp_1.shortestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        std::cout << "Longest: " << sp_1.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl;

    sp_1.addNumber(1);
    std::cout << "--- Shortest|Longest span with 1 number ---" << std::endl;
    try
    {
        std::cout << "Shortest: " << sp_1.shortestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        std::cout << "Longest: " << sp_1.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl;
    
    std::cout << "--- 10000 numbers ---" << std::endl;
    std::vector<int> vect;
    for (int i = 0; i < 9999; i++)
        vect.push_back((i + 1) * 2);
    std::vector<int>::iterator first = vect.begin();
    std::vector<int>::iterator last = vect.end();
    try
    {
        sp_1.addNumbers(first, last);
        std::cout << "Shortest: " << sp_1.shortestSpan() << std::endl;
        std::cout << "Longest: " << sp_1.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    return (0);
}

//clang++ -Wall -Wextra -Werror *.cpp 
