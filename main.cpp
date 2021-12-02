//criação da classe Dispositivos e do objeto computadores
#include <iostream>
using std::cout;
using std :: cin;
using std::getline;


#include "Dispositivos.h"
#include "Dispositivos.cpp"

int main()
{
    Dispositivos computadores;
    string marcaComputador;
    int memoria;

    cout << "Qual a marca do seu Computador: ";
    getline(cin, marcaComputador);
    cout << "Digite o tamanho da memoria RAM: ";
    cin >> memoria;
    
    computadores.setMarcaComputador( marcaComputador, memoria );

    computadores.imprimeMensagem();
    
    return 0;
}