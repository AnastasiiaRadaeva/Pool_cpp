/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data_functions.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 12:06:01 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/23 15:09:25 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data_functions.hpp"

char *getRandString(void)
{
    char base[] = "abcdefghijklmnopqrstuvwxyz";
    char *out = new char[6];
    int i = -1;
    while (++i < 5)
    {
        out[i] = base[rand()%26];
        std::this_thread::sleep_for (std::chrono::nanoseconds(1));
    }
    out[i] = '\0';

    return (out);
}

void    *serialize(void)
{
    srand (time(NULL));

    char *s1_c = getRandString();
    char *s2_c = getRandString();
    
    std::string s1(s1_c);
    int         val = rand()%100;
    std::string s2(s2_c);

    int size_s1 = sizeof(s1);
    std::cout << "String 1: " << s1 << std::endl;
    std::cout << "Size of string 1: " << size_s1 << std::endl;
    int size_val = sizeof(val);
    std::cout << "Value: " << val << std::endl;
    std::cout << "Size of value: " << size_val << std::endl;
    int size_s2 = sizeof(s2);
    std::cout << "String 2: " << s2 << std::endl;
    std::cout << "Size of string 2: " << size_s2 << std::endl;
    
    char        *raw = new char[size_s1 + size_val + size_s2];
 
    memcpy(reinterpret_cast<void*>(raw), reinterpret_cast<void*>(&s1), size_s1);
    memcpy(reinterpret_cast<void*>(raw + size_s1), reinterpret_cast<void*>(&val), size_val);
    memcpy(reinterpret_cast<void*>(raw + size_s1 + size_val), reinterpret_cast<void*>(&s2), size_s2);
    
    delete s1_c;
    delete s2_c;

    return (reinterpret_cast<void *>(raw));
}

Data    *deserialize(void *raw)
{
    char *raw_ch = reinterpret_cast<char*>(raw);

    Data *data = new Data;
    memcpy(reinterpret_cast<void*>(&(data->str_1)), reinterpret_cast<void*>(raw_ch), 24);
    memcpy(reinterpret_cast<void*>(&(data->val)), reinterpret_cast<void*>(raw_ch + 24), 4);
    memcpy(reinterpret_cast<void*>(&(data->str_2)), reinterpret_cast<void*>(raw_ch + 24 + 4), 24);

    return (data);
}
 