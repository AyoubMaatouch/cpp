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
    static float  max(Fixed const &a, Fixed const &b);
    static float  min(Fixed const &a, Fixed const &b);
    //operators
    Fixed&  operator=(Fixed const &src);
    bool  operator==(Fixed const &src);
    bool  operator<=(Fixed const &src);
    bool  operator>=(Fixed const &src);
    bool  operator!=(Fixed const &src);
    Fixed&  operator*(Fixed const &src);
    Fixed&  operator++(void);
    Fixed  operator++(int);
    Fixed&  operator--(void);

    private:
        int value;
        static const int fra_bit = 8;
};

std::ostream &operator<<(std::ostream&, const Fixed&);