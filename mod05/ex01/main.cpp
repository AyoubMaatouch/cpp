#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{

    try 
    {
        Bureaucrat a("ayoub", 1);
        Form b("Director", 10, 11);
        b.beSigned(a);
        // std::cout << a << std::endl;
        // a.inGrade();
        // std::cout << a << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout<< e.what() <<std::endl;
    }
   
    return 0;
}