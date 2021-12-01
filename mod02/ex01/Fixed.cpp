#include "Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout<<"Default constructor called"<<std::endl;
    this->value = 0;
}   

Fixed::Fixed(int const number)
{
    std::cout<<"Int constructor called"<<std::endl;
    this->value = number << this->fra_bit ;
}   
Fixed::Fixed(float const number)
{
    std::cout<<"Float constructor called"<<std::endl;
    this->value = (float)roundf(number * (float)(powf (2 , this->fra_bit)));
}   

Fixed::Fixed(Fixed const &src )
{
    std::cout<<"Copy constructor called"<<std::endl;
    *this = src;
}   


int     Fixed::getRawBits(void ) const {

    std::cout<<"getRawBits member function called"<<std::endl;
    return (this->value);
}

void     Fixed::setRawBits(int const raw) {

    std::cout<<"setRawBits member function called"<<std::endl;
    this->value = raw;
}

Fixed&    Fixed::operator=(Fixed const &src) {

    std::cout<<"Assignation operator called"<<std::endl;
    this->value = src.value;
    return *this;
}
int Fixed::toInt(void) const
{
    return this->value / 256;
}

float Fixed::toFloat(void) const
{
    return( (float)this->value / 256);
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