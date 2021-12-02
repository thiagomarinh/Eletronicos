
#include "Dispositivos.h"
#include <iostream>
using std::cout;

#include <string>
using std::string;

Dispositivos::Dispositivos()
:marcaComputador(""), memoria()
{
}

Dispositivos::Dispositivos(string marcaComputador, int memoria)
{
    setMarcaComputador(marcaComputador, memoria);
}


void Dispositivos::setMarcaComputador( string nomeMarca, int memoria)
{
    if (nomeMarca.length() < maxSizeName )
        marcaComputador = nomeMarca;
    else 
    {
        marcaComputador = nomeMarca.substr(0, maxSizeName );
        cout << "Nome da Marca Excedeu o valor maximo. \n";
    }

    this->memoria = memoria;
}

string Dispositivos::getMarcaComputador()
{
    return marcaComputador;
}

void Dispositivos::imprimeMensagem() const
{
    cout << "A marca do seu Computador eh " << marcaComputador << " e o tamanho da sua memoria eh " << memoria << '\n';
}
