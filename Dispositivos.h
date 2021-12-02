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

    void setMarcaComputador( string nome, int memoria);

    string getMarcaComputador();
    
    void imprimeMensagem() const;

private:
   
    string marcaComputador;
   
    int memoria;
   
    const int maxSizeName = 10;

};
#endif // GRADEBOOK_H