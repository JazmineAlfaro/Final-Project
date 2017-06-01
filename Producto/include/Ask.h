#ifndef ASK_H
#define ASK_H
#include <iostream>
#include <string>

using namespace std;

class Ask{
public:
    string askCodigo();
    string askArticulo();
    string askClase();
    string askUnidad();
    string askPventa();
    string askMoneda();
    double askCosto();
    double askStock();
    string askMarca();
    string askModelo();
    string askProcesador();
};

#endif // ASK_H

