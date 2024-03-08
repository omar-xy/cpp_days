#pragma once 

#include <iostream>
#include <stdint.h>

class Data;

class Serializer
{
    private:
        Serializer();
        Serializer(Serializer const &copy);
        Serializer &operator=(Serializer const &copy);
        ~Serializer();
        
    public:
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};
