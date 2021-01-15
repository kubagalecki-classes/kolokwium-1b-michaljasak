#pragma once

#include "zad1.hpp"

#include <cctype>

// tutaj klasy PopGwiazda, RapGwiazda oraz funkcja stworzArtyste

class PopGwiazda : public Artysta
{
	string pseudo;
	unsigned sluch;
public:
	PopGwiazda() {};
	PopGwiazda(const std::string& a, unsigned b) : pseudo(a), sluch(b) {  };
  unsigned getSluchacze() const
    {
        return this->sluch;
    }
    const std::string& getPseudonim() const
    {
        return this->pseudo;
    }
	void graj(std::ostream& a) const
	{
		a << "PopGwiazda: " << this->pseudo;
	}
};

class RapGwiazda : public Artysta
{
	string pseudo;
	unsigned sluch;
public:
	RapGwiazda() {};
	RapGwiazda(const std::string& a, unsigned b) : pseudo(a), sluch(b) {};
  unsigned getSluchacze() const
      {
          return this->sluch;
      }
      const std::string& getPseudonim() const
    {
        return this->pseudo;
    }
	void graj(std::ostream& a) const
	{
		a << "RapGwiazda: " << this->pseudo;
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