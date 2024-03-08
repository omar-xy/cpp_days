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
        ~Data();
        int getN() const;
        std::string getS1() const;
        std::string getS2() const;
        Data &operator=(Data const &copy);
};

