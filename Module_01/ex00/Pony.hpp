/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 12:17:41 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/02/25 16:21:03 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>

class Pony
{
    public:
        
        Pony(std::string name, int a, std::string b, std::string c);
        ~Pony();
        void pony_params(void);

    private:
    
    std::string _name;
    int         _height;
    std::string _color;
    std::string _hat;
    
};

#endif