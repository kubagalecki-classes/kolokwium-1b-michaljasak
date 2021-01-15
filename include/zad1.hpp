#pragma once

#include "catch.hpp"

#include <ostream>
#include <sstream>
#include <string>

// tutaj klasa Artysta

using namespace std;

class Artysta 
{
	string pseudo;
	unsigned sluch;
public:
	Artysta() { this->pseudo = "Anonim"; this->sluch = 0; }
	Artysta(const std::string& a, unsigned b) : pseudo(a), sluch(b) {}
	~Artysta() {};
	virtual void graj(std::ostream& a) const {a<<pseudo << ": " << sluch;	};
	const std::string& getPseudonim() const
	{
		return pseudo;
	}
	unsigned getSluchacze() const
	{
		return sluch;
	}
};