/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 12:29:59 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/19 16:57:04 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : Form("Shrubbery Creation Form", 145, 137)
{
    setTarget(target);
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &form) : Form(form)
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &form)
{
    if (this != &form)
        Form::operator= (form);
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

/*
** Member Functions
*/

void    ShrubberyCreationForm::formFunction() const
{
    std::string name_of_file = getTarget() + "_shrubbery";
    
    std::ofstream new_file(name_of_file);
    if (new_file.is_open())
	{
        new_file << "                .     .  .      +     .      .          ." << std::endl;
        new_file << "    .       .      .     #       .           .           " << std::endl;
        new_file << "        .      .        ####            .      .      .  " << std::endl;
        new_file << "    .      .      #:..:## ##:..:#   .      .             " << std::endl;
        new_file << "        .      .   #### ### ####   .                     " << std::endl;
        new_file << "    .         #:.##.:# ### #:.##.:#   .         .       ." << std::endl;
        new_file << ".              ######### ##########         .       .    " << std::endl;
        new_file << "        .      #:. ##### ### ##### .:#    .        .     " << std::endl;
        new_file << "    .     .   #######  ## ##  #######                   ." << std::endl;
        new_file << "                .### ##### ##### ##            .      .  " << std::endl;
        new_file << "    .    #:.#...##.:## ### ### ##:.##...#.:#      .      " << std::endl;
        new_file << "    .      ####### ## ##### ## #######       .     .     " << std::endl;
        new_file << "    .    .      #####  #######  #####     .      .       " << std::endl;
        new_file << "            .            000           .     .           " << std::endl;
        new_file << "    .         .   .      000     .        .       .      " << std::endl;
        new_file << ".. .. ..................O000O........................ ..." << std::endl;
	}
}
