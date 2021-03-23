/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 12:05:13 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/23 12:05:15 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Conversion::Conversion(char *value) : _str(value), _double(0), _float(0), _int(0), _char(0), _flag(0)
{
    parse(value);
}

Conversion::Conversion(Conversion const &value) : _str(value._str)
{
    _double = value._double;
    _float = value._float;
    _int = value._int;
    _char = value._char;
    _flag = value._flag;
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
        _flag = value._flag;
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
        if ((_str.find_first_of(".", 0) != std::string::npos && strlen(value) > 1) || _str.find("nan", 0) != std::string::npos || _str.find("inf", 0) != std::string::npos)
        {
            if (_str.find_first_of("f", 0) != std::string::npos)
            {
                ss >> _float;
                if (_str.find("nan", 0) == std::string::npos && _str.find("inf", 0) == std::string::npos && ss.fail())
                    _flag = 1;
            }
            else
            {
                ss >> _double;
                if (_str.find("nan", 0) == std::string::npos && _str.find("inf", 0) == std::string::npos && ss.fail())
                {
                    std::cout << "Fail" << std::endl;
                    _flag = 1;
                }
                    
            }
            _double = atof(value);
            _float = static_cast<float>(_double);
            _int = static_cast<int>(_double);
            _char = static_cast<char>(_int);
        }
        else
        {
            ss >> _int;
            if (ss.fail())
                _flag = 1;
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
    if (_flag == 1)
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
    float a;
    std::stringstream ss(_str);
    ss >> a;
    if ((_str.find("nan", 0) == std::string::npos && _str.find("inf", 0) == std::string::npos && ss.fail()) || _flag == 1)
        std::cout << "impossible" << std::endl;
    else
    {
        std::cout << _float;
        if (!std::isnan(_float) && !std::isinf(_float) && (_float - static_cast<float>(_int)) == 0)
            std::cout << ".0";
        std::cout << "f" << std::endl;
    }
}

void    Conversion::printInt(void)
{
    int a;
    std::stringstream ss(_str);
    ss >> a;
    if (ss.fail() || _flag == 1 || std::isnan(_double) || std::isinf(_double))
        std::cout << "impossible" << std::endl;
    else
        std::cout << _int << std::endl;
}

void    Conversion::printChar(void)
{
    int a;
    std::stringstream ss(_str);
    ss >> a;
    if (ss.fail() || _flag == 1 || std::isnan(_double) || std::isinf(_double))
        std::cout << "impossible" << std::endl;
    else if (_int >= 32 && _int <= 126)
        std::cout << "'" << _char << "'" << std::endl;
    else
        std::cout << "Non displayable" << std::endl;
}
