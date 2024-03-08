#pragma once 


#include <iostream>

class Data
{
    private:
        std::string _s1;
        int _n;
        std::string _s2;
    public:
        Data();
        Data(std::string s1, int n, std::string s2);
        Data(Data const &copy);
        Data &operator=(Data const &copy);
        ~Data();
};

