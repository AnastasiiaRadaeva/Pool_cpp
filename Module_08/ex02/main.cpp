/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 13:54:03 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/26 15:01:18 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <list>

int main()
{
    MutantStack<int> mstack;

    std::cout << "--- Push | Pop | Top ---" << std::endl;
    mstack.push(5);
    mstack.push(7);

    std::cout << "Size: " << mstack.size() << std::endl;
    std::cout << "Top: " << mstack.top() << std::endl;

    mstack.pop();

    std::cout << "Size: " << mstack.size() << std::endl;
    std::cout << "Top: " << mstack.top() << std::endl;
    std::cout << std::endl;

    std::cout << "--- Iterators ---" << std::endl;
    mstack.push(3);
    mstack.push(4);
    mstack.push(5);
    mstack.push(6);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::cout << std::endl;

    std::cout << "--- List | Iterators ---" << std::endl;
    std::list<int> list_;
    list_.push_back(5);
    list_.push_back(3);
    list_.push_back(4);
    list_.push_back(5);
    list_.push_back(6);

    std::list<int>::iterator it_list = list_.begin();
    std::list<int>::iterator ite_list = list_.end();

    ++it_list;
    --it_list;
    while (it_list != ite_list)
    {
        std::cout << *it_list << std::endl;
        ++it_list;
    }
    std::cout << std::endl;

    std::cout << "--- Reverse Iterators ---" << std::endl;
    MutantStack<int>::reverse_iterator rit = mstack.rbegin();
    MutantStack<int>::reverse_iterator rite = mstack.rend();

    --rit;
    ++rit;
    while (rit != rite)
    {
        std::cout << *rit << std::endl;
        ++rit;
    }
    std::cout << std::endl;

    std::cout << "--- List | Reverse Iterators ---" << std::endl;
    std::list<int>::reverse_iterator rit_list = list_.rbegin();
    std::list<int>::reverse_iterator rite_list = list_.rend();

    --rit_list;
    ++rit_list;
    while (rit_list != rite_list)
    {
        std::cout << *rit_list << std::endl;
        ++rit_list;
    }
    std::cout << std::endl;

    std::cout << "--- Copy ---" << std::endl;
    MutantStack<int> mstack_2(mstack);
    MutantStack<int>::iterator it_2 = mstack_2.begin();
    MutantStack<int>::iterator ite_2 = mstack_2.end();
    ++it_2;
    --it_2;
    while (it_2 != ite_2)
    {
        std::cout << *it_2 << std::endl;
        ++it_2;
    }
    std::cout << std::endl;
    
    std::cout << "--- Operator= ---" << std::endl;
    MutantStack<int> mstack_3;
    mstack_3 = mstack;
    MutantStack<int>::iterator it_3 = mstack_3.begin();
    MutantStack<int>::iterator ite_3 = mstack_3.end();
    ++it_3;
    --it_3;
    while (it_3 != ite_3)
    {
        std::cout << *it_3 << std::endl;
        ++it_3;
    }
    std::cout << std::endl;

    return 0;
}

// clang++ -Wall -Wextra -Werror *.cpp 
