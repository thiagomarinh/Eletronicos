#include "Compra.h"
#include <iostream>
using std::cout;

#include <string>
using std::string;

Compra::Compra(int valor)
{
    setValorComputador(valor);
}



void Compra::imprimeValor() const
{
    cout << "O preço do seu Micro é " << valor ;
}

void Compra::setValorComputador(int valor)
{
    this->valor = valor;
}

