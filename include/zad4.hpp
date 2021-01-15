#include "zad1.hpp"

#include <exception>
#include <vector>

// tutaj funkcja stworzZespol
std::vector<Artysta> stworzZespol(int l, const std::string& nazwa)
{
  std::vector<Artysta> w;
  if(nazwa.size() != l) throw std::logic_error("not this time");

  for(int i=0; i< l+1; i++) {w.push_back(Artysta(nazwa,static_cast<unsigned>(i)));}
  return wektor;
}