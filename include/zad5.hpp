#include "zad1.hpp"

#include <algorithm>
#include <deque>
#include <vector>

// tutaj algorytm liczPopularnych(T begin, T end)
template<typename T>
unsigned liczPopularnych(T a, T b)
{
    return std::count_if(a, b, [](const Artysta& art){return art.getSluchacze() > 1000;});
}