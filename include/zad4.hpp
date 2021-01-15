#include "zad1.hpp"

#include <exception>
#include <vector>

// tutaj funkcja stworzZespol
std::vector<Artysta> stworzZespol(int l, const std::string& n)
{
    std::vector<Artysta> w;
    if (n.size() != l)
        throw std::logic_error("not this time");
    
    for(int i = 1; i < l+1; i++)
        w.push_back(Artysta{n, (unsigned)(i)});
    
    return w;
}