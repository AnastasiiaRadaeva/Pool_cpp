/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 13:54:15 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/26 15:00:29 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack() : std::stack<T>() {};
        MutantStack(MutantStack const &mutant) : std::stack<T>(mutant) {};
        MutantStack &operator=(MutantStack const &mutant)
        {
            std::stack<T>::operator=(mutant);
            return (*this);
        }
        ~MutantStack() {};

        typedef typename std::stack<T>::container_type::iterator               iterator;
        typedef typename std::stack<T>::container_type::const_iterator         const_iterator;
        typedef typename std::stack<T>::container_type::reverse_iterator       reverse_iterator;
        typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
        
        iterator               begin()
        {
            return (std::stack<T>::c.begin());
        }
        iterator                end()
        {
            return (std::stack<T>::c.end());
        }

        const_iterator          cbegin()
        {
            return (std::stack<T>::c.cbegin());
        }
        const_iterator          cend()
        {
            return (std::stack<T>::c.cend());
        }

        reverse_iterator        rbegin()
        {
            return (std::stack<T>::c.rbegin());
        }
        reverse_iterator        rend()
        {
            return (std::stack<T>::c.rend());
        }

        const_reverse_iterator  crbegin()
        {
            return (std::stack<T>::c.crbegin());
        }
        const_reverse_iterator  crend()
        {
            return (std::stack<T>::c.crend());
        }
};

#endif
