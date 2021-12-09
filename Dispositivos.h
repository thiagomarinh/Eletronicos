#ifndef DISPOSITIVOS_H
#define DISPOSITIVOS_H

#include <iostream>
using std::cout;

#include <string>
using std::string;

class Dispositivos
{
public:

    Dispositivos();
    Dispositivos(string, int = 0);
    Dispositivos(int);
    Dispositivos( const Dispositivos& );

    void setMarcaComputador( string nome, int memoria);

    string getMarcaComputador();
    
    void imprimeMensagem() const;

    void mensagemTela( bool = true ) const;
    void mensagemTela( bool = true );

    void fornecerSSD( double [ ], int );

    void printSSD( ) const;

    void printarUsuarios( ) const;

    


private:
   
    string marcaComputador;
   
    int memoria;
   
    const int MAXSIZENAME = 10;

    static const int NUMUSUARIO = 2;
    static string usuario[ NUMUSUARIO ];

    static const int NSSD = 5;
    double ssd[ NSSD ];

};
#endif // GRADEBOOK_H