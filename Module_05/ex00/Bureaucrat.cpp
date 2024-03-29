/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 09:48:14 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/19 11:14:07 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name), _grade(grade)
{
    if (_grade < 1)
        throw(Bureaucrat::GradeTooHighException());
    else if (_grade > 150)
        throw(Bureaucrat::GradeTooLowException());
}

Bureaucrat::Bureaucrat(Bureaucrat const &bur) : _name(bur._name), _grade(bur._grade)
{
    if (_grade < 1)
        throw(Bureaucrat::GradeTooHighException());
    else if (_grade > 150)
        throw(Bureaucrat::GradeTooLowException());
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &bur)
{
    if (_grade < 1)
        throw(Bureaucrat::GradeTooHighException());
    else if (_grade > 150)
        throw(Bureaucrat::GradeTooLowException());
    _grade = bur._grade;
    return (*this);
}

Bureaucrat::~Bureaucrat()
{
}

/*
** Nested Classes
*/

const char  *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("* Grade too high *");
}

const char  *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("* Grade too low *");
}

/*
** Member Functions
*/

std::string const   &Bureaucrat::getName() const
{
    return (_name);
}

int                 Bureaucrat::getGrade() const
{
    return (_grade);
}

void                Bureaucrat::increment()
{
    if (_grade - 1 < 1)
        throw(Bureaucrat::GradeTooHighException());
    --_grade;
}

void                Bureaucrat::decrement()
{
    if (_grade + 1 > 150)
        throw(Bureaucrat::GradeTooLowException());
    ++_grade;
}

/*
** <<
*/

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bur)
{
    return (out << bur.getName() << ", bureaucrat grade " << bur.getGrade());
}
