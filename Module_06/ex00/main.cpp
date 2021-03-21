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

#include <iostream>
#include <cstdlib>
#include <iomanip>

int main(int argc, char *argv[])
{
    if (argc != 2 || !argv[1])
    {
        std::cerr << "Error: check your arguments" << std::endl;
        return (0);
    }
    double a = atof(argv[1]);
    std::cout.precision(5); 
    std::cout << a << std::endl;

}
