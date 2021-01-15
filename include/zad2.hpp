#pragma once

#include "zad1.hpp"

#include <cctype>

// tutaj klasy PopGwiazda, RapGwiazda oraz funkcja stworzArtyste


class PopGwiazda : public Artysta
{
public:
    PopGwiazda(const std::string& a, unsigned l) : Artysta(a, l) {}
    void graj(std::ostream& s) const override {s << "PopGwiazda: " << getPseudonim();}
};

class RapGwiazda : public Artysta
{
public:
    RapGwiazda(const std::string& a, unsigned ls) : Artysta(a, ls) {}
    void graj(std::ostream& s) const override {s << "RapGwiazda: " << getPseudonim();}
};

Artysta* stworzArtyste(const std::string& a)
{
    if (a.front() == std::toupper(a.front()))
        return new PopGwiazda{"BTS", 1234};
    else
        return new RapGwiazda{"Ye", 4321};
}