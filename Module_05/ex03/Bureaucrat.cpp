/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 09:48:55 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/19 14:45:23 by kbatwoma         ###   ########.fr       */
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
    if (this != &bur)
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

void                Bureaucrat::signForm(Form &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << _name << " signs " << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << _name << " cannot sign " << form.getName() << " because his grade too low for this form" << std::endl;
    }        
}

void                Bureaucrat::executeForm(Form const &form)
{
    try
    {
        form.execute(*this);
        std::cout << _name << " executes " << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}

/*
** <<
*/

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bur)
{
    return (out << bur.getName() << ", bureaucrat grade " << bur.getGrade());
}
