
#ifndef FORM_HPP
# define FORM_HPP

class Form
{
    public:

        Form();
        Form(std::string name, int  grade_for_sign, int grade_for_ex);
        Form(Form const &);
        Form &operator=(Form const &);
        ~Form();

        std::string const   &getName() const;
        int                 getGradeSign() const;
        int                 getGradeEx() const;
        bool                getStatus() const;

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
        bool                _status;
        int const           _grade_for_sign;
        int const           _grede_for_execute;
};

#endif