/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 09:49:07 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/19 16:58:11 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int grade_for_sign, int grade_for_ex) : _name(name), _status(false), _grade_for_sign(grade_for_sign), _grade_for_execute(grade_for_ex)
{
    if (_grade_for_sign < 1)
        throw(Form::GradeTooHighException());
    else if (_grade_for_sign > 150)
        throw(Form::GradeTooLowException());
    if (_grade_for_execute < 1)
        throw(Form::GradeTooHighException());
    else if (_grade_for_execute > 150)
        throw(Form::GradeTooLowException());
}

Form::Form(Form const &form) :  _name(form._name),  _status(form._status), _grade_for_sign(form._grade_for_sign), _grade_for_execute(form._grade_for_execute), _target(form._target)
{
    if (_grade_for_sign < 1)
        throw(Form::GradeTooHighException());
    else if (_grade_for_sign > 150)
        throw(Form::GradeTooLowException());
    if (_grade_for_execute < 1)
        throw(Form::GradeTooHighException());
    else if (_grade_for_execute > 150)
        throw(Form::GradeTooLowException());
}

Form &Form::operator=(Form const &form)
{
    if (_grade_for_sign < 1)
        throw(Form::GradeTooHighException());
    else if (_grade_for_sign > 150)
        throw(Form::GradeTooLowException());
    if (_grade_for_execute < 1)
        throw(Form::GradeTooHighException());
    else if (_grade_for_execute > 150)
        throw(Form::GradeTooLowException());
    if (this != &form)
        _status = form._status;
        _target = form._target;
    return (*this);
}

Form::~Form()
{    
}

/*
** Nested Classes
*/

const char  *Form::GradeTooHighException::what() const throw()
{
    return ("* Grade too high for this form *");
}

const char  *Form::GradeTooLowException::what() const throw()
{
    return ("* Grade too low for this form *");
}

const char  *Form::FormIsNotSigned::what() const throw()
{
    return ("* This form is not signed yet. You cannot execute it *");
}

/*
** Member Functions
*/

std::string const   &Form::getName(void) const
{
    return (_name);
}

int                 Form::getGradeSign(void) const
{
    return (_grade_for_sign);
}

int                 Form::getGradeEx(void) const
{
    return (_grade_for_execute);
}

bool                Form::getStatus(void) const
{
    return (_status);
}

std::string const   &Form::getTarget(void) const
{
    return (_target);
}

void                Form::setTarget(std::string const &target)
{
    _target = target;
}

void                Form::beSigned(Bureaucrat const &bur)
{
    if (bur.getGrade() > _grade_for_sign)
        throw (Form::GradeTooLowException());
    _status = true;
}

std::ostream        &operator<<(std::ostream &out, Form const &form)
{
    if (form.getStatus() == true)
        return (out << "Form " << form.getName() << " is signed");
    else
        return (out << "Form " << form.getName() << " is not signed");
}

void    Form::execute(Bureaucrat const &executor) const
{
    if (getStatus() == false)
        throw (Form::FormIsNotSigned());
    if (executor.getGrade() > getGradeEx())
        throw (Form::GradeTooLowException());
    formFunction();
}
