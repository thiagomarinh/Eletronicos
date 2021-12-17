#include "Sistema.h"
#include <iostream>
using std::cout;

#include <string>
using std::string;

Sistema::Sistema(int serie)
{
    setNumSerie(serie);
}


void Sistema::imprimeSerie() const
{
    cout << "O numero de serie do seu sistema é " << serie;
}

void Sistema::setNumSerie(int serie)
{
    this->serie = serie;
}