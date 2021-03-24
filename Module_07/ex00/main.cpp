/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 12:09:46 by kbatwoma          #+#    #+#             */
/*   Updated: 2021/03/24 12:23:26 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

// int main( void ) 
// {
//     int a = 2;
//     int b = 3;

//     ::swap( a, b );
//     std::cout << "a = " << a << ", b = " << b << std::endl;
//     std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
//     std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    
//     std::string c = "chaine1";
//     std::string d = "chaine2";
    
//     ::swap(c, d);
//     std::cout << "c = " << c << ", d = " << d << std::endl;
//     std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
//     std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    
//     return 0;
// }

int main( void ) 
{
    int a = 2;
    int b = 3;

    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "--- swap ---" << std::endl;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl << std::endl;
    
    std::string c = "chaine1";
    std::string d = "chaine2";
    
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "--- swap ---" << std::endl;
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl << std::endl;

    float e = 5.09f;
    float f = 4.87f;
    
    std::cout << "e = " << e << ", f = " << f << std::endl;
    std::cout << "--- swap ---" << std::endl;
    ::swap(e, f);
    std::cout << "e = " << e << ", f = " << f << std::endl;
    std::cout << "min( e, f ) = " << ::min( e, f ) << std::endl;
    std::cout << "max( e, f ) = " << ::max( e, f ) << std::endl << std::endl;

    double g = 9.19;
    double h = 3.0;
    
    std::cout << "g = " << g << ", h = " << h << std::endl;
    std::cout << "--- swap ---" << std::endl;
    ::swap(g, h);
    std::cout << "g = " << g << ", h = " << h << std::endl;
    std::cout << "min( g, h ) = " << ::min( g, h ) << std::endl;
    std::cout << "max( g, h ) = " << ::max( g, h ) << std::endl << std::endl;

    Awesome i(5);
    Awesome j(7);
    
    std::cout << "i = " << i << ", j = " << j << std::endl;
    std::cout << "--- swap ---" << std::endl;
    ::swap(i, j);
    std::cout << "i = " << i << ", j = " << j << std::endl;
    std::cout << "min( i, j ) = " << ::min( i, j ) << std::endl;
    std::cout << "max( i, j ) = " << ::max( i, j ) << std::endl << std::endl;
    
    return 0;
}