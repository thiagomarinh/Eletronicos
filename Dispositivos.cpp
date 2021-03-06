
#include "Dispositivos.h"
#include <iostream>
using std::cout;

#include <string>
using std::string;



const Data Dispositivos::RELEASEDATE = Data(25,9,2014);

Dispositivos::Dispositivos()
:marcaComputador(""), memoria()
{
}

Dispositivos::Dispositivos(string marcaComputador, int memoria)
{
    setMarcaComputador(marcaComputador, memoria);
}

//contrutor de copia
Dispositivos::Dispositivos( const Dispositivos& other )
:marcaComputador(other.marcaComputador), memoria(other.memoria), MAXSIZENAME(other.MAXSIZENAME)
{

}

string Dispositivos::usuario[ NUMUSUARIO ] = {"Thiago", "Maria"};

void Dispositivos::printarUsuarios( ) const
{
    for( int i = 0; i < NUMUSUARIO; i++ )
        cout << usuario[ i ] << '\n';
}

void Dispositivos::fornecerSSD( double ssd[ ], int nssd )
{
    if( NSSD <= nssd )
        for( int i = 0; i < NSSD; i++ )
            this->ssd[ i ] = ssd[ i ]; 
}

void Dispositivos::printSSD( ) const
{
    for( int i = 0; i < NSSD; i++ )
        cout << this->ssd[ i ] << '\n';
}      


void Dispositivos::setMarcaComputador( string nomeMarca, int memoria)
{
    if (nomeMarca.length() < MAXSIZENAME )
        marcaComputador = nomeMarca;
    else 
    {
        marcaComputador = nomeMarca.substr(0, MAXSIZENAME );
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

void Dispositivos::mensagemTela( bool check ) const
{
    if( check )
    {
        if( marcaComputador.size( ) > 0 )
            cout << "Bem vindo ao  " << marcaComputador << '.';          
        else
            cout << "Você não esta em seu computador.";

        cout << " Seu computador tem " << memoria << " gb de memoria.\n";  
    }

}
void Dispositivos::mostrarInfo( )
{
	cout << "A data de lancamento deste modelo eh:" << '\n';
		  RELEASEDATE.print(); 
		 
}

void Dispositivos::mostrarData( ) const
{
	cout << "A data atual eh: "; dataAtual.print();	
}
