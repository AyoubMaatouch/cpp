#include <iostream>

class Fixed {
    private:
        int value;
        static int fra_bit;
    public:
    Fixed();
    // Fixed();
    ~Fixed();
    // int getRawBits( void ) const;
    // void setRawBits( int const raw );
    void    fun(int value) {
        std::cout<<value<<std::endl;
    };
    void    fun(char value) {
        std::cout<<value<<std::endl;
    };
    void    fun(std::string value) {
        std::cout<<value<<std::endl;
    };


};