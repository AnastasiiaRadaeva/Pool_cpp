#include "Conversion.hpp"

Conversion::Conversion(char *value) : _str(value), _double(0), _float(0), _int(0), _char(0), _flag_in(0), _flag_out(0)
{
    parse(value);
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

void    Conversion::parse(char *value)
{
    if (strlen(value) == 1 && isalpha(value[0]) != 0)
    {
        _char = value[0];
        _int = static_cast<int>(_char);
        _float = static_cast<float>(_int);
        _double = static_cast<double>(_float);
    }
    else
    {
        std::stringstream ss(value);
        if (_str.find_first_of(".", 0) != std::string::npos && strlen(value) > 1)
        {
            if (_str.find_last_of("f", 0) != std::string::npos)
            {
                ss >> _float;
                if (ss.fail())
                    _flag_in = 1;
            }
            else
            {
                ss >> _double;
                if (ss.fail())
                    _flag_in = 1;
            }
            _double = atof(value);
            ss >> _float;
            if (ss.fail())
                _flag_out = 2;
            _float = static_cast<float>(_double);
            ss >> _int;
            if (ss.fail() && _flag_out != 2)
                _flag_out = 3;
            _int = static_cast<int>(_double);
            _char = static_cast<char>(_int);
        }
        else
        {
            ss >> _int;
            if (ss.fail())
                _flag_in = 1;
            else
            {
                _int = atoi(value);
                _double = static_cast<double>(_int);
                _float = static_cast<float>(_int);
                _char = static_cast<char>(_int);
            }
        }
    }
}

void    Conversion::printDouble(void)
{
    if (_flag_in == 1)
        std::cout << "impossible" << std::endl;
    else
    {
        std::cout << _double;
        if ((_double - static_cast<double>(_int)) == 0)
            std::cout << ".0";
        std::cout << std::endl;
    }
}

void    Conversion::printFloat(void)
{
    if (_flag_in == 1 || _flag_out == 2)
        std::cout << "impossible" << std::endl;
    else
    {
        std::cout << _float;
        if (!isnan(_float) && !isinf(_float) && (_float - static_cast<float>(_int)) == 0)
            std::cout << ".0";
        std::cout << "f" << std::endl;
    }
}

void    Conversion::printInt(void)
{
    if (_flag_in == 1 || _flag_out == 2 || _flag_out == 3 || isnan(_double) || isinf(_double))
        std::cout << "impossible" << std::endl;
    else
        std::cout << _int << std::endl;
}

void    Conversion::printChar(void)
{
    if (_flag_in == 1 || _flag_out == 2 || _flag_out == 3 || isnan(_double) || isinf(_double))
        std::cout << "impossible" << std::endl;
    else if (_int >= 32 && _int <= 126)
        std::cout << "'" << _char << "'" << std::endl;
    else
        std::cout << "Non displayable" << std::endl;
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
    