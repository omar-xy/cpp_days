#include "PmergeMe.hpp"
#include <algorithm>
#include <list>  // For std::copy and std::sort

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe() {}

void binaryInsertV(std::vector<int>& main_chain, int value)
{
    std::vector<int>::iterator it = std::lower_bound(main_chain.begin(), main_chain.end(), value);
    main_chain.insert(it, value);
}
void binaryInsertD(std::deque<int>& main_chain, int value)
{
    std::deque<int>::iterator it = std::lower_bound(main_chain.begin(), main_chain.end(), value);
    main_chain.insert(it, value);
}


std::vector<int> sortPairsV(const std::vector<int>& numbers, std::vector<int>& pending) {
    std::vector<int> main_chain;
    size_t n = numbers.size();

    // Create pairs and sort each pair
    for (size_t i = 0; i < n; i += 2)
    {
        if (i + 1 < n) 
        {
            int a = numbers[i];
            int b = numbers[i + 1];
            if (a > b) std::swap(a, b);
            pending.push_back(a);
            main_chain.push_back(b);
        }
        else
            pending.push_back(numbers[i]);
    }
    // Sort the main chain
    std::sort(main_chain.begin(), main_chain.end());

    return main_chain;
}

std::deque<int> sortPairsD(const std::deque<int>& numbers, std::deque<int>& pending) {
    std::deque<int> main_chain;
    size_t n = numbers.size();

    // Create pairs and sort each pair
    for (size_t i = 0; i < n; i += 2)
    {
        if (i + 1 < n) 
        {
            int a = numbers[i];
            int b = numbers[i + 1];
            if (a > b) std::swap(a, b);
            pending.push_back(a);
            main_chain.push_back(b);
        }
        else
            pending.push_back(numbers[i]);
    }
    // Sort the main chain
    std::sort(main_chain.begin(), main_chain.end());

    return main_chain;
}

// Ford-Johnson sorting function
std::vector<int> fordJohnsonSortV(std::vector<int> numbers)
{
    std::vector<int> pending;

    while (numbers.size() >= 3)
        numbers = sortPairsV(numbers, pending);
    if (!numbers.empty()) 
    { 
        for (size_t i = 0; i < pending.size(); ++i) 
            binaryInsertV(numbers, pending[i]);
    }
    return numbers;
}
std::deque<int> fordJohnsonSortD(std::deque<int> numbers)
{
    std::deque<int> pending;

    while (numbers.size() >= 3)
        numbers = sortPairsD(numbers, pending);
    if (!numbers.empty()) 
    { 
        for (size_t i = 0; i < pending.size(); ++i) 
            binaryInsertD(numbers, pending[i]);
    }
    return numbers;
}


void PmergeMe::sortAndTime(int argc, char** argv) {
    std::vector<int> vec;
    std::deque<int> deq;

    for (int i = 1; i < argc; ++i) 
    {
        int num = std::atoi(argv[i]);
        if (num > 0) 
        {
            vec.push_back(num);
            deq.push_back(num);
        } else 
        {
            std::cerr << "Error: non-positive integer encountered: " << argv[i] << std::endl;
            return;
        }
    }
    std::cout << "Before: ";
    printSequence("", vec);
    clock_t start = clock();
    vec = fordJohnsonSortV(vec);
    clock_t end = clock();
    std::cout << "After: ";
    printSequence("vector ", vec);
    // std::cout << "Time to process a range of " << vec.size() << " elements with std::vector: " << static_cast<double>(end - start) / CLOCKS_PER_SEC << " s" << std::endl;
     start = clock();
    deq = fordJohnsonSortD(deq);
     end = clock();
    // std::cout << "Time to process a range of " << deq.size() << " elements with std::list: " << static_cast<double>(end - start) / CLOCKS_PER_SEC << " s" << std::endl;
}

void PmergeMe::printSequence(const std::string& message, const std::vector<int>& vec) {
    std::cout << message;
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i];
        if (i != vec.size() - 1) {
            std::cout << " ";
        }
    }
    std::cout << std::endl;
}

void PmergeMe::printSequence(const std::string& message, const std::deque<int>& deq) 
{
    std::cout << message;
    for (size_t i = 0; i < deq.size(); ++i) {
        std::cout << deq[i];
        if (i != deq.size() - 1) {
            std::cout << " ";
        }
    }
    std::cout << std::endl;
}
