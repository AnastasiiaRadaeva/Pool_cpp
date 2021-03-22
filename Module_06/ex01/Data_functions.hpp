#ifndef DATA_FUNCTIONS_HPP
# define DATA_FUNCTIONS_HPP

# include <iostream>

struct Data
{
    std::string str_1;
    int         val;
    std::dtring str_2;
};

void    *serialize(void);
Data    *deserialize(void *raw);

#endif
