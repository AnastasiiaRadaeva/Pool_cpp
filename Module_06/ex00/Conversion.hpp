#ifndef CONVERSION_HPP
# define CONVERSION_HPP

#include <iostream>
#include <cstdlib>
#include <ios>
#include <iomanip>

class Conversion
{
    public:

        Conversion(char *value);
        Conversion(Conversion const &);
        Conversion &operator=(Conversion const &);
        ~Conversion();

        void    printDouble();
        void    printFloat();
        void    printInt();
        void    printChar();

    private:

        Conversion();
        
        char        *_str;
        double      _double;
        float       _float;
        int         _int;
        char        _char;
};

#endif
