#include"Brain.hpp"

Brain::Brain()
{
    std::cout<<"Brain was Constracted"<<std::endl;
}

Brain::Brain(Brain const &src)  {
    std::cout<<"Brain Copy Contractor was called"<<std::endl;
    *this = src;
}

Brain& Brain::operator=(Brain const &src)
{
    std::cout<<"Brain assignment Operator was called"<<std::endl;
    
    for(int i = 0 ; i < 100 ; i++)
        this->ideas[i] = src.ideas[i];
    return *this;
}

Brain::~Brain(void)
{
    std::cout <<"Brain was destroyed"<<std::endl;
}
