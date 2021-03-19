/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 09:49:27 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/19 15:41:58 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    std::cout << "--- Creation of bureaucrats and forms | without exeptions ---" << std::endl;
    Bureaucrat mike("Mike", 2);
    std::cout << mike << std::endl;

    Bureaucrat nick("Nick", 57);
    std::cout << nick << std::endl;
    std::cout << std::endl;

    Bureaucrat liz("Liz", 149);
    std::cout << liz << std::endl;
    std::cout << std::endl;

    ShrubberyCreationForm three("home");
    std::cout << three << std::endl;

    RobotomyRequestForm robot("son");
    std::cout << robot << std::endl;
    std::cout << std::endl;    
    
    PresidentialPardonForm pardon("you");
    std::cout << pardon << std::endl;
    std::cout << std::endl;
    
    std::cout << "--- Executing | form is not signed ---" << std::endl;
    nick.executeForm(three);
    mike.executeForm(robot);
    liz.executeForm(pardon);
    std::cout << std::endl;

    std::cout << "--- Signing | with exeptions ---" << std::endl;
    nick.signForm(pardon);
    std::cout << pardon << std::endl;
    std::cout << std::endl;
    liz.signForm(three);
    std::cout << three << std::endl;
    std::cout << std::endl;

    std::cout << "--- Signing | without exeptions ---" << std::endl;
    mike.signForm(pardon);
    std::cout << pardon << std::endl;
    std::cout << std::endl;

    nick.signForm(pardon);
    std::cout << pardon << std::endl;
    std::cout << std::endl;

    return (0);
}

//clang++ -Wall -Wextra -Werror *.cpp
