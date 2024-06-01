# pragma once 



#include <vector>
#include <deque>
#include <iostream>
#include <ctime>

class PmergeMe {
public:
    PmergeMe();
    ~PmergeMe();
    void sortAndTime(int argc, char** argv);

private:


    void printSequence(const std::string& message, const std::vector<int>& vec);
    void printSequence(const std::string& message, const std::deque<int>& deq);
};



std::vector<std::string> split(const std::string& str, char delimiter);
