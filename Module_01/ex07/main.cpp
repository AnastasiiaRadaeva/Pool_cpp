/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 14:55:58 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/01 15:38:38 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	if (argc != 4)
		return (0); // нужно обработать эту ошибку
	if (!argv[2] || !argv[3])
		return (0); // обработать ошибку
	std::ifstream	file(argv[1]);
//find and replace - see in cplusplus
		
}
