/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 12:36:21 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/24 13:04:05 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
    int tab[] = {0, 1, 2, 3, 4};
    float tab1[] = {1.05, 3.75, 8.9};
    Awesome tab2[5];

    iter(tab, 5, print);
    std::cout << std::endl;
    iter(tab1, 3, print);
    std::cout << std::endl;
    iter(tab2, 5, print);

    return (0);
}
