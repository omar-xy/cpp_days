# pragma once 



#include <vector>
#include <deque>
#include <iostream>
#include <ctime>


#define RED "\e[1;31m"
#define WHI "\e[0;37m"
#define GRE "\e[1;32m"
#define YEL "\e[1;33m"

class PmergeMe
{
public:
    PmergeMe();
    PmergeMe(const PmergeMe &other);
    PmergeMe &operator=(const PmergeMe &other);
    ~PmergeMe();
    void sortAndTime(int argc, char** argv);
    void printSequence(const std::string& message, const std::vector<int>& vec);
    void printSequence(const std::string& message, const std::deque<int>& deq);
};

