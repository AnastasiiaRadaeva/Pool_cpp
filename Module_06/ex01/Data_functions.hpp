/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data_functions.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 12:05:48 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/23 13:41:22 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_FUNCTIONS_HPP
# define DATA_FUNCTIONS_HPP

# include <iostream>
# include <cstdlib>
# include <time.h>
#include <thread>
#include <chrono>

struct Data
{
    std::string str_1;
    int         val;
    std::string str_2;
};

void    *serialize(void);
Data    *deserialize(void *raw);

#endif
