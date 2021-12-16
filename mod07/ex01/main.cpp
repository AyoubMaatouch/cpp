#include "iter.hpp"

int main ()
{
    int x[4] = { 1, 2, 3};;
    char c[4] = {'c', 'v', '1'};
    std::string hi[4] = {"Hello", "There", "My Friend"};
    Awesome tab[4];

    iter(x, 4, c_plus);
    std::cout << std::endl;
    iter(c, 4, c_plus);
    std::cout << std::endl;
    iter(hi, 4, c_plus);
    std::cout << std::endl;
    iter(tab, 4, c_plus);
    std::cout << std::endl;

}