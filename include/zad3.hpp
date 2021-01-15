#pragma once

#include "zad1.hpp"

//tutaj szablon ArtystaPlusInstrument
template<typename T>
class ArtystaPlusInstrument
{
public:
    ArtystaPlusInstrument(const Artysta& art, const T& ins) : a(a), i(ins)) {}
    unsigned koncert() {return i.liczbaUczestnikow(a);}
private:
    Artysta a;
    T i;
};