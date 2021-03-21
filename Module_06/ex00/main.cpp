/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 17:06:22 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/21 17:30:59 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

int main(int argc, char *argv[])
{
    if (argc != 2 || argv[1][0] == 0)
    {
        std::cerr << "Error: check your arguments" << std::endl;
        return (0);
    }
    Conversion conv(argv[1]);
    conv.printChar();
    conv.printInt();
    conv.printFloat();
    conv.printDouble();

    return (0);
}
