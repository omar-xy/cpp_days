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
