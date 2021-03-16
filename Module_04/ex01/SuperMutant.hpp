/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 16:33:30 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/16 16:44:38 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include "Enemy.hpp"

class SuperMutant : public Enemy
{
    public:

        SuperMutant();
        SuperMutant(SuperMutant const &super_mutant);
        SuperMutant &operator=(SuperMutant const &super_mutant);
        ~SuperMutant();

        void    takeDamage(int);
};

#endif
