#pragma once

#include "zad1.hpp"

//tutaj szablon ArtystaPlusInstrument
template<typename T>
class ArtystaPlusInstrument
{
	Artysta a;
	T i;
public:
	ArtystaPlusInstrument(const Artysta& art, const T& b) : art(art), i(b){ }
	unsigned koncert() { return i.liczbaUczestnikow(a); }
};