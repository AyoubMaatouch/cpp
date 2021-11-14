class Fixed {
    private:
        int value;
        static int fra_bit = 8;
    public:
    Fixed();
    Fixed(Fixed fixed);
    ~Fixed();
    int getRawBits( void ) const;
    void setRawBits( int const raw );

}