#include "easyfind.hpp"
#include <array>
#include <vector>
#include <list>


int main()
{
    /* code */
    std::list<int> v;
    v.push_back(10);
    v.push_back(16);
    v.push_back(18);
    v.push_back(200);
    v.push_back(1900);
    v.push_back(1);
    v.push_back(41);

    std::vector<int> hugo;
    hugo.push_back(10);
    hugo.push_back(16);
    hugo.push_back(18);
    hugo.push_back(200);
    hugo.push_back(1900);
    hugo.push_back(1);
    hugo.push_back(41);
    
    std::array<int,5> myarray = { 2, 16, 77, 34, 50 };

    std::cout << ("ARRAY  : ");
    easyfind(myarray, 16);
    std::cout << ("LIST   : ");
    easyfind(v, 1998);
    std::cout << ("VECTOR : ");
    easyfind(hugo, 16);

    return 0;
}
