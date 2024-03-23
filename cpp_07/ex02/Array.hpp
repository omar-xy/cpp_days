

# pragma once

#include <iostream>

template <typename T> class Array {

public:
    Array();
    Array(unsigned int n);
    Array(Array const & src);
    Array & operator=(Array const & src);
    ~Array();
    void print();
};

