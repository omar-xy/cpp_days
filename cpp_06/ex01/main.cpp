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
    d = s.deserialize(raw);
    std::cout << "d->s1 " << d->getS1() << std::endl;
    delete d;
    return 0;
}