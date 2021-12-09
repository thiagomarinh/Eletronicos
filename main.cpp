//criação da classe Dispositivos e do objeto computadores
#include <iostream>
using std :: cout;
using std :: cin;
using std::getline;


#include "Dispositivos.h"
#include "Dispositivos.cpp"
#include "Data.h"
#include "Data.cpp"

int main()
{
    Dispositivos computadores(0, Data(30,9,2021));
    Dispositivos computadores("accer", 8);
    Dispositivos computadores1(computadores);
    string marcaComputador;
    int memoria;

    
    
    computadores.setMarcaComputador( marcaComputador, memoria );

    computadores.imprimeMensagem();
    computadores1.imprimeMensagem();

    computadores.printarUsuarios( );

    cout << "\nimprimindo numero ssd.\n";
    const int NSSD = 5;
    double ssd[ NSSD ] = { 120.0, 60.9, 240.0, 50.5, 60.6 };

    computadores.fornecerSSD( ssd, NSSD );
    computadores.printSSD( );


    return 0;
}