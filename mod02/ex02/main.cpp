#include "Fixed.hpp"

int main( void ) {
    Fixed a (10);
    
    Fixed b( 10);
    
    std::cout << a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << ++a << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    
    std::cout << a * b <<std::endl;
    return 0;
}