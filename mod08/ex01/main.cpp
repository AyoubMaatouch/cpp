#include "span.hpp"

int main()
{
    try
    {
        Span sp = Span(6);
        Span spz(10000);

        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(5);
        sp.addNumber(9);
        sp.addNumber(10);
        sp.addNumber(133);
        
        spz.addNumber(1, 10000);
        
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl<< std::endl;
        std::cout << spz.shortestSpan() << std::endl;
        std::cout << spz.longestSpan() << std::endl;
     }
     catch(const std::exception& e)
     {
         std::cerr << e.what() << '\n';
    }
}