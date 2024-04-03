#include "Span.hpp"
#include <algorithm>


Span::Span() : _n(0)
{
}

Span::Span(unsigned int n) : _n(n)
{

}

Span::Span(Span const &src)
{
    *this = src;
}

Span & Span::operator=(Span const & src)
{
    if (this != &src)
    {
        this->_n = src._n;
        this->v = src.v;
    }
    return (*this);
}

Span::~Span()
{

}

void Span::addNumber(unsigned int num)
{
    if (v.size() < _n)
        v.push_back(num);
    else
        std::cout << "expection\n";
}


// template <typename It>
void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    std::vector<int>::iterator it;
    size_t size = std::distance(begin, end);

    if (size + v.size() > _n)
        std::cout << "expection\n";
    else
    {
        for(it= begin; it != end; it++)
        {
            this->addNumber(*it);
        }
    }
}


void Span::show()
{
    for(size_t i = 0; i < this->v.size(); i++)
    {
        std::cout << v[i];
        if ((i + 1 )!= v.size())
            std::cout << ", ";
    }
    std::cout << std::endl;
}

unsigned int Span::shortestSpan()
{
    std::vector<int>::iterator it;
    std::vector<int> temp = v;
    std::sort(temp.begin(), temp.end());
    unsigned int minSpan = temp[1] - temp[0]; 
    for(unsigned int i = 1; i  <  temp.size(); i++)
    {
        unsigned int tmpSpan = temp[i + 1] - temp[i];
        if (tmpSpan < minSpan)
            minSpan = tmpSpan;
    }
    return minSpan;
}

