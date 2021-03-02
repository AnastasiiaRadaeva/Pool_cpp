/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 14:55:58 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/02 12:40:50 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <cstring>

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Error: wrong number of arguments." << std::endl;
		return (1);
	}
	if (!argv[2][0] || !argv[3][0])
	{
		std::cerr << "Error: empty string is forbidden." << std::endl;
		return (1);
	}
	
	std::string		name_of_new_file(argv[1]);
	std::string		name_of_old_file(argv[1]);
	std::string		str1(argv[2]);
	std::string		str2(argv[3]);
	size_t			pos;
	size_t			len_of_str1 = str1.length();
	size_t			len_of_str2 = str2.length();
	std::string		buff;
	
	name_of_new_file.insert(name_of_new_file.length(), ".replace");
	
	std::ifstream	read_file(name_of_old_file);
	if (!read_file)
	{
		std::cerr << "Error: file " << name_of_old_file << " is not exist." << std::endl;
		return (1);
	}
	std::ofstream	new_file(name_of_new_file);
	if (!new_file)
	{
		std::cerr << "Error: file " << name_of_new_file << " couldn't be created." << std::endl;
		return (1);
	}
	
	while (std::getline(read_file, buff))
	{
		pos = 0;
		while ((pos = buff.find(argv[2], pos)) != std::string::npos)
		{
			buff.replace(pos, len_of_str1, str2);
			pos += len_of_str2;
		}
		new_file << buff << std::endl;
	}
	read_file.close();
	new_file.close();
	return (0);
}
