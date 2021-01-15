#include "zad1.hpp"

#include <exception>
#include <vector>

// tutaj funkcja stworzZespol
std::vector<Artysta> stworzZespol(int liczba, const std::string& nazwa)
{
    std::vector<Artysta> wektor;
    if (nazwa.size() != liczba)
        throw std::logic_error("zla liczba");
    
    for(int i = 1; i < liczba+1; i++)
        wektor.push_back(Artysta{nazwa, (unsigned)(i)});
    
    return wektor;
}