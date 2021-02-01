/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp 	                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 18:04:17 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/01/25 23:05:08 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char	*ft_to_upper(char *str)
{
	int	index;

	index = -1;
	while (str[++index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		str[index] = str[index] - 32;
	}
	return (str);
}

int		main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc > 1)
		while (++i < argc)
			std::cout << ft_to_upper(argv[i]);
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);
}