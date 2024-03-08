#include "Data.hpp"

Data::Data()
{
}

Data::Data(std::string s1, int n, std::string s2)
{
    _s1 = s1;
    _n = n;
    _s2 = s2;
}


Data::Data(Data const &copy)
{
    *this = copy;
}


int Data::getN() const
{
    return (_n);
}

std::string Data::getS1() const
{
    return (_s1);
}


std::string Data::getS2() const
{
    return (_s2);
}

Data &Data::operator=(Data const &copy)
{
    if (this != &copy)
    {
        *this = copy;
    }
    return (*this);
}


Data::~Data()
{
}
