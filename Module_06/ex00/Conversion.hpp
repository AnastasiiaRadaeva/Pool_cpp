#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <iostream>
# include <cstdlib>
# include <ios>
# include <iomanip>
# include <cmath>
# include <cstring>
# include <cctype>
# include <sstream>
# include <string>

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
        
        std::string _str;
        double      _double;
        float       _float;
        int         _int;
        char        _char;
        int         _flag_in;
        int         _flag_out;

        void        parse(char *);

};

#endif
