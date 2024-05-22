#include "PmergeMe.hpp"
#include <algorithm>  // For std::copy and std::sort

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe() {}

void PmergeMe::sortAndTime(int argc, char** argv) {
    std::vector<int> vec;
    std::list<int> lst;

    for (int i = 1; i < argc; ++i) {
        int num = std::atoi(argv[i]);
        if (num > 0) {
            vec.push_back(num);
            lst.push_back(num);
        } else {
            std::cerr << "Error: non-positive integer encountered: " << argv[i] << std::endl;
            return;
        }
    }

    std::cout << "Before: ";
    printSequence("", vec);

    clock_t start = clock();
    mergeInsertSort(vec);
    clock_t end = clock();
    std::cout << "After: ";
    printSequence("", vec);
    std::cout << "Time to process a range of " << vec.size() << " elements with std::vector: " << static_cast<double>(end - start) / CLOCKS_PER_SEC << " s" << std::endl;

    start = clock();
    mergeInsertSort(lst);
    end = clock();
    std::cout << "Time to process a range of " << lst.size() << " elements with std::list: " << static_cast<double>(end - start) / CLOCKS_PER_SEC << " s" << std::endl;
}

void PmergeMe::mergeInsertSort(std::vector<int>& vec) {
    mergeInsertSort(vec, 0, vec.size() - 1);
}

void PmergeMe::mergeInsertSort(std::list<int>& lst) {
    lst.sort();  // Using std::list's sort as a placeholder
}

void PmergeMe::mergeInsertSort(std::vector<int>& vec, int left, int right) {
    if (left < right) 
    {
        if (right - left < 10)
            insertionSort(vec, left, right);
        else 
        {
            int mid = left + (right - left) / 2;
            mergeInsertSort(vec, left, mid);
            mergeInsertSort(vec, mid + 1, right);
            merge(vec, left, mid, right);
        }
    }
}

void PmergeMe::insertionSort(std::vector<int>& vec, int left, int right) {
    for (int i = left + 1; i <= right; ++i)
    {
        int key = vec[i];
        int j = i - 1;
        while (j >= left && vec[j] > key)
        {
            vec[j + 1] = vec[j];
            --j;
        }
        vec[j + 1] = key;
    }
}

void PmergeMe::merge(std::vector<int>& vec, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    std::vector<int> L(n1), R(n2);
    std::copy(vec.begin() + left, vec.begin() + mid + 1, L.begin());
    std::copy(vec.begin() + mid + 1, vec.begin() + right + 1, R.begin());

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j]) 
            vec[k++] = L[i++];
        else 
            vec[k++] = R[j++];
    }

    while (i < n1)
    {
        vec[k++] = L[i++];
    }

    while (j < n2) {
        vec[k++] = R[j++];
    }
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

void PmergeMe::printSequence(const std::string& message, const std::list<int>& lst) {
    std::cout << message;
    for (std::list<int>::const_iterator it = lst.begin(); it != lst.end(); ++it) {
        std::cout << *it;
        std::list<int>::const_iterator next = it;
        ++next;
        if (next != lst.end()) {
            std::cout << " ";
        }
    }
    std::cout << std::endl;
}
