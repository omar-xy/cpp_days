# pragma once 



#include <vector>
#include <list>
#include <iostream>
#include <ctime>

class PmergeMe {
public:
    PmergeMe();
    ~PmergeMe();
    void sortAndTime(int argc, char** argv);

private:
    void mergeInsertSort(std::vector<int>& vec);
    void mergeInsertSort(std::vector<int>& vec, int left, int right);
    void mergeInsertSort(std::list<int>& lst);

    void insertionSort(std::vector<int>& vec, int left, int right);
    void merge(std::vector<int>& vec, int left, int mid, int right);

    void printSequence(const std::string& message, const std::vector<int>& vec);
    void printSequence(const std::string& message, const std::list<int>& lst);
};



std::vector<std::string> split(const std::string& str, char delimiter);
