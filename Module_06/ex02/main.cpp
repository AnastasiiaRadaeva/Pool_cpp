/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 15:18:16 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/23 16:25:35 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Classes.hpp"

int main()
{
    srand(time(NULL));

    Base    *parent = generate();
    std::cout << "Pointer_1: ";
    identify_from_pointer(parent);
    std::cout << "Reference_1: ";
    identify_from_reference(*parent);
    
    std::this_thread::sleep_for (std::chrono::nanoseconds(1));
    parent = generate();
    std::cout << "Pointer_2: ";
    identify_from_pointer(parent);
    std::cout << "Reference_2: ";
    identify_from_reference(*parent);

    std::this_thread::sleep_for (std::chrono::nanoseconds(1));
    parent = generate();
    std::cout << "Pointer_3: ";
    identify_from_pointer(parent);
    std::cout << "Reference_3: ";
    identify_from_reference(*parent);
    
    return (0);
}