#include "Bureaucrat.hpp"

int main()
{

    try 
    {
        Bureaucrat a("ayoub", 1);
        std::cout << a << std::endl;
        a.inGrade();
        std::cout << a << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout<< e.what() <<std::endl;
    }
   
    return 0;
}