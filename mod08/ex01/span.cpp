#include "span.hpp"


Span::Span()
{
    this->size = 0;
}

Span::Span(unsigned int  src)
{
    this->size = src;
}

Span::Span(Span const & src)
{
    this->size = src.size;
    this->container = src.container;
}

Span::~Span() { }

Span& Span::operator=(Span const & src)
{
    this->size = src.size;
    this->container = src.container;
    return *this;
}

int     Span::shortestSpan()
{
    if (this->container.size() < 1)
        throw NoSpanFound();
    std::sort(this->container.begin(), this->container.end());
    unsigned int ShortSpan = container[1] - container[0];
    for (unsigned int i = 0; i < container.size() ; i++)
    {
       if ( (i != container.size()) && ShortSpan > (container[i + 1] - container[i]))
            {
                ShortSpan = (container[i + 1] - container[i]);
            }
    }
    return ShortSpan;
}

int     Span::longestSpan()
{
    if (this->container.size() < 1)
        throw NoSpanFound();
    std::sort(this->container.begin(), this->container.end());
    return *(this->container.end() - 1) - *(this->container.begin());
}

void    Span::addNumber(int src)
{
    if (size <= this->container.size())
        throw ContainerFilled();
    this->container.push_back(src);
}

void    Span::addNumber(int begin, int end)
{
    while (begin < end)
        {
            if (size <= this->container.size())
                throw ContainerFilled();
            this->container.push_back(begin++);
        }
        
}

const char* Span::NoSpanFound::what() const throw()
{
    return ("no span was found");
}
const char* Span::ContainerFilled::what() const throw()
{
    return ("Container is full");
}



