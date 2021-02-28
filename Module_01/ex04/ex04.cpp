/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 15:02:51 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/02/28 11:48:52 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string     str = "HI THIS IS BRAIN";
    std::string*    str_pointer = &str;
    std::string&    str_reference = str;

    std::cout << *str_pointer << std::endl;
    std::cout << str_reference << std::endl;

    return 0;
}