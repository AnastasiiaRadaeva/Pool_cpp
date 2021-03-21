/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 09:49:27 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/21 12:53:26 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
    Intern  someRandomIntern;
    Bureaucrat  sam = Bureaucrat("Sam", 1);

    Form    *robot;
    Form    *pardon;
    Form    *shrubbery;
    Form    *someone;

    robot = someRandomIntern.makeForm("robotomy request", "Bender");
    std::cout << *robot << std::endl;
    sam.signForm(*robot);
    sam.executeForm(*robot);
    std::cout << std::endl;

    pardon = someRandomIntern.makeForm("presidential pardon", "You");
    std::cout << *pardon << std::endl;
    sam.signForm(*pardon);
    sam.executeForm(*pardon);
    std::cout << std::endl;

    shrubbery = someRandomIntern.makeForm("shrubbery creation", "Home");
    std::cout << *shrubbery << std::endl;
    sam.signForm(*shrubbery);
    sam.executeForm(*shrubbery);
    std::cout << std::endl;

    someone = someRandomIntern.makeForm("strange request", "Sally");

    delete robot;
    delete pardon;
    delete shrubbery;

    return (0);
}

//clang++ -Wall -Wextra -Werror *.cpp
