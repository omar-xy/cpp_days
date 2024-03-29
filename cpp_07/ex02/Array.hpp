

# pragma once

#include <iostream>
#include <stdexcept>

template <typename T> 

class Array 
{
    private:
        T *element;
        unsigned int _size;

    public:
        Array() : element(NULL), _size(0) {}
        Array(unsigned int n): element(new T[n]), _size(n) {}
        Array(Array const & src): element(new T(src._size)) , _size(src._size)
        {
            for (unsigned int i =0; i < _size; i++)
                element[i] = src.element[i];
        }
        Array & operator=(Array const & src)
        {
            if (this != src)
            {
                if (element)
                    delete [] element;
                _size = src._size;
                element = new T[_size];
                for (unsigned int i =0; i < _size; i++)
                    element = src.element;
            }
        }
        ~Array()
        {
            delete [] element;
        }

        T& operator[](unsigned int index) 
        {
            if (index >= _size) 
            {
                throw std::out_of_range("Index out of range");
            }
            return element[index];
        }

        unsigned int size() const
        {
            return _size;
        }
};

