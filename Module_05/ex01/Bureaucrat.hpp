/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 09:49:01 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/19 10:55:20 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <fstream>
# include "Form.hpp"

class Form;

class Bureaucrat
{
    public:

        Bureaucrat();
        Bureaucrat(std::string const name, int grade);
        Bureaucrat(Bureaucrat const &);
        Bureaucrat &operator=(Bureaucrat const &);
        ~Bureaucrat();

        std::string const   &getName() const;
        int                 getGrade() const;
        void                increment();
        void                decrement();
        void                signForm(Form &);

        class GradeTooHighException : public std::exception
        {
            const char* what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            const char* what() const throw();
        };

    private:

        std::string const   _name;
        int                 _grade;
};

std::ostream    &operator<<(std::ostream &out, const Bureaucrat &);

#endif