#pragma once

#include "zad1.hpp"

//tutaj szablon ArtystaPlusInstrument
template<typename T>
class ArtystaPlusInstrument
{
	Artysta a;
	T i;
public:
	ArtystaPlusInstrument(const Artysta& art_, const T& b_) : art(art_}, i{b_}{ }
	unsigned koncert() { return i.liczbaUczestnikow(a); }
};