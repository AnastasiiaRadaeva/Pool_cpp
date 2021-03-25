#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <set>

class Span:
{
    public:
        Span(unsigned int N);
        Span(Span const &);
        Span &operator=(Span const &);
        ~Span();

        void addNumber(unsigned int);

    private:
        Span();
        set<int>        _set_of_num;

        class AlreadyExist : public std::exception
        {
            const char *what() const throw() 
            return ("Error: This number already exists");
        }
}

#endif
