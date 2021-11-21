#include "Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << "default " << std::endl;
    this->_value = 0;
}   

Fixed::Fixed(int const number)
{
    this->_value = number << this->_fra_bit ;
}   
Fixed::Fixed(float const number)
{
    this->_value = (float)roundf(number * (1 << this->_fra_bit));
}   

Fixed::Fixed(Fixed const &src)
{
    *this = src;
}   

int     Fixed::getRawBits(void ) const {

    return (this->_value);
}

void     Fixed::setRawBits(int const raw) {

    this->_value = raw;
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
    return this->_value / 256;
}

float Fixed::toFloat(void) const
{
    return ((float)this->_value / 256);
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

Fixed  &Fixed::operator=(Fixed const &src)
{
    
   this->_value = src._value;
   return *this;
}

Fixed   & Fixed::operator++(void) {
    this->_value++;
    return *this;
}

Fixed   Fixed::operator++(int)
{
    Fixed tmp(*this);

    this->_value += 1;
    return tmp;
}

Fixed  &  Fixed::operator--(void)
{
    this->_value--;
    return *this;
}

Fixed   Fixed::operator--(int)
{
    Fixed tmp(*this);

    this->_value -= 1;
    return tmp;
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
