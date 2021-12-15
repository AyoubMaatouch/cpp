#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <iostream>
#include <string>
#include <time.h>  

Base * generate(void)
{
    srand(time(NULL));

    switch (rand() % 3)
    {
        case 0:
            std::cout << "A is genarated"<<std::endl;
            return new A();;
        case 1:
            std::cout << "B is genarated"<<std::endl;
            return new B();;
        case 2:
            std::cout << "C is genarated"<<std::endl;
            return new C();;
        default:
            break;
    }
    return NULL;
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p) != nullptr)
        std::cout << "A"<<std::endl;
    else if (dynamic_cast<B*>(p) != nullptr)
        std::cout << "B"<<std::endl;
    else if (dynamic_cast<C*>(p) != nullptr)
        std::cout << "C"<<std::endl; 
    else  
        std::cout << "Error"<<std::endl;   
}

void identify(Base& p)
{
    try
    {
     A& x = dynamic_cast<A&>(p);
    std::cout << "A"<<std::endl;
    x.~A();
    return ;
    }
    catch(const std::exception& e)
    {
        try
        {
            B& x = dynamic_cast<B&>(p);
            x.~B();
            std::cout << "B"<<std::endl;
            return ;
        }
        catch(const std::exception& e)
        {
            try
            {
                C& x = dynamic_cast<C&>(p);
                std::cout << "C"<<std::endl;  
                x.~C();
                return ;
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
            }
            std::cerr << e.what() << '\n';
        }   
        std::cerr << e.what() << '\n';
    }  
}

int main ()
{
    Base* there = generate();
    Base& not_there = *there;
    std::cout <<"Pointer : "<<std::endl;
    identify(there);
    std::cout <<"Reference: "<<std::endl;
    identify(not_there);

}