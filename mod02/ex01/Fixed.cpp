#include "Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout<<"Default constructor called"<<std::endl;
    this->value = 0;
}   

Fixed::Fixed(int const number)
{
    std::cout<<"Default constructor called"<<std::endl;
    this->value = roundf(number << this->fra_bit);
    // std::cout<<this->value<<std::endl;
}   
Fixed::Fixed(float const number)
{
    std::cout<<"Default constructor called"<<std::endl;
    this->value = number * (powf (2 , this->fra_bit));
    // std::cout<<this->value<<std::endl;
}   

Fixed::Fixed(Fixed const &src )
{
    std::cout<<"Copy constructor called"<<std::endl;
    *this = src;
}   
int Fixed::toInt(void) const
{
    return roundf(this->value >> this->fra_bit);
}
float Fixed::toFloat(void) const
{
    return this->value >> this->fra_bit;
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