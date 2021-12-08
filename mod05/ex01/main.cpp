#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{

    try 
    {
        Bureaucrat a("ayoub", 113);
        Form b("Director", 112, 11);
        b.beSigned(a);
        std::cout << b << std::endl;

    }
    catch (std::exception & e)
    {
        std::cout<< e.what() <<std::endl;
    }
   
    return 0;
}