#include <iostream>

class Fixed {
    public:
    Fixed();
    Fixed(Fixed const &src);
    ~Fixed();
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    Fixed& operator=(Fixed const &src);
    private:
        int value;
        static int fra_bit;
};