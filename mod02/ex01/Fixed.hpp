#include <iostream>

class Fixed {
    public:
    Fixed();
    Fixed(Fixed const &src);
    Fixed(int const number);
    Fixed(float const number);
    ~Fixed();
    // member functions
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    float toFloat( void ) const;
    int toInt( void ) const;
    Fixed& operator=(Fixed const &src);
    float operator<<(float const number);
    
    private:
        int value;
        static const int fra_bit = 8;
};