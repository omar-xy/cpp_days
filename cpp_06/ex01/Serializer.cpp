#include "Serializer.hpp"


Serializer::Serializer()
{
}


Serializer::Serializer(Serializer const &copy)
{
    *this = copy;
}


Serializer &Serializer::operator=(Serializer const &copy)
{
    if (this != &copy)
    {
        *this = copy;
    }
    return (*this);
}


Serializer::~Serializer()
{
}



uintptr_t Serializer::serialize(Data* ptr)
{
    uintptr_t raw;
    raw = reinterpret_cast<uintptr_t>(ptr);
    return (raw);
}