#include <iostream>



template <typename T, int N>


class Array{
private:
    T *element;
    unsigned int _size;

    public:

    Array() : element(NULL), _size(N) {}
    void get_size()
    {
        return N;
    }
} 