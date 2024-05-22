#include "PmergeMe.hpp"


int main(int argc, char** argv) {
    if (argc < 2) {
        std::cerr << "Usage: ./PmergeMe <positive integers...>" << std::endl;
        return 1;
    }

    PmergeMe pmergeMe;
    pmergeMe.sortAndTime(argc, argv);

    return 0;
}


