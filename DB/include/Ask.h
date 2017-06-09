#ifndef ASK_H
#define ASK_H
#include <iostream>
#include <string>

using namespace std;

class Ask{
public:
    int askNumber();
    char askRpta();
    string askCodigo();
    string askArticulo();
    string askClase();
    double askUnidad();
    double askPventa();
    double askMoneda();
    double askCosto();
    double askStock();
    string askMarca();
    string askModelo();
    string askProcesador();
};

#endif // ASK_H
