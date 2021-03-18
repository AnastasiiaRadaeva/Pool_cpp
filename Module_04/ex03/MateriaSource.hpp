/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 14:18:26 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/18 14:54:22 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"
# include <cstring>
# include <string>

class MateriaSource : public IMateriaSource
{
    public:

        MateriaSource();
        MateriaSource(MateriaSource const &);
        MateriaSource &operator=(MateriaSource const &);
        ~MateriaSource();

        void        learnMateria(AMateria*);
        AMateria*   createMateria(std::string const & type);

    private:

        AMateria    **_array_of_materia;
        int         _size_of_array;
        int         _number_of_materia;
};

#endif