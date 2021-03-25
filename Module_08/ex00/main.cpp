/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 10:39:58 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/25 12:35:48 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "easyfind.hpp"
# include <vector>
# include <list>


int main()
{
    std::cout << "--- List ---" << std::endl;
    std::list<int>      list_1;
    list_1.push_back(1);
    list_1.push_back(5);
    list_1.push_back(9);
    list_1.push_back(76);
    list_1.push_back(91);
    std::list<int>::iterator it_list;
    it_list = easyfind(list_1, 5);
    std::cout << *it_list << std::endl;
    try
    {
        it_list = easyfind(list_1, 100);
        std::cout << *it_list << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl;

    std::cout << "--- Vector ---" << std::endl;
    std::vector<int>    vector_1;
    vector_1.push_back(3);
    vector_1.push_back(7);
    vector_1.push_back(11);
    vector_1.push_back(21);
    vector_1.push_back(42);
    std::vector<int>::iterator it_vector;
    it_vector = easyfind(vector_1, 21);
    std::cout << *it_vector << std::endl;
    try
    {
        it_vector = easyfind(vector_1, 100);
        std::cout << *it_vector << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl;

    std::cout << "--- Map ---" << std::endl;
    std::map<int, int> map_1;
    map_1[1] = 1;
    map_1[2] = 32;
    map_1[3] = 58;
    std::map<int, int>::iterator it_map;
    it_map = easyfind(map_1, 3);
    std::cout << it_map->first << ", " << it_map->second << std::endl;
    try
    {
        it_map = easyfind(map_1, 100);
    std::cout << it_map->first << ", " << it_map->second << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl;

    std::cout << "--- Multimap ---" << std::endl;
    std::multimap<int, int> multimap_1;
    typedef std::pair <int, int> int_pair;
    multimap_1.insert(int_pair(1, 1));
    multimap_1.insert(int_pair(2, 4));
    multimap_1.insert(int_pair(2, 7));
    std::multimap<int, int>::iterator it_multimap;
    it_multimap = easyfind(multimap_1, 2);
    std::cout << it_multimap->first << ", " << it_multimap->second << std::endl;
    try
    {
        it_map = easyfind(multimap_1, 100);
    std::cout << it_multimap->first << ", " << it_multimap->second << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (0);
    std::cout << std::endl;

    return (0);
}

//clang++ -Wall -Wextra -Werror *.cpp 