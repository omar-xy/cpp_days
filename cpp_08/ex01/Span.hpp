# pragma once 


#include <iostream>
#include <vector>


class Span
{
    private:
        unsigned int _n;
        std::vector<int>  v;
    public:
        Span();
        Span(unsigned int n);
        Span(Span const & src);
        Span & operator=(Span const & src);
        ~Span();
        void addNumber(unsigned int num);
        void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
        unsigned int shortestSpan();
        unsigned int longestestSpan();
        void show();






};