#include "Conversion.hpp"

Conversion::Conversion(char *value) : _str(value)
{
}

Conversion::Conversion(Conversion const &value) : _str(value._str)
{
    _double = value._double;
    _float = value._float;
    _int = value._int;
    _char = value._char;
}

Conversion  &Conversion::operator=(Conversion const &value)
{
    if (this != &value)
    {
        _str = value._str;
        _double = value._double;
        _float = value._float;
        _int = value._int;
        _char = value._char;
    }
    return (*this);
}

Conversion::~Conversion()
{
}

/*
** Member Functions
*/

void    Conversion::printDouble(void)
{
    _double = atof(_str);
    std::cout << std::setprecision(5) << _double << std::endl;
}

void    Conversion::printFloat(void)
{
    
}

void    Conversion::printInt(void)
{
    
}

void    Conversion::printChar(void)
{
    
}

    // double double_ = atof(argv[1]);
    // std::cout << std::fixed;
    // std::cout << std::setprecision(5) << double_ << std::endl;
    // std::cout.unsetf(std::ios::floatfield);
    // float float_ = static_cast<float>(double_);
    // std::cout << float_ << std::endl;
    // int int_ = static_cast<int>(float_);
    // std::cout << int_ << std::endl;
    // char char_ = static_cast<char>(int_);
    // std::cout << char_ << std::endl;
    