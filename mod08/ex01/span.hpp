#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <time.h>

#define PRINT(OWO) std::cout << OWO<< std::endl;


class Span {
    private:
        std::vector<unsigned int> container;
        unsigned int size;

    public:
        Span();
        Span(unsigned int);
        Span(Span const &);
        ~Span();
        Span& operator=(Span const &);
        //member functions
        int     shortestSpan();
        int     longestSpan();
        void    addNumber(int);
        void    addNumber(int, int);
        
        //Exceptions
        class NoSpanFound : public std::exception {
            const char* what() const throw();
        };
        
        class ContainerFilled : public std::exception {
            const char* what() const throw();
        };

};