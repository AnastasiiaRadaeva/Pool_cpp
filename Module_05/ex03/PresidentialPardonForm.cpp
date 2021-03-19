/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 12:54:23 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/19 16:56:50 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : Form("presidential pardon", 25, 5)
{
    setTarget(target);
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &form) : Form(form)
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &form)
{
    if (this != &form)
        Form::operator= (form);
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

/*
** Member Functions
*/

void    PresidentialPardonForm::formFunction() const
{
    std::cout << getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
