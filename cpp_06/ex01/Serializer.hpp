#pragma once 

#include <iostream>


class Data;

class Serializer
{
    public:
        Serializer();
        Serializer(Serializer const &copy);
        Serializer &operator=(Serializer const &copy);
        ~Serializer();
        uintptr_t serialize(Data* ptr);
        Data* deserialize(uintptr_t raw);
};
