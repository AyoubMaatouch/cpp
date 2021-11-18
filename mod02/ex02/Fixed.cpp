#include "Fixed.hpp"

Fixed::Fixed(void)
{
    this->value = 0;
}   

Fixed::Fixed(int const number)
{
    this->value = number << this->fra_bit ;
}   
Fixed::Fixed(float const number)
{
    this->value = (float)roundf(number * (1 << this->fra_bit));
}   

Fixed::Fixed(Fixed const &src )
{
    *this = src;
}   

int     Fixed::getRawBits(void ) const {

    return (this->value);
}

void     Fixed::setRawBits(int const raw) {

    this->value = raw;
}

float    Fixed::max(Fixed const &a,Fixed const &b) {

    if (a.toFloat() > b.toFloat())
            return a.toFloat();
    else
        return b.toFloat();
}

float    Fixed::min(Fixed const &a,Fixed const &b) {

    if (a.toFloat() > b.toFloat())
            return b.toFloat();
    else
        return a.toFloat();
}

int Fixed::toInt(void) const
{
    return this->value / 256;
}

float Fixed::toFloat(void) const
{
    return ((float)this->value / 256);
}

Fixed::~Fixed(void)
{
    // std::cout<<"Destructor called"<<std::endl;
}   

bool    Fixed::operator==(Fixed const &src) 
{
   return (this->toFloat() == src.toFloat());
}

bool    Fixed::operator!=(Fixed const &src) 
{
   return (this->toFloat() != src.toFloat());
}

bool    Fixed::operator<=(Fixed const &src) 
{
   return (this->toFloat() <= src.toFloat());
}

bool    Fixed::operator>=(Fixed const &src) 
{
   return (this->toFloat() >= src.toFloat());
}


Fixed    Fixed::operator=(Fixed const &src) {

   this->value = src.value;
    return *this;
}

Fixed    Fixed::operator++(void) {
    this->value++;
    return *this;
}

Fixed   Fixed::operator++(int)
{
    Fixed tmp(*this);

    this->value += 1;
    return tmp;
}

Fixed    Fixed::operator--(void) {
    this->value--;
    return *this;
}

Fixed    Fixed::operator*(Fixed const &src) 
{
       return Fixed(this->toFloat() * src.toFloat());
}

Fixed    Fixed::operator+(Fixed const &src)
{
    return Fixed(this->toFloat() + src.toFloat());
}

Fixed    Fixed::operator-(Fixed const &src)
{
    return Fixed(this->toFloat() - src.toFloat());
}

Fixed    Fixed::operator/(Fixed const &src)
{
    return Fixed(this->toFloat() / src.toFloat());
}

std::ostream&    operator<<(std::ostream& stream, const Fixed& other)
{
    stream << other.toFloat(); 
    return stream;
}