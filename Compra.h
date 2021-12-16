#ifndef VALOR_H
#define VALOR_H

#include <iostream>
using std::cout;

#include <string>
using std::string;

class Compra
{
public:

    Compra(int);
    Compra(string);

    void setValorComputador( int valor);

    void imprimeValor() const;
    
    void setFormaPagamento(string pagamento);


private:
   
    int valor;
    string pagamento;


};
#endif // GRADEBOOK_H