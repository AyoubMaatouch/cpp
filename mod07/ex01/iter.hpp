#pragma once 

#include <iostream>

////-----------[Correction page]-----------///
class Awesome
{
public:
	Awesome( void ) : _n( 42 ) { return; }
	int get( void ) const { return this->_n; }
private:
	int _n;
};
std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }
////----------------------///
template <typename T>
void c_plus(T x)
{
    std::cout << x << " ";
}

template <typename T>
void iter(T *tab, int length, void (*c)(T x))
{
    for (int i = 0; i < length ; i++)
            c(tab[i]);
}

