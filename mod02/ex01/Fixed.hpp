#include <iostream>
#include <cmath>

class Fixed {
    public:
    Fixed();
    Fixed(Fixed const &src);
    Fixed(int const number);
    Fixed(float const number);
    ~Fixed();
    // member functions
    float   toFloat( void ) const;
    int     toInt( void ) const;
    int     getRawBits(void ) const;
    void    setRawBits(int const raw);
    Fixed&  operator=(Fixed const &src);
    
    private:
        int value;
        static const int fra_bit = 8;
};

std::ostream &operator<<(std::ostream&, const Fixed&);