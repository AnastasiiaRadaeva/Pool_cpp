
#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <fstream>

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