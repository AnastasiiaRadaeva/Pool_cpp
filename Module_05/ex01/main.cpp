/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 09:49:27 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/19 11:58:04 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    std::cout << "--- Creation of bureaucrats and forms | without exeptions ---" << std::endl;
    Bureaucrat mike("Mike", 2);
    std::cout << mike << std::endl;

    Bureaucrat nick("Nick", 57);
    std::cout << nick << std::endl;
    std::cout << std::endl;

    Form five("Five", 3, 50);
    std::cout << five << std::endl;

    Form ten("Ten", 50, 75);
    std::cout << ten << std::endl;
    std::cout << std::endl;    
    
    std::cout << "--- Creation of forms | with exeptions ---" << std::endl;
    try
    {
        Form seven("Seven", 0, 6);
        std::cout << seven << std::endl;
    }
    catch (std::exception &ex)
    {
        std::cerr << ex.what() << std::endl;
    }

    try
    {
        Form two("Two", 167, 0);
        std::cout << two << std::endl;
    }
    catch (std::exception &ex)
    {
        std::cerr << ex.what() << std::endl;
    }
    std::cout << std::endl;

    std::cout << "--- Signing | without exeptions ---" << std::endl;
    try
    {
        mike.signForm(five);
        std::cout << five << std::endl;
    }
    catch (std::exception &ex)
    {
        std::cerr << ex.what() << std::endl;
    }
    std::cout << std::endl;
    
    std::cout << "--- Signing | with exeptions ---" << std::endl;
    nick.signForm(ten);
    std::cout << ten << std::endl;
    std::cout << std::endl;

    return (0);
}

//clang++ -Wall -Wextra -Werror *.cpp
