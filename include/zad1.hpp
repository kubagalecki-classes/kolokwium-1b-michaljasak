#pragma once

#include "catch.hpp"

#include <ostream>
#include <sstream>
#include <string>

// tutaj klasa Artysta

using namespace std;

// class Artysta 
// {
// 	string pseudo;
// 	unsigned sluch;
// public:
// 	Artysta() { this->pseudo = "Anonim"; this->sluch = 0; }
// 	Artysta(const std::string& a, unsigned b) : pseudo(a), sluch(b) {}
// 	~Artysta() {};
// 	virtual void graj(std::ostream& a) const {	};
// 	const std::string& getPseudonim() const
// 	{
// 		return this->pseudo;
// 	}
// 	unsigned getSluchacze() const
// 	{
// 		return this->sluch;
// 	}
// };
class Artysta 
{
    string pseudo;
    unsigned sluch;
public:
    Artysta() { this->pseudo = "Anonim"; this->sluch = 0; }
    Artysta(const std::string& a, unsigned b) : pseudo(a), sluch(b) {}
    void graj(std::ostream& a) const {
        a << this->pseudo << ": " << this->sluch;
    }
    const std::string& getPseudonim() const
    {
        return this->pseudo;
    }
    unsigned getSluchacze() const
    {
        return this->sluch;
    }
};