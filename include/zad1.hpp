#pragma once

#include "catch.hpp"

#include <ostream>
#include <sstream>
#include <string>

// tutaj klasa Artysta

using namespace std;

class Artysta 
{
public:
    Artysta() : pseudonim{"Anonim"}, l_sluchaczy{0} {}
    Artysta(const std::string& p_, unsigned l_) : pseudonim{p_}, l_sluchaczy{l_} {}

    virtual void graj(std::ostream& stream) const
    {

        stream << pseudonim << ": " << l_sluchaczy;
    }

    const std::string& getPseudonim() const {return pseudonim;}
    unsigned getSluchacze() const {return l_sluchaczy;}


private:
    std::string pseudonim;
    unsigned l_sluchaczy; 
};