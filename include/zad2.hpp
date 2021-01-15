#pragma once

// #include "zad1.hpp"

#include <cctype>

// tutaj klasy PopGwiazda, RapGwiazda oraz funkcja stworzArtyste

class Artysta 
{
	string pseudo;
	unsigned sluch;
public:
	Artysta() { this->pseudo = "Anonim"; this->sluch = 0; }
	Artysta(const std::string& a, unsigned b) : pseudo(a), sluch(b) {}
	~Artysta() {};
	virtual void graj(std::ostream& a) const {	};
	const std::string& getPseudonim() const
	{
		return this->pseudo;
	}
	unsigned getSluchacze() const
	{
		return this->sluch;
	}
};


class PopGwiazda : public Artysta
{
	string pseudo;
	unsigned sluch;
public:
	PopGwiazda() {};
	PopGwiazda(const std::string& a, unsigned b) : pseudo(a), sluch(b) {  };
  
	void graj(std::ostream& a) const override
	{
		a << "PopGwiazda: " << getPseudonim();
	}
};

class RapGwiazda : public Artysta
{
	string pseudo;
	unsigned sluch;
public:
	RapGwiazda() {};
	RapGwiazda(const std::string& a, unsigned b) : pseudo(a), sluch(b) {};
  
	void graj(std::ostream& a) const override
	{
		a << "RapGwiazda: " << getPseudonim();
	}
};

Artysta* stworzArtyste(const std::string& a) {
	if (a.front() == toupper(a.front())) {
		return new PopGwiazda("BTS", 1234);
	}
	else {
		return new RapGwiazda("Ye", 4321);
	}
	
}