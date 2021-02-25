/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 12:17:33 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/02/25 16:20:48 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void    ponyOnTheHeap(std::string name, int height, std::string color, std::string hat)
{
    std::cout << "Creating the pony..." << std::endl << std::endl;
    Pony    *my_pony = new Pony(name, height, color, hat);
    std::cout << "I'm on the heap!" << std::endl << std::endl;
    (*my_pony).pony_params();
    std::cout << "Removing the pony" << std::endl << std::endl;
    delete my_pony;
}

void    ponyOnTheStack(std::string name, int height, std::string color, std::string hat)
{
    std::cout << "Creating the pony..." << std::endl << std::endl;
    Pony    my_pony = Pony(name, height, color, hat);
    std::cout << "I'm on the Stack!" << std::endl << std::endl;
    my_pony.pony_params();
}

int main()
{
    std::cout << "______________" << std::endl;
    std::cout << "|            |" << std::endl;
    std::cout << "|  The Heap  |" << std::endl;
    std::cout << "|____________|" << std::endl << std::endl;
    
    ponyOnTheHeap("Julia", 140, "white", "sunhat");
    std::cout << "!!! The function passed control !!!" << std::endl;

    std::cout << "_______________" << std::endl;
    std::cout << "|             |" << std::endl;
    std::cout << "|  The Stack  |" << std::endl;
    std::cout << "|_____________|" << std::endl << std::endl;

    ponyOnTheStack("Sam", 132, "black", "porkpie");
    std::cout << "!!! The function passed control !!!" << std::endl;

    return (0);
}