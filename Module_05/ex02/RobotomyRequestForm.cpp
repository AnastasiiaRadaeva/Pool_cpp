/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 12:47:19 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/19 16:56:56 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : Form("Robotomy Request Form", 72, 45) 
{
    setTarget(target);
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &form) : Form(form)
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &form)
{
    if (this != &form)
        Form::operator= (form);
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

/*
** Member Functions
*/

void    RobotomyRequestForm::formFunction() const
{  
    std::cout << "drdrdrrdrdrdrdr............drrrrrrrrrdrdrdrdrdrrd..drdrrdrd" << std::endl;
    std::cout << getTarget() << " has been robotomized successfully 50% of the time" << std::endl;
}
