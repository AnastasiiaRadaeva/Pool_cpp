/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 10:18:35 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/25 12:35:43 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <map>

class OccurenceNotFound : public std::exception
{
    const char *what() const throw() 
    {
        return ("Error: Occurence of the second parametr in the first parametr is not found.");
    }
};

template <typename T>
typename T::iterator easyfind(T &base, int first_occur)
{
    typename T::iterator it_occur;
    if ((it_occur = std::find(std::begin(base), std::end(base), first_occur)) != std::end(base))
        return (it_occur);
    throw (OccurenceNotFound()); 
}

template <typename key, typename value>
typename std::map<key, value>::iterator easyfind(std::map<key, value> &map_, int first_occur)
{
    typename std::map<key, value>::iterator it;
    if ((it = map_.find(first_occur)) != map_.end())
        return (it);
    throw (OccurenceNotFound());
}

template <typename key, typename value>
typename std::multimap<key, value>::iterator easyfind(std::multimap<key, value> &multimap_, int first_occur)
{
    typename std::multimap<key, value>::iterator it;
    if ((it = multimap_.find(first_occur)) != multimap_.end())
        return (it);
    throw (OccurenceNotFound());
}

#endif
