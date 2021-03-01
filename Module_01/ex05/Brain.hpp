/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 11:00:29 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/01 12:12:02 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <sstream>

class Brain
{
    public:

        Brain();
        ~Brain();
        
        std::string identify() const;

    private:

        int _volume;
        int _weight;
        std::string _cerebral_gyri; 

};

#endif