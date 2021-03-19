/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 09:49:23 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/19 15:22:32 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    public:

        Form();
        Form(std::string name, int grade_for_sign, int grade_for_ex);
        Form(Form const &);
        Form &operator=(Form const &);
        virtual ~Form();

        std::string const   &getName() const;
        int                 getGradeSign() const;
        int                 getGradeEx() const;
        bool                getStatus() const;
        std::string const   &getTarget() const;
        
        void                beSigned(Bureaucrat const &);
        void                execute(Bureaucrat const & executor) const;
        virtual void        formFunction() const = 0;

        void                setTarget(std::string const &target);

        class GradeTooHighException : public std::exception
        {
            const char* what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            const char* what() const throw();
        };

        class FormIsNotSigned : public std::exception
        {
            const char* what() const throw();
        };

    private:

        std::string const   _name;
        bool                _status;
        int const           _grade_for_sign;
        int const           _grade_for_execute;
        std::string         _target;
};

std::ostream    &operator<<(std::ostream &out, Form const &);

#endif