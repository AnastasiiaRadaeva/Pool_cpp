
#include "Bureaucrat.hpp"

int main()
{
    std::cout << "--- Creation of bureaucrats | without exeptions ---" << std::endl;
    Bureaucrat mike("Mike", 2);
    std::cout << mike << std::endl;

    Bureaucrat nick("Nick", 57);
    std::cout << nick << std::endl;
    std::cout << std::endl;

    Bureaucrat simon("Simon", 1);
    std::cout << simon << std::endl;
    std::cout << std::endl;

    Bureaucrat liz("Liz", 150);
    std::cout << liz << std::endl;
    std::cout << std::endl;    
    
    std::cout << "--- Creation of bureaucrats | with exeptions ---" << std::endl;
    try
    {
        Bureaucrat sam("Sam", 0);
        std::cout << sam << std::endl;
    }
    catch (std::exception &ex)
    {
        std::cerr << ex.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        Bureaucrat sally("Sally", 167);
        std::cout << sally << std::endl;
    }
    catch (std::exception &ex)
    {
        std::cerr << ex.what() << std::endl;
    }
    std::cout << std::endl;

    std::cout << "--- Increment/decrement | without exeptions ---" << std::endl;
    try
    {
        nick.increment();
        std::cout << nick << std::endl;
    }
    catch (std::exception &ex)
    {
        std::cerr << ex.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        mike.decrement();
        std::cout << mike << std::endl;
    }
    catch (std::exception &ex)
    {
        std::cerr << ex.what() << std::endl;
    }
    std::cout << std::endl;
    

    std::cout << "--- Increment/decrement | with exeptions ---" << std::endl;
    try
    {
        liz.decrement();
        std::cout << liz << std::endl;
    }
    catch (std::exception &ex)
    {
        std::cerr << ex.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        simon.increment();
        std::cout << simon << std::endl;
    }
    catch (std::exception &ex)
    {
        std::cerr << ex.what() << std::endl;
    }
    std::cout << std::endl;
    

    return (0);
}

//clang++ -Wall -Wextra -Werror *.cpp