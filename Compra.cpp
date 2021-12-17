#include "Compra.h"
#include <iostream>
using std::cout;

#include <string>
using std::string;

Compra::Compra(int valor)
{
    setValorComputador(valor);
}

Compra::Compra(string pagamento)
{
    setFormaPagamento(pagamento);
}
//contrutor de copia
Compra::Compra(const Compra& other)
:valor(other.valor)
{

}

void Compra::imprimeValor() const
{
    cout << "O preço do seu Micro é " << valor << "e a forma foi "<< pagamento ;
}

void Compra::setValorComputador(int valor)
{
    this->valor = valor;
}

void Compra::setFormaPagamento( string pagamento)
{
    setFormaPagamento(pagamento);
}

