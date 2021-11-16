#include "Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout<<"Default constructor called"<<std::endl;
    this->value = 0;
}   

Fixed::Fixed(int const number)
{
    std::cout<<"Default constructor called"<<std::endl;
    this->value = number << this->fra_bit;
}   
Fixed::Fixed(float const number)
{
    std::cout<<"Default constructor called"<<std::endl;
    this->value = (float)roundf(number * (float)(powf (2 , this->fra_bit)));
}   

Fixed::Fixed(Fixed const &src )
{
    std::cout<<"Copy constructor called"<<std::endl;
    *this = src;
}   
int Fixed::toInt(void) const
{
    return this->value / 256;
}
float Fixed::toFloat(void) const
{
    return (float)this->value / 256;
}

Fixed::~Fixed(void)
{
    std::cout<<"Destructor called"<<std::endl;
}   

std::ostream&    operator<<(std::ostream& stream, const Fixed& other)
{
    stream << other.toFloat(); 
    return stream;
}