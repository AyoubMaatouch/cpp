#pragma once

#include <iostream>

template <class T>
class Array {
    private:
        T *_tab;
        unsigned int _size;
  public:
    Array()
    {
        this->_tab = new T[0];
        this->_size = 0;
    }
    ~Array()
    {
        std::cout << "Tab deleted with size "<< this->_size <<std::endl;
        delete [] this->_tab; 
    }
    Array(unsigned int n)
    {
        this->_size = n;
        this->_tab = new T[this->_size];
        for (unsigned int i = 0; i < this->_size;i++ )
            this->_tab[i] = T();
    }
    Array(Array const &src)
    {
        this->_tab = new T[src._size];
        this->_size = src._size;
        for (unsigned int i = 0; i < this->_size;i++ )
            this->_tab[i] = src._tab[i];
    }
    T& operator=(Array const &src)
    {
        this->tab = new T[src._size];
        for (unsigned int i = 0; i < this->_size;i++ )
             this->_tab[i] = src._tab[i];
    }
    class outofthelimits : public std::exception {
       const char* what() const throw() {
                     return "this element is out of the limits";
                 }
    };
      T& operator[](unsigned int i)
    {
        if ( i > this->_size)
            throw outofthelimits();
        return this->_tab[i];
    }
    
    size_t size (void) { return this->_size; }
};