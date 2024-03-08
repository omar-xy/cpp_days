#include "Serializer.hpp"
#include "Data.hpp"

int main()
{
    Serializer s;
    Data *d;
    uintptr_t raw;

    d = new Data("hello", 42, "world");
    raw = s.serialize(d);
    std::cout << "raw: " << raw << std::endl;
    printf("raw: %p\n", (void *)raw);
    d = s.deserialize(raw);
    return 0;
}